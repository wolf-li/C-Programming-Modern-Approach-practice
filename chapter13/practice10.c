#include<stdio.h>
#include<string.h>

char *duplicate( char *p, char *dest);
char *duplicate1(char *p, char *dest);

int main(){
    char str1[]= "helm man";
    char str2[strlen(str1)];
    char str3[13];
    printf("%s\n",str1);
    printf("duplicate: %s\n", duplicate(str1, str2));
    printf("duplicate1: %s\n", duplicate1(str1, str3));
    printf("%s\n",str1);
}

char *duplicate(char *p, char *dest){
    char *q = p;
    char *r = dest;
    do
    {
        *r = *q;
        q++;
        r++;
    }while (*q != '\0');
    
    *r='\0';
    printf("%s\n",dest);
    return dest;
}

char *duplicate1(char *p, char *dest){
    char *q = p;
    char *r = dest;
    while (*r++ = *q++)
        ;
    return dest;
}