#include<stdio.h>

int main(){
    long int fib_number[40] = {1,1};
    for (int i = 2; i < 40; i++){
        fib_number[i] = fib_number[i-1] + fib_number[i-2];
    }
    for (int i = 0; i < 40; i++)
    {
        printf("fib_number[%d]: %ld \n", i, fib_number[i]);
    }
    return 0;
}