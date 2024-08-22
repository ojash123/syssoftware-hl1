/*
Ojas Hegde
MT2024105
6. Write a program to take input from STDIN and display on STDOUT. Use only read/write system calls
*/

#include <unistd.h>

int main(){
    int r;
    char buf[80];
    r = read(0, buf, 80); //0 is stdin, 1 is stdout, 2 is stderr
    write(1, buf, r);
}
/*Output
$ ./a.out
hello
hello
*/