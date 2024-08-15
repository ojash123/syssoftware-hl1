/*
Ojas Hegde
MT2024105
15. Write a program to display the environmental variable of the user (use environ).
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv, char **envp){
    for (char **env = envp; *env != 0; env++)
    {
        printf("%s\n", *env);
    }
    
}