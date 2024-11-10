#include<stdio.h>
#define ERROR(str, x) (fprintf(stderr, str, x))

#if define(MAC_OS)

int main(){
    ERROR("Range error: %d\n", 7);
    return 0;
}

