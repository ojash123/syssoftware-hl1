/*
Ojas Hegde
MT2024105
25. Write a program to create three child processes. The parent should wait for a particular child (use
waitpid system call).
*/
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
int main(){
    int f1 = fork();
    int f2 = fork();
    if(f1 > 0 && f2 > 0){
        waitpid(f2, NULL, 0);
        printf("The parent is done\n");
    }else{
        printf("A child has executed\n");
    }
}
/*
$ ./a.out
A child has executed
A child has executed
A child has executed
The parent is done
*/