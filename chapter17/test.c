/*
 * @Author: wolf-li
 * @Date: 2024-06-12 21:48:50
 * @LastEditTime: 2024-06-12 21:56:38
 * @LastEditors: wolf-li
 * @Description: 
 * @FilePath: /c_code/c_morden_desgin/chapter17/test.c
 * talk is cheep show me your code.
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *concat(const char *s1, const char *s2);

int main(){
    const char str1[] = "hello ";
    const char str2[] = "word";
    char *str = concat( &str1, &str2);
    printf("str address: %p\n",str);
    printf("%s\n",str);
    free(str);
    printf("str address: %s\n", *str);
}

char *concat(const char *s1, const char *s2){
    char *res;
    res = malloc(strlen(s1)+ strlen(s2) + 1);
    if(res == NULL){
        printf("Error: malloc failed in concat\n");
        exit(EXIT_FAILURE);
    }
    strcpy(res, s1);
    strcat(res, s2);
    return res;
}
