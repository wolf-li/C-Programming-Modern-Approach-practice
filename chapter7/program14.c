// 牛顿法计算平方根
#include<math.h>
#include<stdio.h>

int main(){
    int input;
    double xy;
    printf("Enter a positive number:");
    scanf("%d",&input);
    double y = 1.0;
    do
    {
        xy = input / y;
        y = (y + xy )/2;
    } while (fabs(y - (y*2 - xy)) > 0.00001*y);
    
    printf("sqrt(%d):%f\n",input,y);

    retu rn 0;
}