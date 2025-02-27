/* nbcompat/config.h.  Generated from config.h.in by configure.  */
/* nbcompat/config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Define to 1 if the `pread' function is broken. */
/* #undef BROKEN_PREAD */

/* Define to 1 if the `pwrite' function is broken. */
/* #undef BROKEN_PWRITE */

/* Define to 1 if the `getpgrp' function requires zero arguments. */
#ifndef GETPGRP_VOID
#define GETPGRP_VOID 1
#endif

/* Define to 1 if you have the <alloca.h> header file. */
/* #undef HAVE_ALLOCA_H */

/* Define to 1 if you have the `asprintf' function. */
#ifndef HAVE_ASPRINTF
#define HAVE_ASPRINTF 1
#endif

/* Define to 1 if you have the <assert.h> header file. */
#ifndef HAVE_ASSERT_H
#define HAVE_ASSERT_H 1
#endif

/* Define to 1 if you have the `bcopy' function. */
#ifndef HAVE_BCOPY
#define HAVE_BCOPY 1
#endif

/* Define to 1 if you have the `bzero' function. */
#ifndef HAVE_BZERO
#define HAVE_BZERO 1
#endif

/* Define to 1 if you have the <ctype.h> header file. */
#ifndef HAVE_CTYPE_H
#define HAVE_CTYPE_H 1
#endif

/* Define to 1 if you have the declaration of `endgrent', and to 0 if you
   don't. */
#ifndef HAVE_DECL_ENDGRENT
#define HAVE_DECL_ENDGRENT 0
#endif

/* Define to 1 if you have the declaration of `endpwent', and to 0 if you
   don't. */
#ifndef HAVE_DECL_ENDPWENT
#define HAVE_DECL_ENDPWENT 0
#endif

/* Define to 1 if you have the declaration of `optarg', and to 0 if you don't.
   */
#ifndef HAVE_DECL_OPTARG
#define HAVE_DECL_OPTARG 1
#endif

/* Define to 1 if you have the declaration of `optind', and to 0 if you don't.
   */
#ifndef HAVE_DECL_OPTIND
#define HAVE_DECL_OPTIND 1
#endif

/* Define to 1 if you have the declaration of `optreset', and to 0 if you
   don't. */
#ifndef HAVE_DECL_OPTRESET
#define HAVE_DECL_OPTRESET 1
#endif

/* Define to 1 if you have the declaration of `setpassent', and to 0 if you
   don't. */
#ifndef HAVE_DECL_SETPASSENT
#define HAVE_DECL_SETPASSENT 0
#endif

/* Define to 1 if you have the declaration of `snprintf', and to 0 if you
   don't. */
#ifndef HAVE_DECL_SNPRINTF
#define HAVE_DECL_SNPRINTF 1
#endif

/* Define to 1 if you have the declaration of `strerror_r', and to 0 if you
   don't. */
#ifndef HAVE_DECL_STRERROR_R
#define HAVE_DECL_STRERROR_R 1
#endif

/* Define to 1 if you have the declaration of `vasprintf', and to 0 if you
   don't. */
#ifndef HAVE_DECL_VASPRINTF
#define HAVE_DECL_VASPRINTF 1
#endif

/* Define to 1 if you have the <dirent.h> header file. */
#ifndef HAVE_DIRENT_H
#define HAVE_DIRENT_H 1
#endif

/* Define if dirfd is either a function or a macro. */
#ifndef HAVE_DIRFD
#define HAVE_DIRFD 1
#endif

/* Define to 1 if `dd_fd' is a member of `DIR'. */
#ifndef HAVE_DIR_DD_FD
#define HAVE_DIR_DD_FD 1
#endif

/* Define to 1 if you don't have `vprintf' but do have `_doprnt.' */
/* #undef HAVE_DOPRNT */

/* Define to 1 if you have the <endian.h> header file. */
/* #undef HAVE_ENDIAN_H */

/* Define to 1 if you have the `err' function. */
#ifndef HAVE_ERR
#define HAVE_ERR 1
#endif

