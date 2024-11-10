#include<stdio.h>

int sum(int n){
    int sum = 0;
    for (int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}

int main(void){
    int n = 200;
    printf("1 + 2 + ... %d = %d\n",n, sum(n));
    return 0;
}