#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void print(const char * text){
    int i;
    for(i = 0; i < 20; i++){
        printf("Hello from %s\n", text);
        usleep(1000000);
    }
}

int main(){
    __pid_t pid1 = fork();
    if(pid1 == 0){
        print("child 1");
    }
    else{
        print("parent");
    }
    
    __pid_t pid2 = fork();
    if(pid2 == 0){
        print("child 2");
    }
    else{
        print("parent");
    }
    return 0;
}
