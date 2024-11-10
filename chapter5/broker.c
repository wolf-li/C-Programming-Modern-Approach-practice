/* calculates a broker's commission */

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

int main(void){
    float commission, value;
    printf("Enter value of trade:");
    
    int result = scanf("%f",&value);
    // 错误处理，判断输入数据是否为浮点数并且大于0
    assert( result == 1 && value >= 0 );
    
    if(value < 2500.00f){
        commission = 30 + value * 0.017;
    }else if (value >=2500 && value < 6250){
        commission = 56 + value * 0.0066;
    }else if (value >= 6250 && value < 20000){
        commission = 76 + value * 0.0034;
    }else if (value >= 20000 && value < 50000){
        commission = 100 + value * 0.0022;
    }else if(value >= 50000 && value < 500000){
        commission = 155 + value * 0.0011;
    }else {
        commission = 255 + value * 0.0009;
    }

    if (value < 39.00f){
        commission = 39.00f;
    }
    printf("commission: $%.2f\n", commission);

    return 0;
}