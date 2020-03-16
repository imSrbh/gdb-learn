# gdb-learn

### What is Debugger?
In general, debugger is utility that runs target program in controlled environment where you can control execution of program and see the state of program when program is paused.  
`GDB is such debugger, which is used to debug C/C++ programs.`

`$ gdb a.out`

### Some Basic Commands of GDB  
_Set Breakpoint_  :  In order to break the program.  
`(gdb) b func_name or b line_no.`

_Run_  
`(gdb) r or run`  

_List_ : You will see some part of your program.  
`(gdb) l or list`

_Frame_: It'll show where is the curser rightnow.  
`(gdb) f or frame`

_Next_ : You will go to next line.  
`(gdb) n or next`  

_Print_ : To print variables.  
`(gdb) p main_var or print main_var` 

_Step_ : Go inside the function.  
`(gdb) s fun1() or step fun1()`  

_Backtrace_:  It will tell from where are you coming and at what   point you are currnetly in your program.  
`(gdb) backtrace`

_Info b_: It will show how many brakpoint you have.
`(gdb) info b`   

_Delete 1_ : To delete breakpoint no. 1.    
`(gdb) delete 1`  

If you want to directly go to some function.
- Create a breakpoint at that function.
- `(gdb) continue fun3() or c fun3() `  

_Info Local_: Print all the variable of local in that fuction in that stack.


