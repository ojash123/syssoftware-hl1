/*
Ojas Hegde
MT2024105
19. Write a program to find out time taken to execute getpid system call. Use time stamp counter.
*/

#include <unistd.h>
#include <stdio.h>
#include <time.h>

int rdtsc(){
    unsigned long long dst;
    __asm__ __volatile__ ("rdtsc": "=A" (dst));
}

int main(){
    int nano;
    unsigned long long start, end;
    start = rdtsc();
    for(int i = 0; i < 10000; i++)
        getpid();
    end = rdtsc();
    nano = (end - start)/ 1.20;
    printf("The function takes %d nano secs\n", nano);
}

/*
$ ./a.out 
The function takes 3340041 nano secs
*/