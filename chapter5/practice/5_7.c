/*
@File    :   5_7.c
@Time    :   2022/12/02 00:00:22
@Author  :   wolf-li 
@Version :   1.0

@result :
17
*/

#include<stdio.h>
int main() {
    int i = -17;
    printf("%d\n",i >= 0 ? i: -i);
    return 0;
}
