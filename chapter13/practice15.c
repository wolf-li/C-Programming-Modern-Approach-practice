/*
 * @Author: wolf-li
 * @Date: 2024-06-05 22:40:15
 * @LastEditTime: 2024-06-05 22:48:02
 * @LastEditors: wolf-li
 * @Description: 
 * @FilePath: /c_code/c_morden_desgin/chapter13/practice15.c
 * talk is cheep show me your code.
 */
#include<stdio.h>

int f(char *s, char *t);

int main(){
    printf("%d\n",f("abcd","babc"));
    printf("%d\n",f("abcd","bcd"));
    return 0;
}

int f(char *s, char *t){
    char *p1, *p2;

    for(p1 = s; *p1; p1++){
        for(p2 = t; *p2; p2++){
            if(*p1 == *p2) break;
        }
        if(*p2 == '\0') break;
    }
    return p1 -s;
}