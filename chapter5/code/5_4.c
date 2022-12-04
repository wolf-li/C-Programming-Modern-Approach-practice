/*
@File    :   5_4.c
@Time    :   2022/12/02 17:54:21
@Author  :   wolf-li 
@Version :   1.0
*/

#include<stdio.h>
int main() {
    float speed;
    printf("Enter the wind speed:");
    scanf("%f",&speed);
    if (speed < 1)
        printf("Calm\n");
    else if (speed < 4)
        printf("Light air\n");
    else if (speed < 28)
        printf("Breeze\n");
    else if (speed < 48)
        printf("Gale");
    else if (speed < 63)
        printf("Storm\n");
    else
        printf("Hurieane\n");
    return 0;
}