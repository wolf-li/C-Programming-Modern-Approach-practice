/*
 * @Author: wolf-li
 * @Date: 2024-06-29 09:28:25
 * @LastEditTime: 2024-06-30 16:13:44
 * @LastEditors: wolf-li
 * @Description: 
 * @FilePath: /c_code/c_morden_desgin/chapter17/practice8/stack.c
 * talk is cheep show me your code.
 */
#include"stack.h"
#include<stdio.h>
#include<stdlib.h>


bool is_empty(LinkStack l){
    return l.count? 1:0;
}
void make_empty(void);
bool is_empty(LinkStack L);
bool is_full(LinkStack L);
bool push(LinkStack *L,int data);
bool pop(LinkStack *L,int *data);
