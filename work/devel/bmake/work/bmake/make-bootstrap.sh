#!/bin/sh

set -e

srcdir=/usr/src/pkgsrc/work/devel/bmake/work/bmake

DEFAULT_SYS_PATH="/usr/pkg/share/mk"

case "yes" in
yes) XDEFS="-DUSE_META ${XDEFS}";;
esac

CC="clang"
CFLAGS="-Wno-error -march=i586 -I. -I${srcdir} -DHAVE_CONFIG_H -DHAVE_NBCOMPAT_H=1 -I/usr/src/pkgsrc/work/devel/bmake/work/libnbcompat -DUSE_EMALLOC -DMAKE_NATIVE ${XDEFS}"

MAKE_VERSION=`sed -n '/^MAKE_VERSION=/s,.*=[^0-9]*,,p' Makefile`

MDEFS="-DMAKE_VERSION=\"$MAKE_VERSION\" \
-DMACHINE=\"i386\" -DMACHINE_ARCH=\"i386\" \
-D_PATH_DEFSYSPATH=\"${DEFAULT_SYS_PATH}\""


LDFLAGS="-L/usr/src/pkgsrc/work/devel/bmake/work/libnbcompat -Wl,-rpath,/usr/pkg/lib"
LIBS="-lnbcompat -lutil"

do_compile2() {
	obj="$1"; shift
	src="$1"; shift
	echo ${CC} -c ${CFLAGS} "$@" -o "$obj" "$src"
	${CC} -c ${CFLAGS} "$@" -o "$obj" "$src"
}

do_compile() {
	obj="$1"; shift
	src=`basename "$obj" .o`.c

	for d in "$srcdir" "$srcdir/lst.lib"
	do
		test -s "$d/$src" || continue

		do_compile2 "$obj" "$d/$src" "$@" || exit 1
		return
	done
	echo "Unknown object file '$obj'" >&2
	exit 1
}

do_link() {
	output="$1"; shift
	echo ${CC} ${LDFLAGS} -o "$output" "$@" ${LIBS}
	${CC} ${LDFLAGS} -o "$output" "$@" ${LIBS}
}

BASE_OBJECTS="arch.o buf.o compat.o cond.o dir.o for.o getopt.o hash.o \
job.o make.o make_malloc.o parse.o sigcompat.o str.o strlist.o \
suff.o targ.o trace.o var.o util.o"

LST_OBJECTS="lstAppend.o lstDupl.o lstInit.o lstOpen.o \
lstAtEnd.o lstEnQueue.o lstInsert.o lstAtFront.o lstIsAtEnd.o \
lstClose.o lstFind.o lstIsEmpty.o lstRemove.o lstConcat.o \
lstFindFrom.o lstLast.o lstReplace.o lstFirst.o lstDatum.o \
lstForEach.o lstMember.o lstSucc.o lstDeQueue.o lstForEachFrom.o \
lstDestroy.o lstNext.o lstPrev.o"

LIB_OBJECTS=""

do_compile main.o ${MDEFS}

for o in ${BASE_OBJECTS} ${LST_OBJECTS} ${LIB_OBJECTS}
do
	do_compile "$o"
done

case "yes" in
yes)
        case "no" in
	*/filemon.h) FDEFS="-DHAVE_FILEMON_H -I`dirname no`";;
	esac
        do_compile meta.o ${FDEFS}
        BASE_OBJECTS="meta.o ${BASE_OBJECTS}"
        ;;
esac

do_link bmake main.o ${BASE_OBJECTS} ${LST_OBJECTS} ${LIB_OBJECTS}
