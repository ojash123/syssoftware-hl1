/*
Ojas Hegde
MT2024105
13. Write a program to wait for a STDIN for 10 seconds using select. Write a proper print statement to
verify whether the data is available within 10 seconds or not (check in $man 2 select).
*/

#include <sys/time.h>
#include <sys/select.h>
#include <unistd.h>
#include <stdio.h>

int main(){
    fd_set readfds;
    FD_ZERO(&readfds);
    FD_SET(0, &readfds);
    struct timeval t;
    t.tv_sec = 10;
    t.tv_usec = 0;
    int ret = select(1, &readfds, NULL, NULL, &t);
    if(ret == -1){
        perror("Error\n");
    }else if(ret == 1){
        printf("Seen a read in stdin within 10s\n");
    }else{
        printf("nothing has happened in 10s\n");
    }
}