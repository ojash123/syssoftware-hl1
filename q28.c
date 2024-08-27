/*
Ojas Hegde
MT2024105
28. Write a program to get maximum and minimum real time priority.
*/

#include <stdio.h>
#include <sched.h>

int main(){
    int max = sched_get_priority_max(SCHED_FIFO);
    int min= sched_get_priority_min(SCHED_FIFO);
    printf("SCHED_FIFO Max: %d  Min: %d\n", max, min);
    max = sched_get_priority_max(SCHED_RR);
    min= sched_get_priority_min(SCHED_RR);
    printf("SCHED_RR Max: %d  Min: %d\n", max, min);
    
}
/*
$ ./a.out 
SCHED_FIFO Max: 99  Min: 1
SCHED_RR Max: 99  Min: 1
*/