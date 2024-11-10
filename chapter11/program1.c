// 编写一个程序，要求用户输入一个美元数额，然后显示出如何用最少张数的 20 美元、10 美元、5 美
// 元和 1 美元钞票来付款：
// Enter a dollar amount: 93
// $20 bills: 4
// $10 bills: 1
//  $5 bills: 0
//  $1 bills: 3
//  提示：将付款金额除以 20，确定 20 美元钞票的数量，然后从付款金额中减去 20 美元的总金额。对
// 其他面值的钞票重复这一操作。确保在程序中始终使用整数值，不要用浮点数。
#include<stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(){
    printf("Enter a dollar amount:");
    int input, twenty, ten, five, one;
    scanf("%d",&input);
    pay_amount(input, &twenty, &ten, &five, &one);
    printf("$20 bills: %d\n",twenty);
    printf("$10 bills: %d\n",ten);
    printf(" $5 bills: %d\n",five);
    printf(" $1 bills: %d\n",one);
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones){
    *twenties = dollars / 20;
    *tens = (dollars - *twenties * 20) / 10;
    *fives = (dollars - *twenties * 20 - *tens * 10) / 5;
    *ones = dollars - *twenties * 20 - *tens * 10 - *fives * 5;
}