/*
 * @Author: wolf-li
 * @Date: 2024-06-05 09:30:12
 * @LastEditTime: 2024-06-05 09:37:13
 * @LastEditors: wolf-li
 * @Description: 
 * @FilePath: /c_code/c_morden_desgin/chapter13/practice9.c
 * talk is cheep show me your code.
 */
#include<stdio.h>

int strcmp_arrary(char *s, char *t);
int strcmp_point(char *s, char *t);
int main(){
    char str1[]="hello world";
    char str2[]="hello world";
    printf("strcmp_array: %d\n", strcmp_arrary(str1, str2));
    printf("strcmp_point: %d\n", strcmp_point(str1, str2));

}

int strcmp_arrary(char *s, char *t){
    int i;
    for(i=0; s[i] == t[i]; i++)
        if(s[i] == '\0')
            return 0;
    return s[i]-t[i];
}

int strcmp_point(char *s, char *t){
    for(; *s == *t; t++, s++){
        if(*s == '\0')
            return 0;
    }
    return s - t;
}
