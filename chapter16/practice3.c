/*
 * @Author: wolf-li
 * @Date: 2024-06-09 16:42:39
 * @LastEditTime: 2024-06-09 23:26:57
 * @LastEditors: wolf-li
 * @Description: 
 * @FilePath: /c_code/c_morden_desgin/chapter16/practice3.c
 * talk is cheep show me your code.
 */
#include<stdio.h>

struct complex{
    double real;
    double imaginary;
};

struct complex make_complex(double real, double imaginary);
struct complex add_complex(struct complex n1, struct complex n2);
void print_complex(struct complex c);

int main(){
    struct complex c1, c2, c3;
    c1 = make_complex(3.0, 7.0);
    c2 = make_complex(1.0, 2.0);
    print_complex(c1);
    print_complex(c2);
    c3 = add_complex(c1, c2);
    print_complex(c3);
}

struct complex make_complex(double real, double imaginary){
    struct complex tmp;
    tmp.real = real;
    tmp.imaginary = imaginary;
    return tmp;
}

struct complex add_complex(struct complex n1, struct complex n2){
    struct complex tmp;
    tmp.real = n1.real + n2.real;
    tmp.imaginary = n1.imaginary + n2.imaginary;
    return tmp;
}

void print_complex(struct complex c){
    printf("read: %.2lf\n", c.real);
    printf("i,aginary: %.2lf\n", c.imaginary);
}=