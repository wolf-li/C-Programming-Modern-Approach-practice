/*
@File    :   4_1.c
@Time    :   2022/11/16 22:22:11
@Author  :   wolf-li 
@Version :   1.0

@result  :
$ ./main 
Enter a two-digit number:2345
The reversal is: 32

*/

#include<stdio.h>
int main() {
    int num;
    printf("Enter a two-digit number:");
    scanf("%2d",&num);
    printf("The reversal is: %d%d\n", num%10, num/10);
    return 0;
}
