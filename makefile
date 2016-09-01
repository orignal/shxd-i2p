#
# shxd-0.2 makefile script
# February 2, 2002
# Devin Teske <devinteske@hotmail.com>
#

srcdir   = .

CC       = gcc
INSTALL  = /usr/bin/install -c
INSTALL_PROGRAM    = ${INSTALL}
INSTALL_DATA       = ${INSTALL} -m 644

MV       = /bin/mv
RM       = /bin/rm
SHELL    = /bin/sh

# Where to install
prefix   = /usr/local/shxd
exec_prefix   = ${prefix}
exec_suffix   = 

SUBDIRS  = src

mkfldep  = include/config.h.in src/Makefile.in \
           include/version.h

noargs: all

all tlist acctedit: makefile
	@for dir in $(SUBDIRS); do \
	   echo "Making $@ in $$dir..."; \
	   (cd $$dir ; $(MAKE) $(MFLAGS) prefix="$(prefix)" $@) || exit 1; \
	done

binaries:
	@./utils/mkbin

install: makefile
	@for dir in $(SUBDIRS); do \
	   echo "Making $@ in $$dir..."; \
	(cd $$dir ; $(MAKE) $(MFLAGS) prefix="$(prefix)" $@); \
	done
	@echo "installation: installing into $(prefix)"
	@if [ ! -e "$(prefix)" ]; then \
	   cp -Rf run $(prefix); \
	fi
	cp -f run/hxd $(prefix)/hxd;
	@if [ ! -e "$(prefix)/etc" ]; then \
	   cp -f run/hxd.conf $(prefix)/hxd.conf; \
	fi
	@if [ ! -e "$(prefix)/etc" ]; then \
	   cp -Rf run/etc $(prefix)/etc; \
	fi
	@echo "complete."

clean:
	@for dir in $(SUBDIRS); do \
	   echo "Making $@ in $$dir..."; \
	   (cd $$dir ; $(MAKE) $(MFLAGS) prefix="$(prefix)" $@); \
	done

almostclean: clean
	$(RM) -f config.log makefile include/config.h
	@for dir in $(SUBDIRS); do \
	   echo Making distclean in $$dir; \
	   (cd $$dir; $(MAKE) $(MFLAGS) prefix="$(prefix)" distclean); \
	done

distclean:
	$(RM) -f config.log makefile include/config.h config.status \
	         config.cache run/log bin/hxtrackd$(exec_suffix) \
	         bin/acctedit bin/tlist run/hxd$(exec_suffix) \
	         run/etc/.*cache
	@for dir in $(SUBDIRS); do \
	   echo Making distclean in $$dir; \
	   (cd $$dir; $(MAKE) $(MFLAGS) prefix="$(prefix)" distclean); \
	done

targz: distclean
	tar cvf current.tar . ; gzip current.tar

tgz: distclean
	tar czfv current.tgz .

makefile: $(mkfldep)
	@echo "Package configuration updated. Cleaning and reconfiguring" ;\
	./config.status --recheck;\
	./config.status ;\
	$(MAKE) $(MFLAGS) clean

depend:
