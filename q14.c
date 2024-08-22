/*
Ojas Hegde
MT2024105
14 Write a program to find the type of a file.
a. Input should be taken from command line.
b. program should be able to identify any type of a file.
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

int main(int argc, char* argv[]){
    if(argc <= 1){
        printf("Not enough arguments\n");
        exit(0);
    }
    
    for(int i = 1; i < argc; i++){
        int fd1;
        //fd1 = open(argv[i], O_RDONLY, 0744);
        struct stat fileStat;
        if(lstat(argv[i], &fileStat) < 0){
            perror("stat");
            exit(1);
        }
        if(S_ISREG(fileStat.st_mode)){
            printf("Regular file\n");
        }
        if(S_ISDIR(fileStat.st_mode)){
            printf("directory file\n");
        }
        if(S_ISFIFO(fileStat.st_mode)){
            printf("fifo file\n");
        }
        if(S_ISLNK(fileStat.st_mode)){
            printf("Soft link file\n");
        }
        //close(fd1);

    }
}

/*
$ ./a.out soft1 newfile myfifo .
Soft link file
Regular file
fifo file
directory file
*/