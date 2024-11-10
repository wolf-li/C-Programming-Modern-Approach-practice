#include<stdio.h>

void store_zeros(int a[], int n);

int main(){
    int n[] = {43,23,4,5,623,4,312,32};
    int length = sizeof(n)/sizeof(n[0]);
    store_zeros(n, length);
    for(int i = 0; i < length; i++){
        printf("%d ",n[i]);
    }
}

void store_zeros(int a[], int n){
    for(int *p = a; p < a + n; p++){
        *p = 0;
    }
}