/* Define to 1 if you have the <errno.h> header file. */
#ifndef HAVE_ERRNO_H
#define HAVE_ERRNO_H 1
#endif

/* Define to 1 if you have the <err.h> header file. */
#ifndef HAVE_ERR_H
#define HAVE_ERR_H 1
#endif

/* Define to 1 if you have the <fcntl.h> header file. */
#ifndef HAVE_FCNTL_H
#define HAVE_FCNTL_H 1
#endif

/* Define to 1 if you have the `fgetln' function. */
#ifndef HAVE_FGETLN
#define HAVE_FGETLN 1
#endif

/* Define to 1 if you have the `fnmatch' function. */
#ifndef HAVE_FNMATCH
#define HAVE_FNMATCH 1
#endif

/* Define to 1 if you have the <fnmatch.h> header file. */
#ifndef HAVE_FNMATCH_H
#define HAVE_FNMATCH_H 1
#endif

/* Define to 1 if you have the `fork' function. */
#ifndef HAVE_FORK
#define HAVE_FORK 1
#endif

/* Define to 1 if you have the `fparseln' function. */
#ifndef HAVE_FPARSELN
#define HAVE_FPARSELN 1
#endif

/* Define to 1 if the system has the type `fsid_t'. */
#ifndef HAVE_FSID_T
#define HAVE_FSID_T 1
#endif

/* Define to 1 if you have the <fts.h> header file. */
#ifndef HAVE_FTS_H
#define HAVE_FTS_H 1
#endif

/* Define to 1 if you have the `gai_strerror' function. */
#ifndef HAVE_GAI_STRERROR
#define HAVE_GAI_STRERROR 1
#endif

/* Define to 1 if you have the `getaddrinfo' function. */
#ifndef HAVE_GETADDRINFO
#define HAVE_GETADDRINFO 1
#endif

/* Define to 1 if you have the `getenv' function. */
#ifndef HAVE_GETENV
#define HAVE_GETENV 1
#endif

/* Define to 1 if you have the `getmode' function. */
#ifndef HAVE_GETMODE
#define HAVE_GETMODE 1
#endif

/* Define to 1 if you have the `getnameinfo' function. */
#ifndef HAVE_GETNAMEINFO
#define HAVE_GETNAMEINFO 1
#endif

/* Define to 1 if you have the <getopt.h> header file. */
#ifndef HAVE_GETOPT_H
#define HAVE_GETOPT_H 1
#endif

/* Define to 1 if you have the `getpassphrase' function. */
/* #undef HAVE_GETPASSPHRASE */

/* Define to 1 if you have the `getpgrp' function. */
#ifndef HAVE_GETPGRP
#define HAVE_GETPGRP 1
#endif

/* Define to 1 if you have the `gid_from_group' function. */
#ifndef HAVE_GID_FROM_GROUP
#define HAVE_GID_FROM_GROUP 1
#endif

/* Define to 1 if you have the <glob.h> header file. */
#ifndef HAVE_GLOB_H
#define HAVE_GLOB_H 1
#endif

/* Define to 1 if you have the `group_from_gid' function. */
#ifndef HAVE_GROUP_FROM_GID
#define HAVE_GROUP_FROM_GID 1
#endif

/* Define to 1 if you have the <grp.h> header file. */
#ifndef HAVE_GRP_H
#define HAVE_GRP_H 1
#endif

/* Define to 1 if you have the <inttypes.h> header file. */
#ifndef HAVE_INTTYPES_H
#define HAVE_INTTYPES_H 1
#endif

/* Define to 1 if you have the `isblank' function. */
#ifndef HAVE_ISBLANK
#define HAVE_ISBLANK 1
#endif

/* Define to 1 if you have the `issetugid' function. */
#ifndef HAVE_ISSETUGID
#define HAVE_ISSETUGID 1
#endif

/* Define to 1 if you have the `lchflags' function. */
#ifndef HAVE_LCHFLAGS
#define HAVE_LCHFLAGS 1
#endif

/* Define to 1 if you have the `lchmod' function. */
#ifndef HAVE_LCHMOD
#define HAVE_LCHMOD 1
#endif

