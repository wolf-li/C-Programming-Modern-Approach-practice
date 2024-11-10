#include<stdio.h>

int largest_comman_divisorgcd(int num1, int num2){
    if(num1 > num2){
        num1 += num2;
        num2 = num1 - num2;
        num1 -= num2;
    }
    while (num2%num1 != 0)
    {
        num1--;
    }
    return num1;
}

int main(){
    // 不能修改预定义值
    // int start[]={8*60, 9*60+43, 11*60+19, 12*60+47, 14*60, 15*60+45, 19*60, 21*60+45};
    // int length = sizeof(start)/sizeof(start[0]);
    // for(int i = 0; i < length ; i++)
    //     printf("start[%d]: %d\n",i, start[i]);

    int n1 = 17, n2 = 3;
    printf("%d %d comman divisorgcd: %d", n1, n2, largest_comman_divisorgcd(n1, n2));
    return 0;
}