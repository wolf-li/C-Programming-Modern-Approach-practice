/*
 * @Author: wolf-li
 * @Date: 2024-06-09 23:27:49
 * @LastEditTime: 2024-06-09 23:29:38
 * @LastEditors: wolf-li
 * @Description: 
 * @FilePath: /c_code/c_morden_desgin/chapter16/practice4.c
 * talk is cheep show me your code.
 */
#include<stdio.h>

struct Complex{
    double real;
    double imaginary;
};

struct Complex make_complex(double real, double imaginary);
struct Complex add_complex(struct Complex n1, struct Complex n2);
void print_complex(struct Complex c);

int main(){
    struct Complex c1, c2, c3;
    c1 = make_complex(3.0, 7.0);
    c2 = make_complex(1.0, 2.0);
    print_complex(c1);
    print_complex(c2);
    c3 = add_complex(c1, c2);
    print_complex(c3);
}

struct Complex make_complex(double real, double imaginary){
    struct Complex tmp;
    tmp.real = real;
    tmp.imaginary = imaginary;
    return tmp;
}

struct Complex add_complex(struct Complex n1, struct Complex n2){
    struct Complex tmp;
    tmp.real = n1.real + n2.real;
    tmp.imaginary = n1.imaginary + n2.imaginary;
    return tmp;
}

void print_complex(struct Complex c){
    printf("read: %.2lf\n", c.real);
    printf("aginary: %.2lf\n", c.imaginary);
}