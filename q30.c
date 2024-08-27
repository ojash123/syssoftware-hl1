/*
Ojas Hegde
MT2024105
30. Write a program to run a script at a specific time using a Daemon process.
*/
#include <unistd.h>
#include <stdio.h>
#include <time.h>
#include <sys/stat.h>
#include <stdlib.h>

int init_daemon(time_t target){
    if(!fork()){
        umask(0);
        setsid();
        chdir("/");
        sleep(difftime(target, time(NULL)));
        execlp("ls", "ls", NULL);
        exit(0);
    }
    exit(0);
}

int main(){
    printf("Starting a daemon that will exectute in 30 seconds\n");
    time_t target = time(NULL) + 30;
    init_daemon(target);
}

/*
Executes ls in '/' dir
$ ./a.out 
Starting a daemon that will exectute in 30 seconds
ojas@ojas-Lenovo-V14-IIL:~/Desktop/systems software$ 
bin		   home      mnt   sbin.usr-is-merged	usr
bin.usr-is-merged  lib		      opt   snap		var
boot		   lib64	      proc  srv
cdrom		   lib.usr-is-merged  root  swap.img
dev		   lost+found	      run   sys
etc		   media	      sbin  tmp

*/