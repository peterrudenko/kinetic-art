" IDE.Vim:

" ������ ����� ����� ����������������� �����
" ������ �� ������ ���� � ���������,
" ����� �������� ����.


" ����������-�������-���-��������
" ------------------------------------------------
	colo summerfruit
	language messages en
	set guifont=Dina:h8
	set co=170
	set lines=50
" ------------------------------------------------

" ���������� � ������ + ������:
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

" �������:
" ------------------------------------------------
	" ������� ��� c:
	so .vim/c.tpl.vim " TODO: ��������� �������.

	" ��� ���� ����� - ����� ������, ���� Ctrl-Enter
	" � ��������� ������ ���� one by one.
	map <C-Return> 5k/___<CR>c3l
	imap <C-Return> <ESC>5k/___<CR>c3l

	" comment and sexy comment
	nmap \ ,c<Space>
	vmap \ ,c<Space>
	nmap \| <S-o>cc<C-ENTER>
	"nmap \|\| <S-o>/*<CR><C-o>x * ___<CR>*/<CR><C-ENTER>
" ------------------------------------------------


" ���� -->
    " ��������� ��������������� ��������� ������ �� ���������
    " ����� ������������� �����
    menu Textwidth.off :set textwidth=0<CR>
    menu Textwidth.on :set textwidth=75<CR>

    " ������� ��� :make -->
        function! MyMake()

            let old_tab_num = tabpagenr()

            " ������� ����� �������
            tabe

            " �������� �� � �����
            tabm

            let old_buflist = tabpagebuflist(tabpagenr())
            make
            let buflist = tabpagebuflist(tabpagenr())

            " ���� ������ ������� �� ���������, ������, ���������� ������
            " ������� � ����� ������� ������ ��� ��������� ������� - ��� ���
            " �� ������������.
            if old_buflist == buflist
                tabc
                execute 'tabn '.old_tab_num
				" Linoocs :
	            "!bin/exedat -a bin/Linux/all001 res/data.dat
	            "!bin/Linux/all001
				" Win32 :
	            !start bin\Win32\a.exe
            " ����� ���� � ������� ��������� � ���� �������.
            else
                " ���������� ��� �������
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
    " ������� ��� :make <--

" ��������� �������������� �������� �� ������,
" �. �. ����� ��� ��������� ~/.vimrc ���� �����
" ������������ IDE ����� ��������� �� �����
" �������� � ����.
set sessionoptions-=options

" ��� �������� Vim'� ��������� ���������� � ������� ������
au VimLeave * :mksession! .vim/ide.session

" ��������� ����� ����������� ������ -->
    if getfsize(".vim/ide.session") >= 0
        source .vim/ide.session
    endif
" ��������� ����� ����������� ������ <--

