#include <stdio.h>
#include <stddef.h>
#include <stdbool.h>
#include <dlfcn.h>

void(*print_hello) ();
bool init_library(){
    void *hdl = dlopen("./hello_ariel.so", RTLD_LAZY);
    if(NULL == hdl){
        return false;
    }
    print_hello = (void(*)) dlsym(hdl, "print_hello");
    if(NULL == hdl){
        return false;
    }
    return true;
}
int main(){
    if(init_library()){
        print_hello();
    }
    else{
        printf("Library not loaded!!\n");
    }
    return 0;
}
