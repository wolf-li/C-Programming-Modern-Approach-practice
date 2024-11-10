#include<stdio.h>

#define N 7

int sum_array(const int a[], int n);

int main(){
    int a[N] = {1,2,3,4,5,6,7};
    int s = sum_array(a, N);
    printf("sum: %d", s);
}

int sum_array(const int a[], int n){
    int sum=0;
    for(int *p = &a[0]; p < a + N; p++){
        sum += *p;
    }
    return sum;
}