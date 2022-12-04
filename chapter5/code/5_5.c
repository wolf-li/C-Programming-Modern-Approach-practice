/*
@File    :   5_5.c
@Time    :   2022/12/02 17:54:33
@Author  :   wolf-li 
@Version :   1.0
*/

#include<stdio.h>
int main() {
    double income, tax;
    printf("Enter your income:");
    scanf("%lf",&income);
    if ( income < 750 )
        tax = income * 1.01;
    else if ( income < 2250 )
        tax = (income - 750) * 0.02f + 7.50f;
    else if ( income < 3750 )
        tax = (income - 2250 ) * 0.03f + 37.50f;
    else if ( income < 5250 )
        tax = (income - 3750 ) * 0.04f + 82.50f;
    else if ( income < 7000 )
        tax = (income - 5250 ) * 0.05f + 142.50f;
    else
        tax = (income - 7000 ) * 0.06f + 230.00f;

    printf("tax is: %.2f\n",tax);
    return 0;
}