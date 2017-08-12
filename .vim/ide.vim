" IDE.Vim:

" Разные части этого конфигурационного файла
" сперты из разных мест в интернете,
" часть написана мной.


" Оформление-которое-мне-нравится
" ------------------------------------------------
	colo summerfruit
	language messages en
	set guifont=Dina:h8
	set co=170
	set lines=50
" ------------------------------------------------

" Компиляция и запуск + разное:
" ------------------------------------------------
	" F9 for full build
	"nmap <F9> <Esc>:w<CR>:!./build<CR>
	set makeprg=c:\\Progra~1\\CodeBlocks\\codeblocks.exe\ a.workspace\ --build\ -na\ -nd\ -ns
	set errorformat+=%f:%l:\ %m
	nmap <F9> :w<CR>:silent call MyMake()<CR>
	imap <F9> <Esc>:w<CR>:silent call MyMake()<CR>
	" ,m for quick build
	nmap ,m <Esc>:w<CR>:!./build quick<CR>:silent call MyMake()<CR>

	map <C-F12> <Esc>:!start bin/grabber.exe data.dat<CR>
	"map <C-F9> <Esc>:!./build showstats<CR>
	nmap <C-F9> <Esc>:w<CR>:!start bin/Win32/a.exe<CR>

	nmap <S-UP> :cprev<CR>
	nmap <S-DOWN> :cnext<CR>

	let c_syntax_for_h=""
	set foldmethod=syntax
	set foldlevelstart=0
	set nowrap
	set noerrorbells
	set visualbell
	set t_vb=
	set cindent
" ------------------------------------------------

" Шаблоны:
" ------------------------------------------------
	" Шаблоны для c:
	so .vim/c.tpl.vim " TODO: дополнить шаблоны.

	" Тут тема такая - пишем шаблон, жмем Ctrl-Enter
	" и заполняем пустые поля one by one.
	map <C-Return> 5k/___<CR>c3l
	imap <C-Return> <ESC>5k/___<CR>c3l

	" comment and sexy comment
	nmap \ ,c<Space>
	vmap \ ,c<Space>
	nmap \| <S-o>cc<C-ENTER>
	"nmap \|\| <S-o>/*<CR><C-o>x * ___<CR>*/<CR><C-ENTER>
" ------------------------------------------------


" Меню -->
    " Включение автоматического разбиения строки на несколько
    " строк фиксированной длины
    menu Textwidth.off :set textwidth=0<CR>
    menu Textwidth.on :set textwidth=75<CR>

    " Обертка для :make -->
        function! MyMake()

            let old_tab_num = tabpagenr()

            " Создаем новую вкладку
            tabe

            " Помещаем ее в конец
            tabm

            let old_buflist = tabpagebuflist(tabpagenr())
            make
            let buflist = tabpagebuflist(tabpagenr())

            " Если список буферов не изменился, значит, компиляция прошла
            " успешно и можно закрыть только что созданную вкладку - она нам
            " не понадобилась.
            if old_buflist == buflist
                tabc
                execute 'tabn '.old_tab_num
				" Linoocs :
	            "!bin/exedat -a bin/Linux/all001 res/data.dat
	            "!bin/Linux/all001
				" Win32 :
	            !start bin\Win32\a.exe
            " Иначе файл с ошибкой откроется в этой вкладке.
            else
                " Раскрываем все складки
                "setlocal foldlevel=9999
                clist
            endif
        endfunction

        nmap ,q :tabc<CR>
        nmap ,j :tabp<CR>
        nmap ,k :tabn<CR>
        nmap ,w :cwindow<CR>
        nmap ,l :clist<CR>

        menu Make.Make<Tab>,m ,m
        menu Make.Make\ Window<Tab>,w ,w
        menu Make.Errors\ List<Tab>,l ,l
    " Обертка для :make <--

" Запрещаем восстановление настроек из сессии,
" т. к. тогда при изменении ~/.vimrc даже после
" перезагрузки IDE новые настройки не будут
" вступать в силу.
set sessionoptions-=options

" При закрытии Vim'а сохраняем информацию о текущей сессии
au VimLeave * :mksession! .vim/ide.session

" Загружаем ранее сохраненную сессию -->
    if getfsize(".vim/ide.session") >= 0
        source .vim/ide.session
    endif
" Загружаем ранее сохраненную сессию <--

