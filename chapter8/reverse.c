// Enter 10 numbers: 34 82 49 102 7 94 23 11 50 31
// In reverse order: 31 50 11 23 94 7 102 49 82 34
#include<stdio.h>
#define N 10
int main(){
    int array[N];
    printf("Enter %d numbers:", N);
    for (int i = 0; i < N; i++){
        scanf("%d",&array[i]);
    }
    printf("In reverse order:");
    for (int i = N-1; i >= 0; i--){
        printf("%d ",array[i]);
    }
    return 0;
}