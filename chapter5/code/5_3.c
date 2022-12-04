/*
@File    :   5_3.c
@Time    :   2022/12/02 01:22:54
@Author  :   wolf-li 
@Version :   1.0
*/

#include<stdio.h>
int main() {
    float commission, competitorCommission, value, price;
    int shareNum;
    printf("Enter the Number share:");
    scanf("%d",&shareNum);
    printf("Enter the Price per share:");
    scanf("%f",&price);
    value = shareNum * price;

    if ( value < 2500.00f )
        commission = 30.00f + .017f * value;
    else if ( value < 6250.00f )
        commission = 56.00f + .0066f * value;
    else if ( value < 20000.00f )
        commission = 76.00f + .0034f * value;
    else if ( value < 50000.00f )
        commission = 100.00f + .0022f * value;
    else if ( value < 500000.00f )
        commission = 155.00f + .0011f * value;
    else
        commission = 255.00f + .0009f * value;

    if ( value < 39.00f )
        commission = 39.00f;

    if ( shareNum < 2000 )
        competitorCommission = shareNum * .03f + 33;
    else
        competitorCommission = shareNum * .02f + 33;

    printf("Commisooion: $%.2f\n",commission);
    printf("Competitor Commisooion: $%.2f\n",competitorCommission);
    return 0;
}