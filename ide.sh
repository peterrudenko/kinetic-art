#!/bin/bash

#
# Simply starts an IDE.
# After remapping CapsLock to Escape.
#

# Make it work when called via symlink
function resolve_symlink {
    SCRIPT=$1 NEWSCRIPT=''
    until [ "$SCRIPT" = "$NEWSCRIPT" ]; do
        if [ "${SCRIPT:0:1}" = '.' ]; then SCRIPT=$PWD/$SCRIPT; fi
        cd $(dirname $SCRIPT)
        if [ ! "${SCRIPT:0:1}" = '.' ]; then SCRIPT=$(basename $SCRIPT); fi
        SCRIPT=${NEWSCRIPT:=$SCRIPT}
        NEWSCRIPT=$(ls -l $SCRIPT | awk '{ print $NF }')
    done
    if [ ! "${SCRIPT:0:1}" = '/' ]; then SCRIPT=$PWD/$SCRIPT; fi
    echo $(dirname $SCRIPT)
}

DIR=$(resolve_symlink $0)

cd $DIR

xmodmap -e "clear lock"
xmodmap -e "keycode 0x42 = Escape"

case $1 in
	# Map CapsLock back.
	caps)
		xmodmap -e "keycode 0x42 = Caps_Lock"
		xmodmap -e "add lock = Caps_Lock"
		;;
	console)
		vim -S .vim/ide.vim
		;;
	term)
		gnome-terminal --geometry=1440x900 --hide-menubar --command="vim -S .vim/ide.vim"
		;;
	*)
		gvim -S .vim/ide.vim
		;;
esac



