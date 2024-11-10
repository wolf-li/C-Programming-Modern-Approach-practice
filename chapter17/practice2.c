/*
 * @Author: wolf-li
 * @Date: 2024-06-17 21:54:29
 * @LastEditTime: 2024-06-17 22:07:33
 * @LastEditors: wolf-li
 * @Description: 
 * @FilePath: /c_code/c_morden_desgin/chapter17/practice2.c
 * talk is cheep show me your code.
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *duplicate(char *str);

int main(){
    char w[10] = "hello";
    char *q = duplicate(w);
    printf("%s\n", q);
    return 0;
}

char *duplicate(char *str){
    char *p = malloc(sizeof(str));
    if ( p == NULL ){
        printf("Error create point.");
        exit(1);
    }
    strcpy(p, str);
    return p;
}