/* Define to 1 if you have the `lchown' function. */
#ifndef HAVE_LCHOWN
#define HAVE_LCHOWN 1
#endif

/* Define to 1 if you have the `nsl' library (-lnsl). */
/* #undef HAVE_LIBNSL */

/* Define to 1 if you have the `util' library (-lutil). */
#ifndef HAVE_LIBUTIL
#define HAVE_LIBUTIL 1
#endif

/* Define to 1 if you have the <libutil.h> header file. */
#ifndef HAVE_LIBUTIL_H
#define HAVE_LIBUTIL_H 1
#endif

/* Define to 1 if you have the <limits.h> header file. */
#ifndef HAVE_LIMITS_H
#define HAVE_LIMITS_H 1
#endif

/* Define to 1 if the system has the type `long double'. */
#ifndef HAVE_LONG_DOUBLE
#define HAVE_LONG_DOUBLE 1
#endif

/* Define to 1 if the system has the type `long long'. */
#ifndef HAVE_LONG_LONG
#define HAVE_LONG_LONG 1
#endif

/* Define to 1 if you have the `lutimes' function. */
#ifndef HAVE_LUTIMES
#define HAVE_LUTIMES 1
#endif

/* Define to 1 if you have the <machine/endian.h> header file. */
#ifndef HAVE_MACHINE_ENDIAN_H
#define HAVE_MACHINE_ENDIAN_H 1
#endif

/* Define to 1 if your system has a GNU libc compatible `malloc' function, and
   to 0 otherwise. */
#ifndef HAVE_MALLOC
#define HAVE_MALLOC 1
#endif

/* Define to 1 if you have the <md5.h> header file. */
#ifndef HAVE_MD5_H
#define HAVE_MD5_H 1
#endif

/* Define to 1 if you have the `memcpy' function. */
#ifndef HAVE_MEMCPY
#define HAVE_MEMCPY 1
#endif

/* Define to 1 if you have the `memmove' function. */
#ifndef HAVE_MEMMOVE
#define HAVE_MEMMOVE 1
#endif

/* Define to 1 if you have the <memory.h> header file. */
#ifndef HAVE_MEMORY_H
#define HAVE_MEMORY_H 1
#endif

/* Define to 1 if you have the `memset' function. */
#ifndef HAVE_MEMSET
#define HAVE_MEMSET 1
#endif

/* Define to 1 if you have the `mkdtemp' function. */
#ifndef HAVE_MKDTEMP
#define HAVE_MKDTEMP 1
#endif

/* Define to 1 if you have the `mkstemp' function. */
#ifndef HAVE_MKSTEMP
#define HAVE_MKSTEMP 1
#endif

/* Define to 1 if the `fts_*' functions are built into the library. */
/* #undef HAVE_NBCOMPAT_FTS */

/* Define to 1 if the `glob' function is built into the library. */
#ifndef HAVE_NBCOMPAT_GLOB
#define HAVE_NBCOMPAT_GLOB 1
#endif

/* Define to 1 if the `MD5*' functions are built into the library. */
/* #undef HAVE_NBCOMPAT_MD5 */

/* Define to 1 if the `MD5Init' function is built into the library. */
/* #undef HAVE_NBCOMPAT_MD5INIT */

/* Define to 1 if the `poll' function is built into the library. */
/* #undef HAVE_NBCOMPAT_POLL */

/* Define to 1 if the `queue' macros are supplied by the library. */
#ifndef HAVE_NBCOMPAT_QUEUE
#define HAVE_NBCOMPAT_QUEUE 1
#endif

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
#ifndef HAVE_NETDB_H
#define HAVE_NETDB_H 1
#endif

/* Define to 1 if you have the <paths.h> header file. */
#ifndef HAVE_PATHS_H
#define HAVE_PATHS_H 1
#endif

/* Define to 1 if you have the <poll.h> header file. */
#ifndef HAVE_POLL_H
#define HAVE_POLL_H 1
#endif

/* Define to 1 if *printf() uses %qd to print `long long' (otherwise uses
   %lld). */
/* #undef HAVE_PRINTF_QD */

