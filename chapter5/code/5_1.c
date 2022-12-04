/*
@File    :   5_1.c
@Time    :   2022/12/02 00:25:33
@Author  :   wolf-li 
@Version :   1.0
*/

#include<stdio.h>
int main() {
    int i = 1, num, tmp;
    printf("Enter a number:");
    scanf("%d",&tmp);
    num = tmp;
    while( tmp / 10 ){
        i+=1;
        tmp /= 10;
    }
    printf("The number %d has %d digits\n",num,i);
    return 0;
}