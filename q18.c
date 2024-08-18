/*
Ojas Hegde
MT2024105
18. Write a program to perform Record locking.
a. Implement write lock
b. Implement read lock
Create three records in a file. Whenever you access a particular record, first lock it then modify/access
to avoid race condition.
*/
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
struct record
{
    int rno;
    char rname[30];
    int count;
};

void createFile(){
    int fd;
    fd = open("records",O_CREAT| O_RDWR, 0744);

    struct record rd;
    rd.rno = 1;
    strcpy(rd.rname, "Ojas");
    rd.count = 0;
    write(fd, &rd, sizeof(rd));
    rd.rno = 2;
    rd.count = 0;
    strcpy(rd.rname, "Tony");
    write(fd, &rd, sizeof(rd));
    rd.rno = 3;
    rd.count = 0;
    strcpy(rd.rname, "Michael");
    write(fd, &rd, sizeof(rd));
    close(fd);
    printf("Created file records\n");
}

void readRecord(int no){
    int fd;
    fd = open("records", O_RDWR, 0744);
    if(fd < 0){
        perror("File open error\n");
        return;
    }
    struct record rd;
    struct flock lock;
    lock.l_type = F_WRLCK;
    lock.l_pid = getpid();
    lock.l_start = (no - 1)*sizeof(rd);
    lock.l_whence = SEEK_SET;
    lock.l_len = sizeof(rd);

    lseek(fd, (no - 1)*sizeof(rd), SEEK_SET);
    printf("Entering critical section...\n");
    fcntl(fd, F_SETLKW, &lock);
    read(fd, &rd, sizeof(rd));
    printf("Record no: %d\nRecord Name: %s\nAccess Count: %d\n", rd.rno, rd.rname, rd.count);
    rd.count++;
    lseek(fd, -1 * sizeof(rd), SEEK_CUR);
    write(fd, &rd, sizeof(rd));
    printf("Enter to continue");
    getchar();
    lock.l_type = F_UNLCK;
    fcntl(fd, F_SETLKW, &lock);
    close(fd);

}

int main(){
    int c, r, flag = 1;
    while(flag){
        printf("1. Create file\t2. Read Record\t3. Exit\n");
        scanf("%d", &c);
        getchar();
        switch (c)
        {
        case 1:
            createFile();
            break;
        case 2:
            printf("Enter record no: ");
            scanf("%d", &r);
            getchar();
            if(r < 1 || r > 3){
                printf("Only 3 records exist\n");
                break;
            }
            readRecord(r);
            break;
        case 3:
            flag = 0;
            break;
        default:
            printf("Incorrect option\n");
            break;
        }
    }
}