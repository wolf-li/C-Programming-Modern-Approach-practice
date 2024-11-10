#include<stdio.h>
#include<stdbool.h>
int main(){
    // bool 类型是整型
    bool weekend[7] = {[0]= true, [6] = true};
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", weekend[i]);
    }
    return 0;
}