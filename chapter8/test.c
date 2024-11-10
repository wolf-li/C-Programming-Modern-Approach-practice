#include<stdio.h>
int main(){
    int a[12] = {[2]=3, [4]=7, [9]=1};
    for ( int i = 0; i < 12; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}