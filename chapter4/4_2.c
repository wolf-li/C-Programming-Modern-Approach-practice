/*
@File    :   4_2.c
@Time    :   2022/11/16 22:24:24
@Author  :   wolf-li 
@Version :   1.0

@result :
$  ./main 
Enter a two-digit number:123
The reversal is: 321

*/

#include<stdio.h>
int main() {
    int num;
    printf("Enter a two-digit number:");
    scanf("%3d",&num);
    printf("The reversal is: %d%d%d\n", num%10, num/10%10, num/100);
    return 0;
}
