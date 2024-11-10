#include<stdio.h>

int main(){
    char *p = "abc";
    // putchar(p);
    puts(p);      // true
    putchar(*p);  // true
    // puts(*p);
}