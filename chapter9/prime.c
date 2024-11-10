#include<stdio.h>

int prime(unsigned int n){
    if (n == 1){
        return 0;
    }
    for(int i = n-1; i > 1; i--){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if (prime(num) == 1){
        printf("prime.\n");
    }else{
        printf("not a prime.\n");
    }
    return 0;
}