/*
Ojas Hegde
MT2024105
20. Find out the priority of your running program. Modify the priority with nice command.
*/

#include <stdio.h>
#include <sched.h>
#include <unistd.h>
#include <sys/resource.h>
int main(){
    int prio = getpriority(PRIO_PROCESS, 0);
    printf("The priority from getpriority is %d\n", prio);
    if(nice(4) == -1){
        perror("error\n");
    }

    prio = getpriority(PRIO_PROCESS, 0);
    printf("The priority from getpriority after nice is %d\n", prio);
}
/*
$ ./a.out 
The priority from getpriority is 0
The priority from getpriority after nice is 4
*/