/* nbcompat/config.h.  Generated from config.h.in by configure.  */
/* nbcompat/config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Define to 1 if the `pread' function is broken. */
/* #undef BROKEN_PREAD */

/* Define to 1 if the `pwrite' function is broken. */
/* #undef BROKEN_PWRITE */

/* Define to 1 if the `getpgrp' function requires zero arguments. */
#define GETPGRP_VOID 1

/* Define to 1 if you have the <alloca.h> header file. */
/* #undef HAVE_ALLOCA_H */

/* Define to 1 if you have the `asprintf' function. */
#define HAVE_ASPRINTF 1

/* Define to 1 if you have the <assert.h> header file. */
#define HAVE_ASSERT_H 1

/* Define to 1 if you have the `bcopy' function. */
#define HAVE_BCOPY 1

/* Define to 1 if you have the `bzero' function. */
#define HAVE_BZERO 1

/* Define to 1 if you have the <ctype.h> header file. */
#define HAVE_CTYPE_H 1

/* Define to 1 if you have the declaration of `endgrent', and to 0 if you
   don't. */
#define HAVE_DECL_ENDGRENT 0

/* Define to 1 if you have the declaration of `endpwent', and to 0 if you
   don't. */
#define HAVE_DECL_ENDPWENT 0

/* Define to 1 if you have the declaration of `optarg', and to 0 if you don't.
   */
#define HAVE_DECL_OPTARG 1

/* Define to 1 if you have the declaration of `optind', and to 0 if you don't.
   */
#define HAVE_DECL_OPTIND 1

/* Define to 1 if you have the declaration of `optreset', and to 0 if you
   don't. */
#define HAVE_DECL_OPTRESET 1

/* Define to 1 if you have the declaration of `setpassent', and to 0 if you
   don't. */
#define HAVE_DECL_SETPASSENT 0

/* Define to 1 if you have the declaration of `snprintf', and to 0 if you
   don't. */
#define HAVE_DECL_SNPRINTF 1

/* Define to 1 if you have the declaration of `strerror_r', and to 0 if you
   don't. */
#define HAVE_DECL_STRERROR_R 1

/* Define to 1 if you have the declaration of `vasprintf', and to 0 if you
   don't. */
#define HAVE_DECL_VASPRINTF 1

/* Define to 1 if you have the <dirent.h> header file. */
#define HAVE_DIRENT_H 1

/* Define if dirfd is either a function or a macro. */
#define HAVE_DIRFD 1

/* Define to 1 if `dd_fd' is a member of `DIR'. */
#define HAVE_DIR_DD_FD 1

/* Define to 1 if you don't have `vprintf' but do have `_doprnt.' */
/* #undef HAVE_DOPRNT */

/* Define to 1 if you have the <endian.h> header file. */
/* #undef HAVE_ENDIAN_H */

/* Define to 1 if you have the `err' function. */
#define HAVE_ERR 1

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

/* Define to 1 if you have the <err.h> header file. */
#define HAVE_ERR_H 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `fgetln' function. */
#define HAVE_FGETLN 1

/* Define to 1 if you have the `fnmatch' function. */
#define HAVE_FNMATCH 1

/* Define to 1 if you have the <fnmatch.h> header file. */
#define HAVE_FNMATCH_H 1

/* Define to 1 if you have the `fork' function. */
#define HAVE_FORK 1

/* Define to 1 if you have the `fparseln' function. */
#define HAVE_FPARSELN 1

/* Define to 1 if the system has the type `fsid_t'. */
#define HAVE_FSID_T 1

/* Define to 1 if you have the <fts.h> header file. */
#define HAVE_FTS_H 1

/* Define to 1 if you have the `gai_strerror' function. */
#define HAVE_GAI_STRERROR 1

/* Define to 1 if you have the `getaddrinfo' function. */
#define HAVE_GETADDRINFO 1

/* Define to 1 if you have the `getenv' function. */
#define HAVE_GETENV 1

/* Define to 1 if you have the `getmode' function. */
#define HAVE_GETMODE 1

/* Define to 1 if you have the `getnameinfo' function. */
#define HAVE_GETNAMEINFO 1

/* Define to 1 if you have the <getopt.h> header file. */
#define HAVE_GETOPT_H 1

/* Define to 1 if you have the `getpassphrase' function. */
/* #undef HAVE_GETPASSPHRASE */

/* Define to 1 if you have the `getpgrp' function. */
#define HAVE_GETPGRP 1

/* Define to 1 if you have the `gid_from_group' function. */
#define HAVE_GID_FROM_GROUP 1

/* Define to 1 if you have the <glob.h> header file. */
#define HAVE_GLOB_H 1

/* Define to 1 if you have the `group_from_gid' function. */
#define HAVE_GROUP_FROM_GID 1

