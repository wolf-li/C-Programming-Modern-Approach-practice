/*
@File    :   4_3.c
@Time    :   2022/11/16 22:26:34
@Author  :   wolf-li 
@Version :   1.0

@result  :
$ ./main 
Enter a two-digit number:789
The reversal is: 987

*/

#include<stdio.h>
int main() {
    int num1, num2, num3;
    printf("Enter a two-digit number:");
    scanf("%1d%1d%1d",&num1, &num2, &num3);
    printf("The reversal is: %d%d%d\n", num3, num2, num1);
    return 0;
}
