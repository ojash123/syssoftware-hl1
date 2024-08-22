/*
Ojas Hegde
MT2024105
23. Write a program to create a Zombie state of the running program.
*/
#include <unistd.h>
#include <stdio.h>
int main(){
    int f = fork();
    if(f > 0){
        while(1);
    }else{
        printf("I am going to be a zombie process with pid %d\n", getpid());

    }
}
/*
$ ./a.out
I am going to be a zombie process with pid 8745
$ cat /proc/8745/status
Name:	a.out
State:	Z (zombie)

*/