/* include/config.h.  Generated automatically by configure.  */
/* include/config.h.in.  Generated automatically from configure.in by autoheader.  */

/* Define to empty if the keyword does not work.  */
/* #undef const */

/* Define as __inline if that's what the C compiler calls it.  */
/* #undef inline */

/* Define to `int' if <sys/types.h> doesn't define.  */
/* #undef pid_t */

/* Define if you need to in order for stat and other things to work.  */
/* #undef _POSIX_SOURCE */

/* Define as the return type of signal handlers (int or void).  */
#define RETSIGTYPE void

/* Define to `unsigned' if <sys/types.h> doesn't define.  */
/* #undef size_t */

/* Define if you have the ANSI C header files.  */
#define STDC_HEADERS 1

/* Define if your processor stores words with the most significant
   byte first (like Motorola and SPARC, unlike Intel and VAX).  */
/* #undef WORDS_BIGENDIAN */

/* data types */
/* #undef ssize_t */
/* #undef u_int8_t */
/* #undef u_int16_t */
/* #undef u_int32_t */
/* #undef int8_t */
/* #undef int16_t */
/* #undef int32_t */
/* #undef socklen_t */

/* host guessing */
#define CONFIG_HOST_TYPE ""

/* system constants */
#define BROKEN_SNPRINTF 1
#define PATH_TR "/usr/bin/tr"

/* kludges */
/* #undef ENABLE_STDARG_H */

/* targets */
#define CONFIG_HOTLINE_SERVER 1
/* #undef CONFIG_TRACKER_SERVER */

/* file transfer methods */
/* #undef CONFIG_HTXF_PTHREAD */
/* #undef CONFIG_HTXF_CLONE */
#define CONFIG_HTXF_FORK 1

/* file transfer options */
/* #undef CONFIG_HTXF_PREVIEW */
/* #undef CONFIG_HTXF_QUEUE */

/* secure/encrypted connections */
/* #undef CONFIG_HOPE */
/* #undef CONFIG_CIPHER */
/* #undef CONFIG_CIPHER_IDEA */

/* on-the-fly compression */
/* #undef CONFIG_COMPRESS */

/* broken/unfinished features */
/* #undef CONFIG_NETWORK */

/* sql logging */
/* #undef CONFIG_SQL */

/* Enable IPv6 Support */
/* #undef CONFIG_IPV6 */

/* function presence declarations */
#define HAVE_STRCASESTR 1
/* #undef HAVE_BASENAME */
#define HAVE_REALPATH 1
#define HAVE_STRPTIME 1

/* Apple constants */
/* #undef HOST_DARWIN */
/* #undef HAVE_CORESERVICES */

/* additional logging and debugging options */
/* #undef XMALLOC_DEBUG */

/* The number of bytes in a int.  */
#define SIZEOF_INT 4

/* The number of bytes in a long.  */
#define SIZEOF_LONG 8

/* The number of bytes in a void *.  */
#define SIZEOF_VOID_P 8

/* Define if you have the getdtablesize function.  */
#define HAVE_GETDTABLESIZE 1

/* Define if you have the getrlimit function.  */
#define HAVE_GETRLIMIT 1

/* Define if you have the inet_aton function.  */
#define HAVE_INET_ATON 1

/* Define if you have the inet_ntoa_r function.  */
/* #undef HAVE_INET_NTOA_R */

/* Define if you have the localtime_r function.  */
#define HAVE_LOCALTIME_R 1

/* Define if you have the snprintf function.  */
#define HAVE_SNPRINTF 1

/* Define if you have the vsnprintf function.  */
#define HAVE_VSNPRINTF 1

/* Define if you have the <arpa/inet.h> header file.  */
#define HAVE_ARPA_INET_H 1

/* Define if you have the <ctype.h> header file.  */
#define HAVE_CTYPE_H 1

/* Define if you have the <dirent.h> header file.  */
#define HAVE_DIRENT_H 1

/* Define if you have the <endian.h> header file.  */
/* #undef HAVE_ENDIAN_H */

/* Define if you have the <errno.h> header file.  */
#define HAVE_ERRNO_H 1

/* Define if you have the <fcntl.h> header file.  */
#define HAVE_FCNTL_H 1

/* Define if you have the <fnmatch.h> header file.  */
#define HAVE_FNMATCH_H 1

/* Define if you have the <mysql.h> header file.  */
/* #undef HAVE_MYSQL_H */

/* Define if you have the <ndir.h> header file.  */
/* #undef HAVE_NDIR_H */

/* Define if you have the <netdb.h> header file.  */
#define HAVE_NETDB_H 1

/* Define if you have the <netinet/in.h> header file.  */
#define HAVE_NETINET_IN_H 1

/* Define if you have the <openssl/rand.h> header file.  */
/* #undef HAVE_OPENSSL_RAND_H */

/* Define if you have the <pthread.h> header file.  */
#define HAVE_PTHREAD_H 1

/* Define if you have the <signal.h> header file.  */
#define HAVE_SIGNAL_H 1

/* Define if you have the <stdarg.h> header file.  */
#define HAVE_STDARG_H 1

/* Define if you have the <stdio.h> header file.  */
#define HAVE_STDIO_H 1

/* Define if you have the <stdlib.h> header file.  */
#define HAVE_STDLIB_H 1

/* Define if you have the <string.h> header file.  */
#define HAVE_STRING_H 1

/* Define if you have the <strings.h> header file.  */
#define HAVE_STRINGS_H 1

/* Define if you have the <sys/dir.h> header file.  */
/* #undef HAVE_SYS_DIR_H */

/* Define if you have the <sys/ioctl.h> header file.  */
#define HAVE_SYS_IOCTL_H 1

/* Define if you have the <sys/ndir.h> header file.  */
/* #undef HAVE_SYS_NDIR_H */

/* Define if you have the <sys/param.h> header file.  */
#define HAVE_SYS_PARAM_H 1

/* Define if you have the <sys/select.h> header file.  */
#define HAVE_SYS_SELECT_H 1

/* Define if you have the <sys/socket.h> header file.  */
#define HAVE_SYS_SOCKET_H 1

/* Define if you have the <sys/stat.h> header file.  */
#define HAVE_SYS_STAT_H 1

/* Define if you have the <sys/time.h> header file.  */
#define HAVE_SYS_TIME_H 1

/* Define if you have the <sys/types.h> header file.  */
#define HAVE_SYS_TYPES_H 1

/* Define if you have the <sys/wait.h> header file.  */
#define HAVE_SYS_WAIT_H 1

/* Define if you have the <time.h> header file.  */
#define HAVE_TIME_H 1

/* Define if you have the <unistd.h> header file.  */
#define HAVE_UNISTD_H 1

/* Define if you have the <varargs.h> header file.  */
/* #undef HAVE_VARARGS_H */

/* Define if you have the 44bsd library (-l44bsd).  */
/* #undef HAVE_LIB44BSD */

/* Define if you have the bind library (-lbind).  */
/* #undef HAVE_LIBBIND */

/* Define if you have the m library (-lm).  */
#define HAVE_LIBM 1

/* Define if you have the nsl library (-lnsl).  */
/* #undef HAVE_LIBNSL */

/* Define if you have the pthread library (-lpthread).  */
/* #undef HAVE_LIBPTHREAD */

/* Define if you have the resolv library (-lresolv).  */
#define HAVE_LIBRESOLV 1

/* Define if you have the socket library (-lsocket).  */
/* #undef HAVE_LIBSOCKET */

/* Define if you have the socks5 library (-lsocks5).  */
/* #undef HAVE_LIBSOCKS5 */
