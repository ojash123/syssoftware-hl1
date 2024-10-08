/*
Ojas Hegde
MT2024105
11. Write a program to open a file, duplicate the file descriptor and append the file with both the
descriptors and check whether the file is updated properly or not.
a. use dup
b. use dup2
c. use fcntl
*/

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main(){
    int fd, fddup, fddup2, fddupfcntl;
    fd = open("dup.txt", O_CREAT | O_RDWR, 0744);

    dprintf(fd, "The original fd is: %d\n", fd);
    fddup = dup(fd);
    dprintf(fddup, "The dup fd is %d\n", fddup);
    fddup2 = dup2(fd , 7);
    dprintf(fddup2, "The dup2 fd is %d\n", fddup2);
    fddupfcntl = fcntl(fd, F_DUPFD);
    dprintf(fddupfcntl, "The fcntl dupfd fd is %d\n", fddupfcntl);
    close(fd);
}

/*
$ cat dup.txt 
The original fd is: 3
The dup fd is 4
The dup2 fd is 7
The fcntl dupfd fd is 5
*/