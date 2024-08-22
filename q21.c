/*
Ojas Hegde
MT2024105
21. Write a program, call fork and print the parent and child process id.
*/
#include <unistd.h>
#include <stdio.h>

int main(){
    int child_pid = fork();
    if(child_pid != 0)
        printf("The parent pid is %d and the child pid is %d\n", getpid(), child_pid);
}
/*
$ ./a.out 
The parent pid is 13515 and the child pid is 13516
*/