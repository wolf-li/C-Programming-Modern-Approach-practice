/*
@File    :   5_7.c
@Time    :   2022/12/03 15:58:36
@Author  :   wolf-li 
@Version :   1.0
*/


#include<stdio.h>
int main() {
    int num1, num2, num3, num4, tmp;
    printf("Enter four integers:");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    if ( num1 > num2 ){
       tmp = num2;
       num2 = num1;
       num1 = tmp;
    }
    if ( num3 > num4 ){
       tmp = num4;
       num4 = num3;
       num3 = tmp;
    }
    if ( num1 > num3 ){
       tmp = num1;
       num1 = num3;
       num3 = tmp;
    }
    if ( num2 > num4 ){
       tmp = num4;
       num4 = num2;
       num2 = tmp;
    }
    printf("Largest: %d\n",num4);
    printf("Smallest: %d\n", num1);
    return 0;
}