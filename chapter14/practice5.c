#include<stdio.h>
#include<string.h>

#define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))

int main(){
    int i = 0;
    char s[10];
    strcpy(s,"adcd");
    putchar(TOUPPER(s[++i]));
    printf("%s\n",s);


    strcpy(s,"0123");
    printf("%s\n",s);
    i = 0;
    putchar(TOUPPER(s[++i]));
    printf("%s\n",s);
}