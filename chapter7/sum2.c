#include<stdio.h>
int main(void){
    long int num, sum = 0;
    printf("This program sums a series of integers.\n");
    printf("Enter integers(0 to terminate):");

    scanf("%ld",&num);
    while (num != 0)
    {
        sum += num;
        scanf("%ld",&num);
    }
    printf("The sum is: %ld\n",sum);
}