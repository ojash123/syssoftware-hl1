/*
Ojas Hegde
MT2024105
Write a program to print the following information about a given file.
a. inode
b. number of hard links
c. uid
d. gid
e. size
f. block size
g. number of blocks
h. time of last access
i. time of last modification
j. time of last change*/

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/stat.h>

int main(){
    int fd1;
    fd1 = open("newfile", O_RDONLY, 0744);
    struct stat fileStat;
    if(fstat(fd1, &fileStat) < 0){
        perror("stat");
        exit(1);
    }
    printf("File: newfile\n");
    printf("Inode: %lu\n", (unsigned long)fileStat.st_ino);
    printf("Number of hard links: %lu\n", (unsigned long)fileStat.st_nlink);
    printf("UID: %u\n", fileStat.st_uid);
    printf("GID: %u\n", fileStat.st_gid);
    printf("Size: %lu bytes\n", (unsigned long)fileStat.st_size);
    printf("Block size: %lu bytes\n", (unsigned long)fileStat.st_blksize);
    printf("Number of blocks: %lu\n", (unsigned long)fileStat.st_blocks);

    // Print the times of last access, modification, and status change
    printf("Time of last access: %s", ctime(&fileStat.st_atime));
    printf("Time of last modification: %s", ctime(&fileStat.st_mtime));
    printf("Time of last change: %s", ctime(&fileStat.st_ctime));

}
