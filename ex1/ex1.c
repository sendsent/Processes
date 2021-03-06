// Write a program that calls `fork()`. Before calling `fork()`, have the main process access a variable
// (e.g., x) and set its value to something (e.g., 100). What value is the variable in the child process?
// What happens to the variable when both the child and parent change the value of x?

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    // Your code here

    pid_t process = fork();

    if (process == 0 ) 
    {
        printf("CHILD!%d\n", getpid());
    }
    else
    {
        printf("PARENT!%d\n", getpid());
    }
    return 0;
}
