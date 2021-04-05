#define _GNU_SOURCE
#include <sched.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 10000
#define CYCLES 1000
char child_stack1[STACK_SIZE+1];
char child_stack2[STACK_SIZE+1];


void print(const char * text){
    int i;
    for(i = 0; i < CYCLES; i++){
        printf("Hello from %s\n", text);
        usleep(1000000);
    }
}

int child1(void *params){
    print("thread_1");
}

int child2(void *params){
    print("thread_2");
}

int main(){
   int result1 = clone(child1, child_stack1 + STACK_SIZE, CLONE_PARENT, 0);
   int result2 = clone(child2, child_stack2 + STACK_SIZE, CLONE_PARENT, 0);

   printf("clone result = %d\n", result1);
   print("parent 1");
   printf("clone result = %d\n", result2);
   print("parent 2");
   return 0;
}
