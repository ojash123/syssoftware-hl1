/*
Ojas Hegde
MT2024105
24. Write a program to create an orphan process.
*/
#include <unistd.h>
#include <stdio.h>
int main(){
    int f = fork();
    if(f == 0){
        while(1);
    }else{
        printf("I am going to create a orphan process with pid %d\n", f);

    }
}
/*
$ ./a.out
I am going to create a orphan process with pid 5054

$ head /proc/5054/status
Name:   a.out
Umask:  0002
State:  R (running)
Tgid:   5054
Ngid:   0
Pid:    5054
PPid:   1738
*/