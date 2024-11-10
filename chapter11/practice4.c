#include<stdio.h>

void swap(int *num1, int *num2){
    int tmp = *num1;
    *num1 = *num2;
    *num2 = tmp;
}

int main(){
    int i = 3, j = 4;
    printf("i %d, j%d\n", i, j);
    swap(&i,&j);
    printf("swap i %d, j%d\n", i, j);
}