/* Define to 1 if you have the `pwcache_groupdb' function. */
#ifndef HAVE_PWCACHE_GROUPDB
#define HAVE_PWCACHE_GROUPDB 1
#endif

/* Define to 1 if you have the `pwcache_userdb' function. */
#ifndef HAVE_PWCACHE_USERDB
#define HAVE_PWCACHE_USERDB 1
#endif

/* Define to 1 if you have the <pwd.h> header file. */
#ifndef HAVE_PWD_H
#define HAVE_PWD_H 1
#endif

/* Define to 1 if you have the <regex.h> header file. */
#ifndef HAVE_REGEX_H
#define HAVE_REGEX_H 1
#endif

/* Define to 1 if you have the <rmd160.h> header file. */
#ifndef HAVE_RMD160_H
#define HAVE_RMD160_H 1
#endif

/* Define to 1 if you have the `select' function. */
#ifndef HAVE_SELECT
#define HAVE_SELECT 1
#endif

/* Define to 1 if you have the `setenv' function. */
#ifndef HAVE_SETENV
#define HAVE_SETENV 1
#endif

/* Define to 1 if you have the `setgroupent' function. */
#ifndef HAVE_SETGROUPENT
#define HAVE_SETGROUPENT 1
#endif

/* Define to 1 if you have the `setlocale' function. */
#ifndef HAVE_SETLOCALE
#define HAVE_SETLOCALE 1
#endif

/* Define to 1 if you have the `setmode' function. */
#ifndef HAVE_SETMODE
#define HAVE_SETMODE 1
#endif

/* Define to 1 if you have the `setpassent' function. */
#ifndef HAVE_SETPASSENT
#define HAVE_SETPASSENT 1
#endif

/* Define to 1 if you have the `setprogname' function. */
#ifndef HAVE_SETPROGNAME
#define HAVE_SETPROGNAME 1
#endif

/* Define to 1 if you have the <sha1.h> header file. */
#ifndef HAVE_SHA1_H
#define HAVE_SHA1_H 1
#endif

/* Define to 1 if you have the <sha2.h> header file. */
#ifndef HAVE_SHA2_H
#define HAVE_SHA2_H 1
#endif

/* Define to 1 if you have the `shquote' function. */
#ifndef HAVE_SHQUOTE
#define HAVE_SHQUOTE 1
#endif

/* Define to 1 if you have the <signal.h> header file. */
#ifndef HAVE_SIGNAL_H
#define HAVE_SIGNAL_H 1
#endif

/* Define to 1 if you have the `snprintf' function. */
#ifndef HAVE_SNPRINTF
#define HAVE_SNPRINTF 1
#endif

/* Define to 1 if the system has the type `socklen_t'. */
#ifndef HAVE_SOCKLEN_T
#define HAVE_SOCKLEN_T 1
#endif

/* Define to 1 if you have the `statvfs' function. */
#ifndef HAVE_STATVFS
#define HAVE_STATVFS 1
#endif

/* Define to 1 if you have the <stdarg.h> header file. */
#ifndef HAVE_STDARG_H
#define HAVE_STDARG_H 1
#endif

/* Define to 1 if stdbool.h conforms to C99. */
#ifndef HAVE_STDBOOL_H
#define HAVE_STDBOOL_H 1
#endif

/* Define to 1 if you have the <stddef.h> header file. */
#ifndef HAVE_STDDEF_H
#define HAVE_STDDEF_H 1
#endif

/* Define to 1 if you have the <stdint.h> header file. */
#ifndef HAVE_STDINT_H
#define HAVE_STDINT_H 1
#endif

/* Define to 1 if you have the <stdio.h> header file. */
#ifndef HAVE_STDIO_H
#define HAVE_STDIO_H 1
#endif

/* Define to 1 if you have the <stdlib.h> header file. */
#ifndef HAVE_STDLIB_H
#define HAVE_STDLIB_H 1
#endif

/* Define to 1 if you have the `strdup' function. */
#ifndef HAVE_STRDUP
#define HAVE_STRDUP 1
#endif

