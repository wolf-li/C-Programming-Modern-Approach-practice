#include<stdio.h>

int power(int x, int n){
    int sum = 1;
    for(int i = 1; i <= n; i++)
        sum *= x;
    return sum;
}

int main(){
    int n;
    printf("Enter x:");
    scanf("%d", &n);
    printf("x^2: %d\n",power(n,10));
    printf("3x^5 + 2x^4 - 5x^3 -x^2 + 7x - 6 = %d", 
        3*power(n,5) + \
        2*power(n,4) - \
        5*power(n,3) - \
        power(n,2) + \
        7*n - 6);
}