/* Define to 1 if you have the <grp.h> header file. */
#define HAVE_GRP_H 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `isblank' function. */
#define HAVE_ISBLANK 1

/* Define to 1 if you have the `issetugid' function. */
#define HAVE_ISSETUGID 1

/* Define to 1 if you have the `lchflags' function. */
#define HAVE_LCHFLAGS 1

/* Define to 1 if you have the `lchmod' function. */
#define HAVE_LCHMOD 1

/* Define to 1 if you have the `lchown' function. */
#define HAVE_LCHOWN 1

/* Define to 1 if you have the `nsl' library (-lnsl). */
/* #undef HAVE_LIBNSL */

/* Define to 1 if you have the `util' library (-lutil). */
#define HAVE_LIBUTIL 1

/* Define to 1 if you have the <libutil.h> header file. */
#define HAVE_LIBUTIL_H 1

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if the system has the type `long double'. */
#define HAVE_LONG_DOUBLE 1

/* Define to 1 if the system has the type `long long'. */
#define HAVE_LONG_LONG 1

/* Define to 1 if you have the `lutimes' function. */
#define HAVE_LUTIMES 1

/* Define to 1 if you have the <machine/endian.h> header file. */
#define HAVE_MACHINE_ENDIAN_H 1

/* Define to 1 if your system has a GNU libc compatible `malloc' function, and
   to 0 otherwise. */
#define HAVE_MALLOC 1

/* Define to 1 if you have the <md5.h> header file. */
#define HAVE_MD5_H 1

/* Define to 1 if you have the `memcpy' function. */
#define HAVE_MEMCPY 1

/* Define to 1 if you have the `memmove' function. */
#define HAVE_MEMMOVE 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `memset' function. */
#define HAVE_MEMSET 1

/* Define to 1 if you have the `mkdtemp' function. */
#define HAVE_MKDTEMP 1

/* Define to 1 if you have the `mkstemp' function. */
#define HAVE_MKSTEMP 1

/* Define to 1 if the `fts_*' functions are built into the library. */
/* #undef HAVE_NBCOMPAT_FTS */

/* Define to 1 if the `glob' function is built into the library. */
#define HAVE_NBCOMPAT_GLOB 1

/* Define to 1 if the `MD5*' functions are built into the library. */
/* #undef HAVE_NBCOMPAT_MD5 */

/* Define to 1 if the `MD5Init' function is built into the library. */
/* #undef HAVE_NBCOMPAT_MD5INIT */

/* Define to 1 if the `poll' function is built into the library. */
/* #undef HAVE_NBCOMPAT_POLL */

/* Define to 1 if the `queue' macros are supplied by the library. */
#define HAVE_NBCOMPAT_QUEUE 1

/* Define to 1 if the `regex' functions are built into the library. */
/* #undef HAVE_NBCOMPAT_REGEX */

/* Define to 1 if the `RMD160*' functions are built into the library. */
/* #undef HAVE_NBCOMPAT_RMD160 */

/* Define to 1 if the `SHA1*' functions are built into the library. */
/* #undef HAVE_NBCOMPAT_SHA1 */

/* Define to 1 if the `SHA2*' functions are built into the library. */
/* #undef HAVE_NBCOMPAT_SHA2 */

/* Define to 1 if the `vis' function is built into the library. */
/* #undef HAVE_NBCOMPAT_VIS */

/* Define to 1 if you have the <ndir.h> header file. */
/* #undef HAVE_NDIR_H */

/* Define to 1 if you have the <netdb.h> header file. */
#define HAVE_NETDB_H 1

/* Define to 1 if you have the <paths.h> header file. */
#define HAVE_PATHS_H 1

/* Define to 1 if you have the <poll.h> header file. */
#define HAVE_POLL_H 1

/* Define to 1 if *printf() uses %qd to print `long long' (otherwise uses
   %lld). */
/* #undef HAVE_PRINTF_QD */

/* Define to 1 if you have the `pwcache_groupdb' function. */
#define HAVE_PWCACHE_GROUPDB 1

/* Define to 1 if you have the `pwcache_userdb' function. */
#define HAVE_PWCACHE_USERDB 1

/* Define to 1 if you have the <pwd.h> header file. */
#define HAVE_PWD_H 1

/* Define to 1 if you have the <regex.h> header file. */
#define HAVE_REGEX_H 1

/* Define to 1 if you have the <rmd160.h> header file. */
#define HAVE_RMD160_H 1

/* Define to 1 if you have the `select' function. */
#define HAVE_SELECT 1

/* Define to 1 if you have the `setenv' function. */
#define HAVE_SETENV 1

/* Define to 1 if you have the `setgroupent' function. */
#define HAVE_SETGROUPENT 1

