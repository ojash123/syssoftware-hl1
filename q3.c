/*
Ojas Hegde
MT2024105
3. Write a program to create a file and print the file descriptor value. Use creat ( ) system call
*/
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(){
    int fd1;
    fd1 = creat("creat", 0744);
    printf("The file descriptor is %d\n", fd1);
    close(fd1);
}