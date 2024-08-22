/*
Ojas Hegde
MT2024105
4. Write a program to open an existing file with read write mode. Try O_EXCL flag also.
*/
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int main(){
    int fd1, fd2;
    fd1 = open("readwr",O_CREAT| O_RDWR, 0744);
    fd2 = open("readwr", O_CREAT | O_EXCL, 0744);
    printf("The file descriptor is %d and %d\n", fd1, fd2);
    close(fd1);
    close(fd2);
}
/*Output
$ ./a.out
The file descriptor is 3 and -1
*/