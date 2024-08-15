/*
Ojas Hegde
MT2024105
10. Write a program to open a file with read write mode, write 10 bytes, move the file pointer by 10
bytes (use lseek) and write again 10 bytes.
a. check the return value of lseek
b. open the file with od and check the empty spaces in between the data
*/

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main(){
    int fd, t;
    fd = open("lseek.txt", O_CREAT | O_RDWR, 0744);
    write(fd, "1234567890", 10);
    t = lseek(fd, 10, SEEK_CUR);
    write(fd, "9876543210", 10);
    printf("lseek returns %d\nWritten to lseek.txt...\n", t);
}