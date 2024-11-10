#include<stdio.h>

void avg_sum(double arr[], int n, double *avg, double *sum );

int main(){
    double arr_avg, arr_sum = 0;
    double num1[] = {352, 273, 165, 76, 345.0, 384.0, 225.0, 53, 304, 238};
    int length = sizeof(num1)/sizeof(num1[0]);
    avg_sum(num1, length, &arr_avg, &arr_sum);
    printf("array sum: %.2lf\n", arr_sum);
    printf("array avg: %.2lf\n", arr_avg);
    return 0;
}

void avg_sum(double arr[], int n, double *avg, double *sum ){
    for (int i = 0; i < n; i++)
    {
        *sum += arr[i];
    }
    *avg = *sum/n;
}