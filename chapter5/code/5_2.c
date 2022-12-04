/*
@File    :   5_2.c
@Time    :   2022/12/02 00:38:05
@Author  :   wolf-li 
@Version :   1.0
*/

#include<stdio.h>
int main() {
    int h, m;
    printf("Enter a 24-hour time:");
    scanf("%d:%d", &h, &m);
    if ( h >= 0 && h < 24 && m >= 0 && m < 60 ){
        if ( h > 12 ){
            h -= 12;
            printf("valent 12-hour time: %.2d:%.2d PM\n", h, m);
        }else{
            printf("valent 12-hour time: %.2d:%.2d AM\n", h, m);
        }
    }else{
        printf("wrong input\n");
    }
    return 0;
}