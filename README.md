# CENG231_HW-2

## Description of Program:
- A C Program that creates a parent process and then forks the process to create a child process. The parent process is never terminated with a wait (or equivalent) command and so the child process remains running until the program is terminated and becomes a zombie process.
- The zombie process, <defunct>, can be seen with the command: ps -al
- To kill the zombie program, the programmer can terminate the program with CTRL-C or open another terminal to programatically kill the process with the command: sudo kill -9 pid
- The program has an error checking condition that utilizes perror to give the programmers more information in case forking the process failed.

## Instructions to run the program:
- Compile with gcc: gcc fork2.c
- Run the program with this command: ./a.out fork2

## Source Files:
- fork2.c
- README.md
- .gitignore
## Sources referred to:
- C pid: https://www.gnu.org/software/libc/manual/html_node/Process-Identification.html
- Kill process by PID with kill command: https://superuser.com/questions/872244/killing-processes-in-raspbian 