/* Define to 1 if you have the `setlocale' function. */
#define HAVE_SETLOCALE 1

/* Define to 1 if you have the `setmode' function. */
#define HAVE_SETMODE 1

/* Define to 1 if you have the `setpassent' function. */
#define HAVE_SETPASSENT 1

/* Define to 1 if you have the `setprogname' function. */
#define HAVE_SETPROGNAME 1

/* Define to 1 if you have the <sha1.h> header file. */
#define HAVE_SHA1_H 1

/* Define to 1 if you have the <sha2.h> header file. */
#define HAVE_SHA2_H 1

/* Define to 1 if you have the `shquote' function. */
#define HAVE_SHQUOTE 1

/* Define to 1 if you have the <signal.h> header file. */
#define HAVE_SIGNAL_H 1

/* Define to 1 if you have the `snprintf' function. */
#define HAVE_SNPRINTF 1

/* Define to 1 if the system has the type `socklen_t'. */
#define HAVE_SOCKLEN_T 1

/* Define to 1 if you have the `statvfs' function. */
#define HAVE_STATVFS 1

/* Define to 1 if you have the <stdarg.h> header file. */
#define HAVE_STDARG_H 1

/* Define to 1 if stdbool.h conforms to C99. */
#define HAVE_STDBOOL_H 1

/* Define to 1 if you have the <stddef.h> header file. */
#define HAVE_STDDEF_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the `strerror_r' function. */
#define HAVE_STRERROR_R 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strlcat' function. */
#define HAVE_STRLCAT 1

/* Define to 1 if you have the `strlcpy' function. */
#define HAVE_STRLCPY 1

/* Define to 1 if you have the `strmode' function. */
#define HAVE_STRMODE 1

/* Define to 1 if you have the `strsep' function. */
#define HAVE_STRSEP 1

/* Define to 1 if you have the `strsvis' function. */
#define HAVE_STRSVIS 1

/* Define to 1 if you have the `strtoll' function. */
#define HAVE_STRTOLL 1

/* Define to 1 if the system has the type `struct addrinfo'. */
#define HAVE_STRUCT_ADDRINFO 1

/* Define to 1 if `d_namlen' is a member of `struct dirent'. */
#define HAVE_STRUCT_DIRENT_D_NAMLEN 1

/* Define to 1 if the system has the type `struct in6_addr'. */
#define HAVE_STRUCT_IN6_ADDR 1

/* Define to 1 if the system has the type `struct option'. */
#define HAVE_STRUCT_OPTION 1

/* Define to 1 if the system has the type `struct sockaddr_in6'. */
#define HAVE_STRUCT_SOCKADDR_IN6 1

/* Define to 1 if the system has the type `struct sockaddr_storage'. */
#define HAVE_STRUCT_SOCKADDR_STORAGE 1

/* Define to 1 if `f_flags' is a member of `struct statfs'. */
/* #undef HAVE_STRUCT_STATFS_F_FLAGS */

/* Define to 1 if `f_fsize' is a member of `struct statfs'. */
/* #undef HAVE_STRUCT_STATFS_F_FSIZE */

/* Define to 1 if `f_iosize' is a member of `struct statfs'. */
/* #undef HAVE_STRUCT_STATFS_F_IOSIZE */

/* Define to 1 if you have the `strunvis' function. */
#define HAVE_STRUNVIS 1

/* Define to 1 if you have the `strvis' function. */
#define HAVE_STRVIS 1

/* Define to 1 if you have the `svis' function. */
#define HAVE_SVIS 1

/* Define to 1 if you have the <sysexits.h> header file. */
#define HAVE_SYSEXITS_H 1

/* Define to 1 if you have the <sys/byteorder.h> header file. */
/* #undef HAVE_SYS_BYTEORDER_H */

/* Define to 1 if you have the <sys/cdefs.h> header file. */
#define HAVE_SYS_CDEFS_H 1

/* Define to 1 if you have the <sys/dir.h> header file. */
#define HAVE_SYS_DIR_H 1

/* Define to 1 if you have the <sys/endian.h> header file. */
#define HAVE_SYS_ENDIAN_H 1

/* Define to 1 if you have the <sys/file.h> header file. */
#define HAVE_SYS_FILE_H 1

/* Define to 1 if you have the <sys/mkdev.h> header file. */
/* #undef HAVE_SYS_MKDEV_H */

/* Define to 1 if you have the <sys/mount.h> header file. */
#define HAVE_SYS_MOUNT_H 1

/* Define to 1 if you have the <sys/ndir.h> header file. */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/poll.h> header file. */
#define HAVE_SYS_POLL_H 1

/* Define to 1 if you have the <sys/queue.h> header file. */
#define HAVE_SYS_QUEUE_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/statfs.h> header file. */
#define HAVE_SYS_STATFS_H 1

