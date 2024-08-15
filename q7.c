/*
Ojas Hegde
MT2024105
7. Write a program to copy file1 into file2 ($cp file1 file2).
*/
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(){
    int fd1, fd2, r;
    fd1 = open("./temp1",O_CREAT| O_RDONLY , 0744);
    fd2 = open("./temp2", O_CREAT | O_RDWR, 0744);
    char buf[80];
    r = read(fd1, buf, 80);
    while (r)
    {
        write(fd2, buf, r);
        r = read(fd1, buf, 80);
    }
    printf("Copied temp1 to temp2\n");
    close(fd1);
    close(fd2);
}