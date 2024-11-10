/*
 * @Author: wolf-li
 * @Date: 2024-06-29 09:28:21
 * @LastEditTime: 2024-06-30 16:14:09
 * @LastEditors: wolf-li
 * @Description: 
 * @FilePath: /c_code/c_morden_desgin/chapter17/practice8/stack.h
 * talk is cheep show me your code.
 */
#include<stdbool.h>

typedef struct stack{
    int value;
    struct stack *next;
}stack, *LinkStackPtr;

typedef struct LinkStack{
    LinkStackPtr top;
    int count;
}LinkStack;

void make_empty();
bool is_empty(LinkStack L);
bool is_full(LinkStack L);
bool push(LinkStack *L,int data);
bool pop(LinkStack *L,int *data);