/* Define to 1 if you have the <sys/statvfs.h> header file. */
#define HAVE_SYS_STATVFS_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/ttycom.h> header file. */
#define HAVE_SYS_TTYCOM_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/uio.h> header file. */
#define HAVE_SYS_UIO_H 1

/* Define to 1 if you have the <sys/vfs.h> header file. */
/* #undef HAVE_SYS_VFS_H */

/* Define to 1 if you have the <termcap.h> header file. */
#define HAVE_TERMCAP_H 1

/* Define to 1 if you have the <time.h> header file. */
#define HAVE_TIME_H 1

/* Define to 1 if you have the <tzfile.h> header file. */
#define HAVE_TZFILE_H 1

/* Define to 1 if you have the `uid_from_user' function. */
#define HAVE_UID_FROM_USER 1

/* Define to 1 if the system has the type `uintptr_t'. */
#define HAVE_UINTPTR_T 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `unsetenv' function. */
#define HAVE_UNSETENV 1

/* Define to 1 if you have the `unvis' function. */
#define HAVE_UNVIS 1

/* Define to 1 if you have the `user_from_uid' function. */
#define HAVE_USER_FROM_UID 1

/* Define to 1 if you have the `usleep' function. */
#define HAVE_USLEEP 1

/* Define to 1 if you have the <util.h> header file. */
#define HAVE_UTIL_H 1

/* Define to 1 if you have the `utimes' function. */
#define HAVE_UTIMES 1

/* Define to 1 if you have the <utime.h> header file. */
#define HAVE_UTIME_H 1

/* Define to 1 if the `va_copy' function is supported. */
#define HAVE_VA_COPY 1

/* Define to 1 if you have the `vfork' function. */
#define HAVE_VFORK 1

/* Define to 1 if you have the <vfork.h> header file. */
/* #undef HAVE_VFORK_H */

/* Define to 1 if you have the `vis' function. */
#define HAVE_VIS 1

/* Define to 1 if you have the <vis.h> header file. */
#define HAVE_VIS_H 1

/* Define to 1 if you have the `vprintf' function. */
#define HAVE_VPRINTF 1

/* Define to 1 if you have the `warn' function. */
#define HAVE_WARN 1

/* Define to 1 if `fork' works. */
#define HAVE_WORKING_FORK 1

/* Define to 1 if `long long' is supported and sizeof(off_t) >= 8. */
#define HAVE_WORKING_LONG_LONG 1

/* Define to 1 if `vfork' works. */
#define HAVE_WORKING_VFORK 1

/* Define to 1 if the system has the type `_Bool'. */
#define HAVE__BOOL 1

/* define if your compiler has __attribute__ */
#define HAVE___ATTRIBUTE__ 1

/* Define to 1 if the `__builtin_va_copy' function is supported. */
#define HAVE___BUILTIN_VA_COPY 1

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "joerg@NetBSD.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "libnbcompat"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "libnbcompat 20120702"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "libnbcompat"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "20120702"

/* The size of `off_t', as computed by sizeof. */
#define SIZEOF_OFF_T 8

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if strerror_r returns char *. */
/* #undef STRERROR_R_CHAR_P */

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Define for Solaris 2.5.1 so the uint32_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
/* #undef _UINT32_T */

/* Define for Solaris 2.5.1 so the uint64_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
/* #undef _UINT64_T */

/* Define for Solaris 2.5.1 so the uint8_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
/* #undef _UINT8_T */

/* Define to the type of a signed integer type of width exactly 16 bits if
   such a type exists and the standard includes do not define it. */
/* #undef int16_t */

/* Define to the type of a signed integer type of width exactly 32 bits if
   such a type exists and the standard includes do not define it. */
/* #undef int32_t */

/* Define to the type of a signed integer type of width exactly 64 bits if
   such a type exists and the standard includes do not define it. */
/* #undef int64_t */

/* Define to the type of a signed integer type of width exactly 8 bits if such
   a type exists and the standard includes do not define it. */
/* #undef int8_t */

/* Define to rpl_malloc if the replacement function should be used. */
/* #undef malloc */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define to the type of an unsigned integer type of width exactly 16 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint16_t */

/* Define to the type of an unsigned integer type of width exactly 32 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint32_t */

/* Define to the type of an unsigned integer type of width exactly 64 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint64_t */

/* Define to the type of an unsigned integer type of width exactly 8 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint8_t */

/* Define to the type of an unsigned integer type wide enough to hold a
   pointer, if such a type exists, and if the system does not define it. */
/* #undef uintptr_t */

/* Define as `fork' if `vfork' does not work. */
/* #undef vfork */


/* NBCOMPAT template section follows. */

#ifndef HAVE___ATTRIBUTE__
# define __attribute__(x)
#endif

