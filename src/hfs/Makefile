# Generated automatically from Makefile.in by configure.
############################################### Compiler 

# do not change anything in this section

srcdir       = .
top_srcdir   = ../..

CC           = gcc
MAKEDEPEND   = /bin/true
INSTALL      = /usr/bin/install -c

DEFS         = -DHAVE_CONFIG_H 
LDFLAGS      = -g
SYS_INCLUDES = 
INCLUDE      = -I$(top_srcdir)/include
CFLAGS       = -w -g -O2 $(INCLUDE) $(SYS_INCLUDES) $(DEFS)

MV           = /bin/mv
RM           = /bin/rm
SHELL        = /bin/sh

############################################### Custom

# Objects to compile in this folder on `make all'
OBJS  = hfs.o 

############################################### Rules

# no need to change anything below

.c.o:
	$(CC) $(CFLAGS) -c $(<)

noargs: all

all: $(OBJS)

clean:
	$(RM) -f *.o

distclean: clean
	$(RM) -f Makefile
