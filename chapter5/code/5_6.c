/*
@File    :   5_6.c
@Time    :   2022/12/03 15:26:19
@Author  :   wolf-li 
@Version :   1.0
*/

#include<stdio.h>
int main() {
    int s, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, e, firstSum, secondSum;
    printf("Enter the UPX:");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&s, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5, &e);
    firstSum = s + i2 + i4 + j1 + j3 + j5;
    secondSum = i1 + i3 + i5 + j2 + j4;
    if ( e == ( 9 - ((3 * firstSum + secondSum - 1 )%10)) )
        printf("VALID\n");
    else
        printf("NOT VALID\n");
    return 0;
}