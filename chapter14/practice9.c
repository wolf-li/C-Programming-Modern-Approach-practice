/*
 * @Author: wolf-li
 * @Date: 2024-06-08 14:41:36
 * @LastEditTime: 2024-06-08 14:59:24
 * @LastEditors: wolf-li
 * @Description: 
 * @FilePath: /c_code/c_morden_desgin/chapter14/practice9.c
 * talk is cheep show me your code.
 */
#include<stdio.h>

#define CHECK(x,y,n) (x>0 && y>0 && x<n-1 && y<n-1? 1 : 0)
#define MEDIAN(x,y,z) ((((x) - (y))*((x)-(z)) < 0)?x:(((y-z)*(y-x)<0)?y:z))
#define POLYNOMIAL(x) (((((3*x + 2)*x - 5)*x - 1)*x + 7)*x -6)

int main(){
    int x1, x2;
    x1 = 3; x2 = 8;
    int w = 1;
    printf("%d\n",CHECK(x1, x2, w));
    printf("median: %d\n",MEDIAN(x1,x2,w));
    printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x -6 , x = 1: %d\n", POLYNOMIAL(2));
}
