/*
@File    :   3_4.c
@Time    :   2022/11/15 22:51:04
@Author  :   wolf-li 
@Version :   1.0

@result  :
$ ./main
Enter phone number ((xxx)-xxx-xxxx):(234)-123-2345
You entered 234.123.2345
*/

#include<stdio.h>
main() {
        int num1, num2, num3;
        printf("Enter phone number ((xxx)-xxx-xxxx):");
        scanf("(%d)-%d-%d", &num1, &num2, &num3);
        printf("You entered %3d.%.3d.%.4d\n",num1, num2, num3);
        return 0;
}

