/*
@File    :   5_1.c
@Time    :   2022/11/19 22:56:20
@Author  :   wolf-li 
@Version :   1.0
*/

#include<stdio.h>
int main() {
    int i = 2, j = 3, k;
    k = i * j == 6;
    printf("%d",k);
    printf("\n");
    i = 5; j = 10; k = 1;
    printf("%d", k> i< j);
    printf("\n");
    i = 3; j =2 ; k =1;
    printf("%d", i< j ==j <k);
    printf("\n");
    i = 3; j =4 ; k =5;
    printf("%d\n", i%j +i < k);
    return 0;
}