/* Define to 1 if you have the `strerror' function. */
#ifndef HAVE_STRERROR
#define HAVE_STRERROR 1
#endif

/* Define to 1 if you have the `strerror_r' function. */
#ifndef HAVE_STRERROR_R
#define HAVE_STRERROR_R 1
#endif

/* Define to 1 if you have the <strings.h> header file. */
#ifndef HAVE_STRINGS_H
#define HAVE_STRINGS_H 1
#endif

/* Define to 1 if you have the <string.h> header file. */
#ifndef HAVE_STRING_H
#define HAVE_STRING_H 1
#endif

/* Define to 1 if you have the `strlcat' function. */
#ifndef HAVE_STRLCAT
#define HAVE_STRLCAT 1
#endif

/* Define to 1 if you have the `strlcpy' function. */
#ifndef HAVE_STRLCPY
#define HAVE_STRLCPY 1
#endif

/* Define to 1 if you have the `strmode' function. */
#ifndef HAVE_STRMODE
#define HAVE_STRMODE 1
#endif

/* Define to 1 if you have the `strsep' function. */
#ifndef HAVE_STRSEP
#define HAVE_STRSEP 1
#endif

/* Define to 1 if you have the `strsvis' function. */
#ifndef HAVE_STRSVIS
#define HAVE_STRSVIS 1
#endif

/* Define to 1 if you have the `strtoll' function. */
#ifndef HAVE_STRTOLL
#define HAVE_STRTOLL 1
#endif

/* Define to 1 if the system has the type `struct addrinfo'. */
#ifndef HAVE_STRUCT_ADDRINFO
#define HAVE_STRUCT_ADDRINFO 1
#endif

/* Define to 1 if `d_namlen' is a member of `struct dirent'. */
#ifndef HAVE_STRUCT_DIRENT_D_NAMLEN
#define HAVE_STRUCT_DIRENT_D_NAMLEN 1
#endif

/* Define to 1 if the system has the type `struct in6_addr'. */
#ifndef HAVE_STRUCT_IN6_ADDR
#define HAVE_STRUCT_IN6_ADDR 1
#endif

/* Define to 1 if the system has the type `struct option'. */
#ifndef HAVE_STRUCT_OPTION
#define HAVE_STRUCT_OPTION 1
#endif

/* Define to 1 if the system has the type `struct sockaddr_in6'. */
#ifndef HAVE_STRUCT_SOCKADDR_IN6
#define HAVE_STRUCT_SOCKADDR_IN6 1
#endif

/* Define to 1 if the system has the type `struct sockaddr_storage'. */
#ifndef HAVE_STRUCT_SOCKADDR_STORAGE
#define HAVE_STRUCT_SOCKADDR_STORAGE 1
#endif

/* Define to 1 if `f_flags' is a member of `struct statfs'. */
/* #undef HAVE_STRUCT_STATFS_F_FLAGS */

/* Define to 1 if `f_fsize' is a member of `struct statfs'. */
/* #undef HAVE_STRUCT_STATFS_F_FSIZE */

/* Define to 1 if `f_iosize' is a member of `struct statfs'. */
/* #undef HAVE_STRUCT_STATFS_F_IOSIZE */

/* Define to 1 if you have the `strunvis' function. */
#ifndef HAVE_STRUNVIS
#define HAVE_STRUNVIS 1
#endif

/* Define to 1 if you have the `strvis' function. */
#ifndef HAVE_STRVIS
#define HAVE_STRVIS 1
#endif

/* Define to 1 if you have the `svis' function. */
#ifndef HAVE_SVIS
#define HAVE_SVIS 1
#endif

/* Define to 1 if you have the <sysexits.h> header file. */
#ifndef HAVE_SYSEXITS_H
#define HAVE_SYSEXITS_H 1
#endif

/* Define to 1 if you have the <sys/byteorder.h> header file. */
/* #undef HAVE_SYS_BYTEORDER_H */

/* Define to 1 if you have the <sys/cdefs.h> header file. */
#ifndef HAVE_SYS_CDEFS_H
#define HAVE_SYS_CDEFS_H 1
#endif

