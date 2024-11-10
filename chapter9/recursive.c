#include<stdio.h>

int fact(int n){
    if (n <= 1)
        return 1;
    return n * fact(n-1);
}

int power(int x, int n){
    if (n == 0)
        return 1;
    else
        return x * power(x, n-1);
}

int power1(int x, int n){
    return n == 0? 1: x * power1(x, n-1);
}

int main(){
    for(int i = 1; i < 10; i++)
        printf("%d!: %d\n",i,fact(i));
    for(int i = 1; i < 10; i++)
        printf("%d!: %d\n",i,power1(2,i));
}