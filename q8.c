/*
Ojas Hegde
MT2024105
8. Write a program to open a file in read only mode, read line by line and display each line as it is read.
Close the file when end of file is reached
*/
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(){
    int fd1, r;
    fd1 = open("./temp1",O_CREAT| O_RDONLY , 0744);
    char buf[80];
    r = read(fd1, buf, 1);
    while (r)
    {
        if(buf[0] != '\n')
            write(1, buf, r);
        else
            getchar();
        r = read(fd1, buf, 1);
    }
    printf("read temp1\n");
    close(fd1);
}