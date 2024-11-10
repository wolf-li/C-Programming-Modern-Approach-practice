/*
 * @Author: wolf-li
 * @Date: 2024-06-08 20:05:37
 * @LastEditTime: 2024-06-08 20:06:49
 * @LastEditors: wolf-li
 * @Description:
 * @FilePath: /c_code/c_morden_desgin/chapter14/practice16.c
 * talk is cheep show me your code.
 */
#include<stdio.h>

#define IDENT(x) PRAGMA(ident #x)
#define PRAGMA(x) _Pragma(#x)

int main(){
    IDENT(foo)
    return 0;
}