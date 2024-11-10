#include<stdio.h>
#include<string.h>
#include<ctype.h>

void capitalize(char *ch);

int main(){
    char str1[] = "hello 123";
    char str2[] = "Uior you 213^*";

    capitalize(str1);
    capitalize(str2);
    printf("str1 toupper: %s\n", str1);
    printf("str2 toupper: %s\n", str2);

    return 0;
}

void capitalize(char *ch){
    while (*ch)
    {
        if(*ch >= 'a' && *ch <= 'z')
            *ch = toupper(*ch);
        ch++;
    }
}