/* Define to 1 if you have the <sys/dir.h> header file. */
#ifndef HAVE_SYS_DIR_H
#define HAVE_SYS_DIR_H 1
#endif

/* Define to 1 if you have the <sys/endian.h> header file. */
#ifndef HAVE_SYS_ENDIAN_H
#define HAVE_SYS_ENDIAN_H 1
#endif

/* Define to 1 if you have the <sys/file.h> header file. */
#ifndef HAVE_SYS_FILE_H
#define HAVE_SYS_FILE_H 1
#endif

/* Define to 1 if you have the <sys/mkdev.h> header file. */
/* #undef HAVE_SYS_MKDEV_H */

/* Define to 1 if you have the <sys/mount.h> header file. */
#ifndef HAVE_SYS_MOUNT_H
#define HAVE_SYS_MOUNT_H 1
#endif

/* Define to 1 if you have the <sys/ndir.h> header file. */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/param.h> header file. */
#ifndef HAVE_SYS_PARAM_H
#define HAVE_SYS_PARAM_H 1
#endif

/* Define to 1 if you have the <sys/poll.h> header file. */
#ifndef HAVE_SYS_POLL_H
#define HAVE_SYS_POLL_H 1
#endif

/* Define to 1 if you have the <sys/queue.h> header file. */
#ifndef HAVE_SYS_QUEUE_H
#define HAVE_SYS_QUEUE_H 1
#endif

/* Define to 1 if you have the <sys/socket.h> header file. */
#ifndef HAVE_SYS_SOCKET_H
#define HAVE_SYS_SOCKET_H 1
#endif

/* Define to 1 if you have the <sys/statfs.h> header file. */
#ifndef HAVE_SYS_STATFS_H
#define HAVE_SYS_STATFS_H 1
#endif

/* Define to 1 if you have the <sys/statvfs.h> header file. */
#ifndef HAVE_SYS_STATVFS_H
#define HAVE_SYS_STATVFS_H 1
#endif

/* Define to 1 if you have the <sys/stat.h> header file. */
#ifndef HAVE_SYS_STAT_H
#define HAVE_SYS_STAT_H 1
#endif

/* Define to 1 if you have the <sys/time.h> header file. */
#ifndef HAVE_SYS_TIME_H
#define HAVE_SYS_TIME_H 1
#endif

/* Define to 1 if you have the <sys/ttycom.h> header file. */
#ifndef HAVE_SYS_TTYCOM_H
#define HAVE_SYS_TTYCOM_H 1
#endif

/* Define to 1 if you have the <sys/types.h> header file. */
#ifndef HAVE_SYS_TYPES_H
#define HAVE_SYS_TYPES_H 1
#endif

/* Define to 1 if you have the <sys/uio.h> header file. */
#ifndef HAVE_SYS_UIO_H
#define HAVE_SYS_UIO_H 1
#endif

/* Define to 1 if you have the <sys/vfs.h> header file. */
/* #undef HAVE_SYS_VFS_H */

/* Define to 1 if you have the <termcap.h> header file. */
#ifndef HAVE_TERMCAP_H
#define HAVE_TERMCAP_H 1
#endif

/* Define to 1 if you have the <time.h> header file. */
#ifndef HAVE_TIME_H
#define HAVE_TIME_H 1
#endif

/* Define to 1 if you have the <tzfile.h> header file. */
#ifndef HAVE_TZFILE_H
#define HAVE_TZFILE_H 1
#endif

/* Define to 1 if you have the `uid_from_user' function. */
#ifndef HAVE_UID_FROM_USER
#define HAVE_UID_FROM_USER 1
#endif

/* Define to 1 if the system has the type `uintptr_t'. */
#ifndef HAVE_UINTPTR_T
#define HAVE_UINTPTR_T 1
#endif

/* Define to 1 if you have the <unistd.h> header file. */
#ifndef HAVE_UNISTD_H
#define HAVE_UNISTD_H 1
#endif

/* Define to 1 if you have the `unsetenv' function. */
#ifndef HAVE_UNSETENV
#define HAVE_UNSETENV 1
#endif

