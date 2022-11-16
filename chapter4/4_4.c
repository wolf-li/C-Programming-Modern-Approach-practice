/*
@File    :   4_4.c
@Time    :   2022/11/16 22:32:12
@Author  :   wolf-li 
@Version :   1.0

@result  :
$ ./main 
Enter a number between 0 and 32767:32767
In octal, your number is: 77777

*/

#include<stdio.h>
int main() {
    int num;
    printf("Enter a number between 0 and 32767:");
    scanf("%d",&num);
    printf("In octal, your number is: %.5o\n", num);
    return 0;
}
