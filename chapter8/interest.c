// Enter interest rate: 6
// Enter number of years: 5
// Years 6% 7% 8% 9% 10%
//  1 106.00 107.00 108.00 109.00 110.00
//  2 112.36 114.49 116.64 118.81 121.00
//  3 119.10 122.50 125.97 129.50 133.10
//  4 126.25 131.08 136.05 141.16 146.41
//  5 133.82 140.26 146.93 153.86 161.05

#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int main(){
    int rate;
    int year;
    double rates[SIZE] = {100.00,100.00,100.00,100.00,100.00};
    printf("Enter interest rate:"); 
    scanf("%d",&rate); // scanf 不要使用 unsigned int,输入负数有问题
    if (rate <= 0){
        printf("wrong input\n");
        exit(1);
    }
    printf("Enter number of years:"); 
    scanf("%d",&year);
    if (year <= 0){
        printf("wrong input\n");
        exit(1);
    }
    printf("Years %d%% %d%% %d%% %d%% %d%%\n", rate, rate+1,rate+2,rate+3 ,rate+4);
    for (int i = 0; i < year; i++){
        printf("%d ",i);
        for (int j = 0; j < SIZE; j++){
            rates[j] = rates[j] * (double)(1.0 + (rate + j)*0.01 );
            printf("%.2lf ", rates[j] );
        }
        printf("\n");
    }
    return 0;
}