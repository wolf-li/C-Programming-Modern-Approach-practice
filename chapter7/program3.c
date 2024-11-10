#include<stdio.h>
int main(void){
    long double num, sum = 0;
    printf("This program sums a series of integers.\n");
    printf("Enter integers(0 to terminate):");

    scanf("%Lf",&num);
    while (num != 0.0)
    {
        sum += num;
        scanf("%Lf",&num);
    }
    printf("The sum is: %Lf\n",sum);
}