/*
Ojas Hegde
MT2024105
22. Write a program, open a file, call fork, and then write to the file by both the child as well as the
parent processes. Check output of the file.
*/
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <sys/wait.h>
int main(){
    int f = fork();
    int fd;
    if(f > 0){
        int s;
        wait(&s);
        fd = open("temp22.txt", O_CREAT | O_RDWR, 0744);
        if(fd < 0){
            perror("Error");
        }
        lseek(fd, 0, SEEK_END);
        char buf[20] = "Parent\n";
        write(fd, buf, strlen(buf)); 
    }else{
        fd = open("temp22.txt", O_CREAT | O_RDWR| O_TRUNC, 0744);
        if(fd < 0){
            perror("Error");
        }
        lseek(fd, 0, SEEK_END);
        char buf[20] = "Child\n";
        write(fd, buf, strlen(buf)); 
    }
    close(fd);
}

/*
Contents of file:
Child
Parent
*/