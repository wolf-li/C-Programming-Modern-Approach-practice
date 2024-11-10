#include<stdio.h>

int main(){
    int a[] = {1,2,3,4,5,6,7};
    int *p = a;
    printf("p == a[0] %d\n", p == a[0]);       // 不合法
    printf("p == &a[0] %d\n", p == &a[0]);     // true
    printf("*p == a[0] %d\n", *p == a[0]);     // true
    printf("p[0] == a[0] %d\n", p[0] == a[0]); // true
}