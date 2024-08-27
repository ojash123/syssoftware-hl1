/*
Ojas Hegde
MT2024105
29. Write a program to get scheduling policy and modify the scheduling policy (SCHED_FIFO,
SCHED_RR).
*/
#include <stdio.h>
#include <sched.h>
#include <unistd.h>

void getpolicy(){
    int policy = sched_getscheduler(getpid());
    switch (policy)
    {
    case SCHED_FIFO:
        printf("Currently FIFO\n");
        break;
    case SCHED_RR:
        printf("Currently SCHED_RR\n");
        break;
    case SCHED_OTHER:
        printf("Currently Sched_Other\n");
        break;
    default:
        printf("Unknown Scheduler\n");
        break;
    }
}

int main(){
    struct sched_param param;
    sched_getparam(getpid(), &param);
    int policy = sched_getscheduler(getpid());
    getpolicy();
    param.sched_priority = sched_get_priority_max(SCHED_RR);
    if(sched_setscheduler(getpid(), SCHED_RR, &param) == -1)
        perror("Set Scheduler failed\n");
    getpolicy();
}

/*$ ./a.out 
Currently Sched_Other
Set Scheduler failed
: Operation not permitted
Currently Sched_Other
*/