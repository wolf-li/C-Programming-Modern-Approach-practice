/*
 * @Author: wolf-li
 * @Date: 2024-06-17 22:25:24
 * @LastEditTime: 2024-06-17 22:49:14
 * @LastEditors: wolf-li
 * @Description:
 * @FilePath: /c_code/c_morden_desgin/chapter17/practice4.c
 * talk is cheep show me your code.
 */
#include <stdio.h>
#include <stdlib.h>

struct point
{
    int x, y;
};
struct rectangle
{
    struct point upper_left, lower_right;
};

int main(){
    struct rectangle *p = malloc(sizeof(struct rectangle));
    struct point p1 = {10,25};
    struct point p2 = {20,15};
    p->upper_left = p1;
    p->lower_right = p2;
    printf("upper_left (%d, %d)\n", p->upper_left.x, p->upper_left.y);
    free(p);
    return 0;
}