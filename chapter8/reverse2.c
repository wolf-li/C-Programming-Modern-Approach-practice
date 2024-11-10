#include<stdio.h>

int main(){
    int i, n;
    printf("How many numbers do you want to reverse?");
    scanf("%d",&n);
    int array[n];

    printf("Enter %d numbers:", n);

    for (int i = 0; i < n; i++){
        scanf("%d",&array[i]);
    }
    printf("In reverse order:");
    for (int i = n-1; i >= 0; i--){
        printf("%d ",array[i]);
    }
    return 0;
}