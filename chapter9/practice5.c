#include<stdio.h>

int num_digits(int n){
    int res = 1;
    while (n/10)
    {
        res++;
        n /= 10;
    }
    return res;
}

int main(){
    int a = 123;
    printf("%d num digits: %d\n",a, num_digits(a));
    a = 2;
    printf("%d num digits: %d\n",a, num_digits(a));
    a = 12314;
    printf("%d num digits: %d\n",a, num_digits(a));
}