/*
Ojas Hegde
MT2024105
16. Write a program to perform mandatory locking.
a. Implement write lock
b. Implement read lock
*/
#include  <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main(void){
    struct flock lock;
    lock.l_len = 0;
    lock.l_start = 0;
    lock.l_whence = SEEK_SET;
    lock.l_pid = getpid();
    lock.l_type = F_WRLCK;
    int fd = open("temp.txt", O_CREAT | O_RDWR, 0744);
    printf("Entering critical section\n");
    fcntl(fd,F_SETLKW, &lock);

    write(fd, "ABCD\n", 6);
    printf("Enter to continue: ");
    getchar();
    lock.l_type = F_UNLCK;
    fcntl(fd, F_SETLK, &lock);
    printf("Finished writing... Now reading critical section\n");
    lock.l_type = F_RDLCK;
    fcntl(fd, F_SETLKW, &lock);
    lseek(fd, 0, SEEK_SET);
    char buf[80];
    int r = read(fd, buf, 80);
    write(1, buf, r);
    printf("Enter to continue: ");
    getchar();
    lock.l_type = F_UNLCK;
    fcntl(fd, F_SETLK, &lock);
    close(fd);

}