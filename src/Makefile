# Generated automatically from Makefile.in by configure.
#
# shxd-0.2 makefile script
# February 2, 2002
# Devin Teske <devinteske@hotmail.com>
#

srcdir          = .

INSTALL_PROGRAM = ${INSTALL}
INSTALL_DATA    = ${INSTALL} -m 644

# Where to install
prefix          = /usr/local/shxd
exec_prefix     = ${prefix}

# settings from configure
exec_suffix     = 
top_srcdir      = ..
bindir          = ${exec_prefix}/bin
libexecdir      = ${exec_prefix}/libexec
sysconfdir      = ${prefix}/etc
localstatedir   = ${prefix}/var

# Gotta love the DOS legacy
#
HXD_EXE         = $(top_srcdir)/run/hxd$(exec_suffix)
TRACKER_EXE     = $(top_srcdir)/bin/hxtrackd$(exec_suffix)

DEFAULT_PREFIX  = $(prefix)

CC              = gcc
MAKEDEPEND      = /bin/true
INSTALL         = /usr/bin/install -c

DEFS            = -DHAVE_CONFIG_H -U_FORTIFY_SOURCE 
LDFLAGS         = -g
SYS_INCLUDES    = 
INCLUDE         = -I$(top_srcdir)/include
CFLAGS          = -w -g -O2 $(INCLUDE) $(SYS_INCLUDES) $(DEFS)

# Libraries

# LIBOBJS holds missing objects (determined from AC_REPLACE_FUNC)
LIBOBJS         =  inet_ntoa_r.o
HXDLIBS         =  hfs/hfs.o apple/alias.o apple/files.o apple/mac_errno.o apple/mac_string.o apple/unicode.o
SHAREDLIBS      = 

# Objects
SHARED_OBJS     = fd.o version.o xmalloc.o decode.o \
                   snprintf.o $(LIBOBJS)
HXD_OBJS        = rcv.o accounts.o chat.o commands.o transactions.o    \
                  files.o hlserver.o htxf.o hxd_config.o ident.o       \
		  news.o string_m.o  hxd_main.o hxd_hlwrite.o \
		  hxd_tracker.o
TRACKER_OBJS    = hxd_config.o hxtrackd_main.o hxtrackd_tracker.o

# Build Targets
TARGETS         =  $(HXD_EXE)
hxddirs         =  hfs apple

MV              = /bin/mv
RM              = /bin/rm
SHELL           = /bin/sh

############################################### Rules

.c.o:
	$(CC) $(CFLAGS) -c $(<)

noargs: all

all: $(TARGETS)

install:

hxddirs:
	@for dir in $(hxddirs); do \
	   echo "Making all in $$dir..."; \
	   (cd $$dir;$(MAKE) $(MFLAGS) prefix="$(prefix)" all)||exit 1;\
	done

$(HXD_EXE): hxddirs $(SHARED_OBJS) $(HXD_OBJS)
	$(CC) $(LDFLAGS) $(DEFS) $(HXD_OBJS) $(SHARED_OBJS) $(HXDLIBS) $(SHAREDLIBS) -o $@
	@echo "make: success -> binary should be in \`run'"

$(TRACKER_EXE): hxddirs $(SHARED_OBJS) $(TRACKER_OBJS)
	$(CC) $(LDFLAGS) $(DEFS) $(TRACKER_OBJS) $(SHARED_OBJS) $(SHAREDLIBS) -o $@
	@echo "make: success -> binary should be in \`bin'"

hxd_main.o: main.c $(top_srcdir)/include/main.h
	$(CC) -c $(CFLAGS) -DONLY_SERVER main.c -o $@

hxtrackd_main.o: main.c $(top_srcdir)/include/main.h
	$(CC) -c $(CFLAGS) -DONLY_TRACKER main.c -o $@

hxd_tracker.o: tracker.c $(top_srcdir)/include/main.h
	$(CC) -c $(CFLAGS) -DONLY_SERVER tracker.c -o $@

hxtrackd_tracker.o: tracker.c $(top_srcdir)/include/main.h
	$(CC) -c $(CFLAGS) -DONLY_TRACKER tracker.c -o $@

hxd_hlwrite.o: hlwrite.c $(top_srcdir)/include/main.h
	$(CC) -c $(CFLAGS) -DONLY_SERVER hlwrite.c -o $@

acctedit:
	$(CC) $(LDFLAGS) $(CFLAGS) -o $(top_srcdir)/bin/acctedit $(top_srcdir)/rorsch/acctedit.c -lncurses
	@echo "make: success -> binary should be in \`bin'"

tlist:
	$(CC) $(LDFLAGS) $(CFLAGS) -o $(top_srcdir)/bin/tlist $(top_srcdir)/rorsch/tlist.c
	@echo "make: success -> binary should be in \`bin'"

clean:
	$(RM) -f *.o
	@for dir in $(hxddirs); do \
	   echo "Making $@ in $$dir..."; \
	   (cd $$dir;$(MAKE) $(MFLAGS) prefix="$(prefix)" $@);\
	done

distclean:
	$(RM) -f *.o Makefile
	@for dir in $(hxddirs); do \
	   echo Making distclean in $$dir; \
	   (cd $$dir;$(MAKE) $(MFLAGS) prefix="$(prefix)" distclean);\
	done
