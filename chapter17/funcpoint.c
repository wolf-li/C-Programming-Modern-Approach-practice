/*
 * @Author: wolf-li
 * @Date: 2024-07-03 22:40:45
 * @LastEditTime: 2024-07-03 22:46:12
 * @LastEditors: wolf-li
 * @Description: 
 * @FilePath: /c_code/c_morden_desgin/chapter17/funcpoint.c
 * talk is cheep show me your code.
 */
#include<stdio.h>
#include<stdlib.h>

void func(){
    printf("hello wordl!");
}

// 如何定义一个指向函数的指针


int main(){
    printf("func address: %p\n", func);
    long int *p = (long int *)&func;
    // 函数指针
    void(* myfunc)() = p;
    myfunc();
    return 0;
}