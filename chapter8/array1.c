#include<stdio.h>

int main(){
    int arr[] = {4, 9, 1, 8, [0] = 5, 7};
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
        printf("%d ", arr[i]);
    return 0;
}