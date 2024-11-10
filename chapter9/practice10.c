#include<stdio.h>


int max(int arr[], int length){
    int tmp;
    for(int i = 0; i < length; i++){
        for(int j = 0; j < length; j++){
            if(arr[i] < arr[j]){
                tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
            }
        }
    }
    return arr[length-1];
}

int avg(int arr[], int length){
    int res = 0;
    for(int i= 0; i< length; i++){
        res += arr[i];
    }
    return res/length;
}

int num_positive_number(int arr[], int length){
    int i = 0;
    for(; i < length; i++){
        if(arr[i]>0)
            break;
    }
    return length-i;
}

int main(){
    int arr1[] = {-96, -88, -46, -3, 106, 44, 43, -56, 45, -6, 0, 70, -27, 32, 69};
    printf("max %d\n", max(arr1,15 ));
    printf("avg %d\n", avg(arr1, sizeof(arr1)/sizeof(arr1[0])));
    printf("number positive: %d\n", num_positive_number(arr1, sizeof(arr1)/sizeof(arr1[0])));
}