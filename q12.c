/*
Ojas Hegde
MT2024105
12. Write a program to find out the opening mode of a file. Use fcntl.
*/

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main(){
    int fd, t;
    fd = open("dup.txt", O_CREAT | O_RDWR, 0744);
    t = fcntl(fd, F_GETFL);
    printf("The access flags are %o\n", t);
    close(fd);
}