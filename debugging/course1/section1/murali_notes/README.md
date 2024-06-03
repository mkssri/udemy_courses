- run/r  : run the entire program.
- quit/q : quit gdb console. 
- gdb -q ./a.out : quiet mode, it won't display other information.
- help <command-name> : it will give the command information.
- break <function-name> / break <line-number> : you can put breakpoints like above
- list a,b : display lines b/w line a and line b
- list x : display lines from x to x+10
- next / n : execute the next line.
-
```
(gdb) info breakpoints
Num     Type           Disp Enb Address            What
1       breakpoint     keep y   0x000055555555518b in main at main.c:21
        breakpoint already hit 1 time
(gdb) delete 1 
info breakpoints
No breakpoints or watchpoints.
(gdb)
```
- continue/c : it will execute until next breakpoint.
