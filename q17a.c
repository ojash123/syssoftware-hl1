/*
Ojas Hegde
MT2024105
17. Write a program to simulate online ticket reservation. Implement write lock
Write a program to open a file, store a ticket number and exit. Write a separate program, to
open the file, implement write lock, read the ticket number, increment the number and print
the new ticket number then close the file.
*/

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main(void){
    int fd;
    fd = open("ticket.txt", O_RDWR | O_CREAT, 0744);
    int tno = 10;
    write(fd, &tno, sizeof(tno));
    printf("Written %d to ticket.txt\n", tno);
    close(fd);
}