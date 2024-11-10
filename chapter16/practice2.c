#include<stdio.h>

struct test
{
    double real;
    double imaginary;
};

int main(){
    struct test c1, c2, c3;
    c1.real = 0.0;
    c1.imaginary = 1.0;

    c2.real = 1.0;
    c2.imaginary = 0.0;
    printf("c1 real %lf, c1 imaginary %lf\n", c1.real, c1.imaginary);
    c1 = c2;
    printf("change c1 real %lf, c1 imaginary %lf\n", c1.real, c1.imaginary);

    c3.real = c1.real + c2.real;
    c3.imaginary = c1.imaginary + c2.imaginary;
    printf("change c3 real %lf, c3 imaginary %lf\n", c3.real, c3.imaginary);
}
