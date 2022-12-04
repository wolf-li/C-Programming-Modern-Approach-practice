/*
@File    :   5_8.c
@Time    :   2022/12/02 00:09:40
@Author  :   wolf-li 
@Version :   1.0
*/



#include<stdio.h>
#include<stdbool.h>
int main() {
    bool teenager;
    int age = 13;
    if ( age >= 13 && age <= 19 ){
        teenager = true;
    }else {
        teenager = false;
    }
    printf("%d",teenager);
    return 0;
}