#include<stdio.h>

int find_middle(int a[], int n) {
    int *p = a;
    return * p + (n / 2);
} 

int main(){
    int n[] = {1,2,3,4,5,6,7};
    printf("%d \n",find_middle(n, 6));
}