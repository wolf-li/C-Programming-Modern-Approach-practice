// 编写函数 gcd(m, n)来计算整数 m 和 n 的最大公约数。（第 6 章的编程题 2 描述了计算最大公约数的
// Euclid 算法。）
#include<stdio.h>

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

int main(){
    int x1, x2;
    x1 = 24; x2 = 12;
    printf("gcd: %d\n",gcd(x2,x1));
    return 0;
}