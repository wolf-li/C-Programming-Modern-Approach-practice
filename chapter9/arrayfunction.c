#include<stdio.h>
void zero(int arr[], int length){
    for (int i = 0; i < length ; i++)
        arr[i] += 2;
}

int main(){
    int a1[]={1,23,3,4,5,6,67,7,8,2};
    int a2[]={1,23,3,4,5};
    zero(a1,10);
    zero(a2,5);
    for (int i= 0; i < 10; i++)
        printf("%d ",a1[i]);
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",a2[i]);
    }
    
}