/* Define to 1 if you have the `unvis' function. */
#ifndef HAVE_UNVIS
#define HAVE_UNVIS 1
#endif

/* Define to 1 if you have the `user_from_uid' function. */
#ifndef HAVE_USER_FROM_UID
#define HAVE_USER_FROM_UID 1
#endif

/* Define to 1 if you have the `usleep' function. */
#ifndef HAVE_USLEEP
#define HAVE_USLEEP 1
#endif

/* Define to 1 if you have the <util.h> header file. */
#ifndef HAVE_UTIL_H
#define HAVE_UTIL_H 1
#endif

/* Define to 1 if you have the `utimes' function. */
#ifndef HAVE_UTIMES
#define HAVE_UTIMES 1
#endif

/* Define to 1 if you have the <utime.h> header file. */
#ifndef HAVE_UTIME_H
#define HAVE_UTIME_H 1
#endif

/* Define to 1 if the `va_copy' function is supported. */
#ifndef HAVE_VA_COPY
#define HAVE_VA_COPY 1
#endif

/* Define to 1 if you have the `vfork' function. */
#ifndef HAVE_VFORK
#define HAVE_VFORK 1
#endif

/* Define to 1 if you have the <vfork.h> header file. */
/* #undef HAVE_VFORK_H */

/* Define to 1 if you have the `vis' function. */
#ifndef HAVE_VIS
#define HAVE_VIS 1
#endif

/* Define to 1 if you have the <vis.h> header file. */
#ifndef HAVE_VIS_H
#define HAVE_VIS_H 1
#endif

/* Define to 1 if you have the `vprintf' function. */
#ifndef HAVE_VPRINTF
#define HAVE_VPRINTF 1
#endif

/* Define to 1 if you have the `warn' function. */
#ifndef HAVE_WARN
#define HAVE_WARN 1
#endif

/* Define to 1 if `fork' works. */
#ifndef HAVE_WORKING_FORK
#define HAVE_WORKING_FORK 1
#endif

/* Define to 1 if `long long' is supported and sizeof(off_t) >= 8. */
#ifndef HAVE_WORKING_LONG_LONG
#define HAVE_WORKING_LONG_LONG 1
#endif

/* Define to 1 if `vfork' works. */
#ifndef HAVE_WORKING_VFORK
#define HAVE_WORKING_VFORK 1
#endif

/* Define to 1 if the system has the type `_Bool'. */
#ifndef HAVE__BOOL
#define HAVE__BOOL 1
#endif

/* define if your compiler has __attribute__ */
#ifndef HAVE___ATTRIBUTE__
#define HAVE___ATTRIBUTE__ 1
#endif

/* Define to 1 if the `__builtin_va_copy' function is supported. */
#ifndef HAVE___BUILTIN_VA_COPY
#define HAVE___BUILTIN_VA_COPY 1
#endif

/* Define to the address where bug reports for this package should be sent. */
/* #define PACKAGE_BUGREPORT "joerg@NetBSD.org" */

/* Define to the full name of this package. */
/* #define PACKAGE_NAME "libnbcompat" */

/* Define to the full name and version of this package. */
/* #define PACKAGE_STRING "libnbcompat 20120702" */

/* Define to the one symbol short name of this package. */
/* #define PACKAGE_TARNAME "libnbcompat" */

/* Define to the home page for this package. */
/* #define PACKAGE_URL "" */

/* Define to the version of this package. */
/* #define PACKAGE_VERSION "20120702" */

/* The size of `off_t', as computed by sizeof. */
#ifndef SIZEOF_OFF_T
#define SIZEOF_OFF_T 8
#endif

/* Define to 1 if you have the ANSI C header files. */
#ifndef STDC_HEADERS
#define STDC_HEADERS 1
#endif

/* Define to 1 if strerror_r returns char *. */
/* #undef STRERROR_R_CHAR_P */

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#ifndef TIME_WITH_SYS_TIME
#define TIME_WITH_SYS_TIME 1
#endif

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#ifndef WORDS_BIGENDIAN
#  define WORDS_BIGENDIAN 1
#endif
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

