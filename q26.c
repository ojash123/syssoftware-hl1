/*
Ojas Hegde
MT2024105
26. Write a program to execute an executable program.
a. use some executable program
b. pass some input to an executable program. (for example execute an executable of $./a.out name)*/
#include <unistd.h>
#include <stdio.h>
/*executing hello.out:
//temporary file for q26

#include <stdio.h>

int main(int argc, char const *argv[])
{
    if(argc == 1){
        printf("Hello\n");
    }else{
        printf("Hello to ");
        for(int i = 1; i < argc; i++){
            printf("%s ", argv[i]);
        }
        printf("\n");
    }
    return 0;
}*/

int main(){
    execl("./hello.out", "hello.out", NULL);
    /*Output of this is:
    $ ./a.out
    Hello
    */
    printf("Enter a name: ");
    char name[20];
    scanf("%s", name);
    execl("./hello.out", "hello.out", name,  NULL);
    /*output of this is:
    $ ./a.out
    Enter a name: ojas
    Hello to ojas 
    */
}