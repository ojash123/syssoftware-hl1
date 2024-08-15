/*
Ojas Hegde
MT2024105
5. Write a program to create five new files with infinite loop. Execute the program in the background
and check the file descriptor table at /proc/pid/fd.
*/
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    int fd1, fd2, fd3, fd4, fd5;
    fd1 = open("temp1",O_CREAT| O_RDWR, 0744 );
    fd2 = open("temp2",O_CREAT| O_RDWR, 0744 );
    fd3 = open("temp3",O_CREAT| O_RDWR, 0744 );
    fd4 = open("temp4",O_CREAT| O_RDWR, 0744 );
    fd5 = open("temp5",O_CREAT| O_RDWR, 0744 );
    while(1);
}
/*
/proc/5457/fd:
0  1  2  3  4  5  6  7

*/