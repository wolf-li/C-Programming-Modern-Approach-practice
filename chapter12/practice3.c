#include<stdio.h>

#define N 10

int main(){
    int a[N] = {1,2,3,4,5,6,7,8,9,10};
    int *p = &a[0], *q = &a[N-1], temp;
    while(p < q){
        temp = *p;
        *p++ = *q;  // 当前行指针 p 没有变化，本句结束后 指针 p 移动一个单位
        *q-- = temp;
    }
    for(int i = 0; i < N; i++){
        printf("%d ",a[i]);
    }

}