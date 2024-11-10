#include<stdio.h>

// Enter three numbers: 3.5 9.6 10.2
// Average of 3.5 and 9.6: 6.55
// Average of 9.6 and 10.2: 9.9
// Average of 3.5 and 10.2: 6.85 

double average(double a, double b){
    return (a+b)/2;
}

int main(){
    double num1, num2, num3;
    printf("Enter three numbers:");
    scanf("%lf%lf%lf",&num1, &num2, &num3);
    printf("Average of %g and %g: %g\n", num1, num2, average(num1,num2));
    printf("Average of %g and %g: %g\n", num2, num3, average(num3,num2));
    printf("Average of %g and %g: %g\n", num1, num3, average(num1,num3));
    return 0;
}