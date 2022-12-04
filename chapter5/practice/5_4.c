/*
@File    :   5_3.c
@Time    :   2022/11/19 23:01:09
@Author  :   wolf-li 
@Version :   1.0
*/

#include<stdio.h>
int main() {
    int i, j;
    scanf("%d %d", &i, &j);
    if (i < j)
    {
        printf("-1");
        printf("\n");
    }
    else if (i == j)
    {
        printf("0");
        printf("\n");
    }
    else
    {
        printf("1");
        printf("\n");
    }
    return 0;
}