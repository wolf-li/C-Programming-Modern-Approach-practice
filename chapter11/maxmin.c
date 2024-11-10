// 找出数组中的最大元素和最小元素
#include<stdio.h>

#define ARRAYINDEX 10

void max_min(int arr[], int n, int *max, int *min);

int main(){
    int a[ARRAYINDEX], i, big, small;

    printf("Enter 10 numbers:");
    for(int i = 0; i < ARRAYINDEX; i++)
        scanf("%d", &a[i]);
    
    max_min(a, ARRAYINDEX, &big, &small);
    printf("Largest: %d\n", big);
    printf("Smallest: %d\n", small);
}

void max_min(int arr[], int n, int *max, int *min){
    *max = *min = arr[0];
    for(int i = 1; i < n; i++){
        if (*max < arr[i]){
            *max = arr[i];
        }else if (*min > arr[i])
        {
            *min = arr[i];
        } 
    }
}
