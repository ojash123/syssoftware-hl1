/*
Ojas Hegde
MT2024105
19. Write a program to find out time taken to execute getpid system call. Use time stamp counter.
*/

#include <unistd.h>
#include <stdio.h>
#include <time.h>

int main(){
    clock_t c, c2;
    c = clock() ;
    getpid();
    c2 = clock();
    double diff = c2 - c;
    double difftime = diff / CLOCKS_PER_SEC;
    printf("Clock cycles taken = %.0f, time = %f\n", diff, difftime);
}

/*
$ ./a.out 
Clock cycles taken = 7, time = 0.000007
*/