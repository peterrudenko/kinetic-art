
" c templates

" debug
iabbrev tt goPanic("___");
iabbrev ttt allegro_message("____");

" rand()
iabbrev rr rand()%___
iabbrev rrf (float)(rand()%___)

" block
iabbrev bb {<CR>___<CR>}

" if
iabbrev ii if (___) ___
iabbrev iie if (___) {<CR>___;<CR>} else {<CR>___;<CR>}
" for
iabbrev ff for (int i=0, count=___; i<count; i++) {<CR>___;<CR>}

" void function
iabbrev vf( /**<CR> * ___<CR>*/<CR><Backspace>void ___(___):___ {<CR>___<CR>}<CR>

" function
iabbrev f( ___ ___(___):___ {<CR>___<CR>}<CR>

" func header
iabbrev hh // ---------------- //<CR>// ___ //<CR>// ---------------- //<CR>

" comment
iabbrev cc /* ___ */

iabbrev tmain int main(int argc, char *argv[])<CR>{<CR>___;<CR>}

