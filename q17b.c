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

int main(){
    struct flock lock;
    lock.l_len = 0;
    lock.l_start = 0;
    lock.l_whence = SEEK_SET;
    lock.l_pid = getpid();
    lock.l_type = F_WRLCK;
    int fd = open("ticket.txt", O_CREAT | O_RDWR, 0744);
    printf("Entering critical section\n");
    fcntl(fd,F_SETLKW, &lock);
    int tno;
    read(fd, &tno, sizeof(tno));
    printf("Read %d\n", tno);
    tno++;
    lseek(fd, -1 * sizeof(tno), SEEK_CUR);
    write(fd, &tno, sizeof(tno));
    printf("Enter to continue...");
    getchar();
    lock.l_type = F_UNLCK;
    fcntl(fd, F_SETLK, &lock);
    close(fd);
}
/*
$ ./a.out 
Entering critical section
Read 10
Enter to continue...
*/