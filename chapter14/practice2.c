/*
 * @Author: wolf-li
 * @Date: 2024-06-07 15:34:49
 * @LastEditTime: 2024-06-07 15:39:05
 * @LastEditors: wolf-li
 * @Description: LEMS
 * @FilePath: /c_code/c_morden_desgin/chapter14/practice2.c
 * talk is cheep show me your code.
 */
#include<stdio.h>

#define NELEMS(a) ((int) (sizeof(a)/sizeof(a[0])))

int main(){
    char ch[] = "hello";
    int num[] = {1,2,3,4,5};
    printf("char array number is: %d\n", NELEMS(ch));
    printf("int array number is: %d\n", NELEMS(num));
}

