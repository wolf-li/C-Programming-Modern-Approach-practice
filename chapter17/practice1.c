/*
 * @Author: wolf-li
 * @Date: 2024-06-17 21:44:16
 * @LastEditTime: 2024-06-17 21:49:46
 * @LastEditors: wolf-li
 * @Description: 
 * @FilePath: /c_code/c_morden_desgin/chapter17/practice1.c
 * talk is cheep show me your code.
 */
#include<stdio.h>
#include<stdlib.h>

typedef struct{
    char c[10];
    int i;
    double d;
}weight;

void *my_malloc(size_t size);

int main(){
    int w = 3;
    weight *q = my_malloc(sizeof(weight));
    q->i = 7;
    printf("%d\n", q->i);
    return 0;
}

void *my_malloc(size_t size){
    void *p;
    p = malloc(size);
    if ( p == NULL){
        printf("Error can't malloc.");
        exit(1);
    }
    return p;
}