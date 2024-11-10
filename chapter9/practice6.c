#include<stdio.h>

int digits(int n,int index){
    int res ;
    for(int i = 0; i < index; i++){
        res = n % 10;
        n = n/10;
    }
    return res;
}

int main(){
    int a = 123;
    printf("%d num digits: %d\n",a, digits(a,1));
    a = 2;
    printf("%d num digits: %d\n",a, digits(a,1));
    a = 12314;
    printf("%d num digits: %d\n",a, digits(a,2));
}