"+++++++++++++++++++++++++++++++++++++++++++
"设置字体
"set guifont=Monospace\ 12

"+++++++++++++++++++++++++++++++++++++++++++
"鼠标定位设置
set mouse=a

"行号
:set number

"+++++++++++++++++++++++++++++++++++++++++++
"设置tab替换为4个空格
:set ts=4
":set expandtab

"+++++++++++++++++++++++++++++++++++++++++++
"注释:
"map = I/* ^[A* /j
map = I//<Esc>j
map - ^xxj

"+++++++++++++++++++++++++++++++++++++++++++
"C，C++ 按F5编译运行
map <F5> :call CompileRunGcc()<CR>
func! CompileRunGcc()
    exec "w"
	if &filetype == 'c'
		exec "!g++ % -o %<"
		exec "! ./%<"
	elseif &filetype == 'cpp'
		exec "!g++ -std=c++11 % -o %<"
		exec "! ./%<"
	elseif &filetype == 'java' 
		exec "!javac %" 
		exec "!java %<"
	elseif &filetype == 'sh'
		:!./%
"	elseif &filetype == 's'
"		exec "!as % -o %<.o"
"		exec "!ld %<.o -o %<"
"		exec "! ./%<"
	endif
endfunc

"++++++++++++++++++++++++++++++++++++++++++
"C,C++的调试
map <F8> :call Rungdb()<CR>
func! Rungdb()
	exec "w"
	exec "!g++ % -g -o %<"
	exec "!gdb ./%<"
endfunc
"+++++++++++++++++++++++++++++++++++++++++++
"给新建文件添加标题信息
"autocmd BufNewFile *.cpp,*.sh exec ":call SetTitle()" 
autocmd BufNewFile *.cpp,*.[c],*.sh,*.java exec ":call SetTitle()" 
function SetTitle()
	if &filetype == 'c'
		call setline(1,"//++++++++++++++++++++++++++++++++++++++++++++++++++++++++")
		call append(line("."),"// FileName: ".expand("%"))
		call append(line(".")+1,"// Author  : elonkou")
		call append(line(".")+2,"// E-mail  : elonkou@ktime.cc")
		call append(line(".")+3,"// Date    : ".strftime("%c"))
		call append(line(".")+4,"//++++++++++++++++++++++++++++++++++++++++++++++++++++++++")
		call append(line(".")+5,"")
		call append(line(".")+6,"#include <stdio.h>")
		call append(line(".")+7,"#include <stdlib.h>")
		call append(line(".")+8,"")
		"this is main function.
		call append(line(".")+9,"int main(int argc,char **argv){")
		call append(line(".")+10,"    return 0;")
		call append(line(".")+11,"}")
		call append(line(".")+12,"")
	elseif &filetype == 'cpp'
		call setline(1,"//++++++++++++++++++++++++++++++++++++++++++++++++++++++++")
		call append(line("."),"// File:  ".expand("%"))
		call append(line(".")+1,"// Author :elonkou")
		call append(line(".")+2,"// E-mail :elonkou@ktime.cc")
		call append(line(".")+3,"// Date   :".strftime("%c"))
		call append(line(".")+4,"//++++++++++++++++++++++++++++++++++++++++++++++++++++++++")
		call append(line(".")+5,"")
		call append(line(".")+6,"#include <iostream>")
		call append(line(".")+7,"using namespace std;")
		call append(line(".")+8,"")
		call append(line(".")+9,"int main(){")
		call append(line(".")+10,"    cout << \"hello,elonkou.\" << endl;")
		call append(line(".")+11,"    return 0;")
		call append(line(".")+12,"}")
		call append(line(".")+13,"")
	endif
	autocmd BufNewFile *normal G
endfunc
"+++++++++++++++++++++++++++++++++++++++++++



