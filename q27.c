/*
Ojas Hegde
MT2024105
27. Write a program to execute ls -Rl by the following system calls
a. execl
b. execlp
c. execled. execv
e. execvp
*/

#include <stdio.h>
#include <unistd.h>

int main(int argc, char* argv[], char **envp){
    execl("/bin/ls", "ls", "-Rl", NULL);
    //execlp searches for program in path
    execlp("ls", "ls", "-Rl", NULL);
    //execle searches a given environment for program. Passed the env of the calling program
    execle("/bin/ls", "ls", "-Rl", NULL, envp);

    char *args[] = {"ls", "-Rl", NULL};

    // Execute "ls -Rl" using execv. Difference is that args are passed as an array
    execv("/bin/ls", args);
    // Execute "ls -Rl" using execvp. like execlp
    execvp("ls", args);
}

/*
The program doesn't progress past each exec statement as the process image is changed
All output this
$ ./a.out
.:
total 204
-rwxrwxr-x 1 ojas ojas 16000 Aug 27 18:44 a.out
-rwxr--r-- 1 ojas ojas     0 Aug 22 09:18 creat
-rwxr--r-- 1 ojas ojas    79 Aug 22 13:43 dup.txt
prw------- 1 ojas ojas     0 Aug  8 09:06 fifoName
-rw-rw-r-- 3 ojas ojas    14 Aug  8 08:49 hard1
-rw-rw-r-- 3 ojas ojas    14 Aug  8 08:49 hard2
-rw-rw-r-- 1 ojas ojas   302 Aug 23 18:54 hello.c
-rwxrwxr-x 1 ojas ojas 16040 Aug 23 18:55 hello.out
-rwxr--r-- 1 ojas ojas    30 Aug 22 13:38 lseek.txt
prw-rw-r-- 1 ojas ojas     0 Aug 14 17:38 myfifo
-rw-rw-r-- 3 ojas ojas    14 Aug  8 08:49 newfile
-rw-rw-r-- 1 ojas ojas   787 Aug 22 13:39 q10.c
-rw-rw-r-- 1 ojas ojas   811 Aug 22 13:44 q11.c
-rw-rw-r-- 1 ojas ojas   367 Aug 22 13:45 q12.c
-rw-rw-r-- 1 ojas ojas   741 Aug 22 13:48 q13.c
-rw-rw-r-- 1 ojas ojas  1125 Aug 22 13:50 q14.c
-rw-rw-r-- 1 ojas ojas  5438 Aug 22 13:52 q15.c
-rw-rw-r-- 1 ojas ojas  1101 Aug 22 13:52 q16.c
-rw-rw-r-- 1 ojas ojas   633 Aug 22 13:53 q17a.c
-rw-rw-r-- 1 ojas ojas  1048 Aug 22 13:53 q17b.c
-rw-rw-r-- 1 ojas ojas  2878 Aug 22 13:55 q18.c
-rw-rw-r-- 1 ojas ojas   191 Aug  8 09:05 q1a.c
-rw-rw-r-- 1 ojas ojas   744 Aug  8 09:15 q1.txt
-rw-rw-r-- 1 ojas ojas   585 Aug 22 13:55 q20.c
-rw-rw-r-- 1 ojas ojas   360 Aug 22 13:57 q21.c
-rw-rw-r-- 1 ojas ojas   889 Aug 22 09:09 q22.c
-rw-rw-r-- 1 ojas ojas   415 Aug 22 09:16 q23.c
-rw-rw-r-- 1 ojas ojas   464 Aug 23 18:30 q24.c
-rw-rw-r-- 1 ojas ojas   522 Aug 23 18:42 q25.c
-rw-rw-r-- 1 ojas ojas   902 Aug 23 19:03 q26.c
-rw-rw-r-- 1 ojas ojas   728 Aug 27 18:44 q27.c
-rw-rw-r-- 1 ojas ojas  1968 Aug 23 19:14 q2.c
-rw-rw-r-- 1 ojas ojas   374 Aug 22 09:19 q3.c
-rw-rw-r-- 1 ojas ojas   468 Aug 22 09:20 q4.c
-rw-rw-r-- 1 ojas ojas   586 Aug  9 19:49 q5.c
-rw-rw-r-- 1 ojas ojas   312 Aug 22 09:24 q6.c
-rw-rw-r-- 1 ojas ojas   621 Aug 22 09:23 q7.c
-rw-rw-r-- 1 ojas ojas   630 Aug 22 13:37 q8.c
-rw-rw-r-- 1 ojas ojas  1527 Aug 22 13:38 q9.c
-rw-rw-r-- 1 ojas ojas    34 Aug 22 14:37 README.md
-rwxr--r-- 1 ojas ojas     0 Aug  9 19:41 readwr
-rwxr--r-- 1 ojas ojas   120 Aug 22 13:54 records
lrwxrwxrwx 1 ojas ojas     7 Aug  8 08:41 soft1 -> newfile
lrwxrwxrwx 1 ojas ojas     9 Aug  8 08:43 soft2 -> ./newfile
-rw-rw-r-- 1 ojas ojas    40 Aug 10 08:12 temp1
-rwxr--r-- 1 ojas ojas    40 Aug 22 09:22 temp2
-rwxr--r-- 1 ojas ojas    26 Aug 22 08:55 temp21.txt
-rwxr--r-- 1 ojas ojas    13 Aug 22 09:10 temp22.txt
-rwxr--r-- 1 ojas ojas     6 Aug 22 13:52 temp.txt
-rwxr--r-- 1 ojas ojas     4 Aug 22 13:53 ticket.txt
*/