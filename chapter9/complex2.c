#include<stdio.h>

#define typeof(x) _Generic((x), \
                        signed char: printf("signed char.\n"), \
                        signed int: printf("signed in.\n"), \
                        default: printf("not find type.\n") \
)

int main(void){
    signed int b;
    int c;
    signed char a;
    long c1;

    typeof(b);
    typeof(c1);
    typeof(a);
    return 0;
}