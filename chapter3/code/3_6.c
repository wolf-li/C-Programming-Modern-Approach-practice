/*
@File    :   3_6.c
@Time    :   2022/11/15 23:38:32
@Author  :   wolf-li 
@Version :   1.0

result   :
$ ./main
Enter first fraction + second fraction: 1/3+2/3
The sum is 9/9

*/

#include<stdio.h>
int main() {
        int num1, denom1, num2, denom2, result_num, result_denom;
        printf("Enter first fraction + second fraction: ");
        scanf("%d/%d + %d/%d",&num1, &denom1, &num2, &denom2);
        result_num = num1 * denom2 + num2 * denom1;
        result_denom = denom1 * denom2;
        printf("The sum is %d/%d\n", result_num , result_denom);
        return 0;
}