#define _GNU_SOURCE
#include <sched.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <syslog.h>

int main(){
    pid_t pid1 = fork();
    if(pid1 == 0){
        char *args1[2] = {"./main2_1", NULL};
        execvp(args1[0], args1);
    }
    pid_t pid2 = fork();
    if(pid2 == 0){
        char *args2[2] = {"./main2_2", NULL};
        execvp(args2[0], args2);
    }
    pid_t pid3 = fork();
    if(pid3 == 0){
        char *args3[2] = {"./main2_3", NULL};
        execvp(args3[0], args3);
    }
    return 0;
}