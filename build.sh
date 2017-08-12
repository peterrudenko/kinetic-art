#!/bin/bash

#
# Simple makefile generator and build(cross-build) script
# TODO: replace it with Scons or CMake.
#

# First, see if we only need a code stats
if [ "$1" == "showstats" ]; then
	cat src/*.c src/levels/*.c | bin/lc
	exit
fi

# Define the main dirs for compiler and cross-compiler output
# For object files
objL="obj/Linux/"
objW="obj/CrossWin/"
# For binaries
binL="bin/Linux/"
binW="bin/CrossWin/"
# And the names
exeL="all001"
exeW="all001.exe"
# Compiler options - added #define WIN32 to win32 compilation
includeL="-Iinc/chipmunk -Iinc/allegro -Iinc/fblend -Iinc/alogg -Iinc/adime -Iinc"
includeW="-Iinc/chipmunk -Iinc/allegro -Iinc/fblend -Iinc/alogg -Iinc/adime -Iinc -I/usr/i586-mingw32msvc -DWIN32 -DALLEGRO_MMX"
# Linker options
libL="-ffast-math -Llib/Linux -Wl,--export-dynamic -lm -lXxf86vm -lXcursor -lXpm -lXext -lX11 -lpthread -ldl -ladime -llogg -ljpgal -lalleg -lfblend -lchipmunk -lvorbisfile -lvorbis -logg"
libW="-ffast-math -L/usr/i586-mingw32msvc/lib -Llib/CrossWin -ladime -ljpgal -llogg -lalleg_s -mwindows -lchipmunk -lgdi32 -ldxguid -lole32 -ldinput -lddraw -lwinmm -ldsound -lvorbisfile -lvorbis -logg"
# Warnings off
warnings=" -Wno-implicit" # set to "all" if needed
# gprof? gdb? strip-all?
profiling="-s" # set to -pg for profiling, -g for debugging and -s to none
# icon for X11
x11_icon=res/icon.c

# And here we go. ##############################################################

echo -n "Creating icon resource.."

# icon for win32
if [ "$1" != "quick" ]; then
	echo "allegro_icon	ICON	icon.ico" > res/icon.rc
	windres -O coff -o ${objW}icon_rc.res -i res/icon.rc
	rm res/icon.rc
	rm $x11_icon # recreate x11 icon anyway in the full build
fi

#icon for X11 - create, if it does not exist.
if [ -f $x11_icon ]; then
	echo -n " (quick build: using the existing one)"
else
	### this part is a modified xfixicon.sh from allegro tools ###
	### instead, the following 2 lines can be called: 
	### convert res/icon.ico -flatten res/icon.bmp
	### ./res/xfixicon.sh res/icon.bmp -o res/icon.c
	convert -transparent "magenta" -flatten "res/icon.ico" "res/icon_xpm.xpm"
	echo "#include <allegro.h>" > $x11_icon
	cat res/icon_xpm.xpm | sed -e 's,static char,static const char,' >> $x11_icon
	echo "#if defined ALLEGRO_WITH_XWINDOWS && defined ALLEGRO_USE_CONSTRUCTOR" >> $x11_icon
	echo "extern void *allegro_icon;" >>  $x11_icon
	echo "CONSTRUCTOR_FUNCTION(static void _set_allegro_icon(void));" >> $x11_icon
	echo "static void _set_allegro_icon(void)" >> $x11_icon
	echo "{" >> $x11_icon
	echo "    allegro_icon = icon_xpm;" >> $x11_icon
	echo "}" >> $x11_icon
	echo "#endif" >> $x11_icon	
	rm res/icon_xpm.xpm
	###############################################################
fi

echo -e "\nGenerating makefiles."

echo -e -n "\n#---------\nCPP=g++\nCC=gcc\nLD=g++\nLIB=ar\nWINDRES=\nOBJS=" > makefile

if [ "$1" != "quick" ]; then
	echo -e -n "\n#---------\nCPP=i586-mingw32msvc-g++\nCC=i586-mingw32msvc-gcc\nLD=i586-mingw32msvc-g++\nLIB=i586-mingw32msvc-ar\nWINDRES=windres.exe\nOBJS=" > makewin
fi

# lists all C files in project dir and subdirs
for basename in `find src/ -name '*.c' `; do
basename=${basename%.*}; basename=${basename#src/}
echo -e -n "${objL}${basename}.o " >> makefile
if [ "$1" != "quick" ]; then
	echo -e -n "${objW}${basename}.o " >> makewin
fi
done

echo -e -n "\n#---------\n\nLinux: ${binL}${exeL}\n\n${binL}${exeL}: \$(OBJS)\n\t@echo Building executable ${binL}${exeL}\n\t@g++ ${profiling} -o ${binL}${exeL} \$(OBJS) ${libL} \n\n" >> makefile

if [ "$1" != "quick" ]; then
	echo -e -n "\n#---------\n\nCrossWin: ${binW}${exeW}\n\n${binW}${exeW}: \$(OBJS)\n\t@echo Building executable ${binW}${exeW}\n\t@i586-mingw32msvc-g++ -o ${binW}${exeW} \$(OBJS) ${libW} ${objW}icon_rc.res\n\n" >> makewin
fi

for basename in `find src/ -name '*.c' `; do
basename=${basename%.*}; basename=${basename#src/}

echo -e -n "${objL}${basename}.o: src/${basename}.c\n\t@echo Compiling: ${basename}.c\n\t@gcc ${profiling} -W${warnings} -O3 -O2 -O1 -O -std=c99 -fgnu89-inline -DNDEBUG -DALLEGRO_STATICLINK ${includeL} -c src/${basename}.c -o ${objL}${basename}.o\n\n" >> makefile

if [ "$1" != "quick" ]; then
	echo -e -n "${objW}${basename}.o: src/${basename}.c\n\t@echo Cross-compiling: ${basename}.c\n\t@i586-mingw32msvc-gcc -W${warnings} -O3 -O2 -O1 -O -std=c99 -fgnu89-inline -DNDEBUG -DALLEGRO_STATICLINK ${includeW} -c src/${basename}.c -o ${objW}${basename}.o\n\n" >> makewin
fi

done

echo -e -n ".PHONY: clean\n\nclean: \n\t@echo Delete \$(OBJS) ${binL}${exeL}\n\t@rm -f \$(OBJS) ${binL}${exeL}\n\n" >> makefile

if [ "$1" != "quick" ]; then
	echo -e -n ".PHONY: clean\n\nclean: \n\t@echo Delete \$(OBJS) ${binW}${exeW}\n\t@rm -f \$(OBJS) ${binW}${exeW}\n\n" >> makewin
fi

if [ "$1" != "quick" ]; then

	echo "Rescanning tags.."

	ctags -R --c++-kinds=+p --fields=+iaS --extra=+q

	echo "Building.."

	make clean

	make

	make clean -f makewin
	make -f makewin

	echo "Appending data to executables."

	# TODO or not TODO: exedat output >> /dev/null ?

	bin/exedat -a bin/Linux/all001 res/data.dat

	bin/exedat -a bin/CrossWin/all001.exe res/data.dat

	echo "Executing.."

	bin/Linux/all001

fi


