/*
 * @Author: wolf-li
 * @Date: 2024-06-07 23:13:43
 * @LastEditTime: 2024-06-07 23:22:09
 * @LastEditors: wolf-li
 * @Description: 
 * @FilePath: /c_code/c_morden_desgin/chapter14/practice7.c
 * talk is cheep show me your code.
 */
#include<stdio.h>

// define 宏定义函数有问题
#define ENERIC_MAX(type) type type##_max(type x, type y){ return x > y ? x : y; } 

int main(){
    ENERIC_MAX(int)
    // printf("%d\n",c);
}