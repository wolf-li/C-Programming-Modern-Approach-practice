#include<stdio.h>
#include<complex.h>

#define sum(x) _Generic(x, int:sum1, double: sum2)(x)

int sum1(int x){
    return x-1;
}

double sum2(double x){
    return x+1.0;
}

int main(){
    // printf("1-1: %d\n",sum(1));
    printf("3+1: %f\n",sum(3.0));
    return 0;
}