#include<stdio.h>

struct fraction{
    int numerator;
    int denominator;
};

int gcd(int m, int n){
    int tmp;
    if (m < n){
        tmp = m;
        m = n;
        n = tmp;
    }
    do
    {
        tmp = n;
        n = m % n;
        m = tmp;
    }while (n != 0);
    return m;
}

void fraction_gcd(struct fraction *f){
    int common = gcd(f->denominator, f->numerator);
    f->denominator = f->denominator/common;
    f->numerator = f->numerator/common;
}

void print_fraction(char input[], struct fraction f){
    printf("%s ",input);
    printf("%d/%d\n",f.numerator,f.denominator);
}

void add_fraction(struct fraction f1, struct fraction f2){
    struct fraction tmp;
    tmp.denominator = f1.denominator*f2.denominator;
    tmp.numerator = f2.denominator*f1.numerator + f1.denominator*f2.numerator;
    fraction_gcd(&tmp);
    print_fraction("add res:",tmp);
}

void sub_fraction(struct fraction f1, struct fraction f2){
    struct fraction tmp;
    tmp.denominator = f1.denominator*f2.denominator;
    tmp.numerator = f2.denominator*f1.numerator - f1.denominator*f2.numerator;
    fraction_gcd(&tmp);
    print_fraction("sub res:",tmp);
}

void mult_fraction(struct fraction f1, struct fraction f2){
    struct fraction tmp;
    tmp.denominator = f1.denominator*f2.denominator;
    tmp.numerator = f1.numerator * f2.numerator;
    fraction_gcd(&tmp);
    print_fraction("mult res:",tmp);
}

void div_fraction(struct fraction f1, struct fraction f2){
    struct fraction tmp;
    tmp.denominator = f1.denominator * f2.numerator;
    tmp.numerator = f1.numerator * f2.denominator;
    fraction_gcd(&tmp);
    print_fraction("div res:",tmp);
}

int main(){
    struct fraction t1 = {.numerator = 4, .denominator = 3};
    struct fraction t2 = {.numerator = 3, .denominator = 18};
    struct fraction t3 = {.numerator = 7, .denominator = 35};
    struct fraction t4 = {.numerator = 6, .denominator = 18};
    print_fraction("res:",t1);
    fraction_gcd(&t1);
    print_fraction("res:",t1);
    fraction_gcd(&t2);
    print_fraction("res:",t2);
    add_fraction(t1, t2);
    add_fraction(t2, t1);
    add_fraction(t3, t4);
    sub_fraction(t3, t4);
    sub_fraction(t4, t3);
    mult_fraction(t4, t3);
    mult_fraction(t2, t1);
    div_fraction(t2, t1);
    div_fraction(t1, t2);
}

