// for create a random list use:
//python3 -c "import random; l = random.sample(range(1,400),10);print(l); l.sort();print('sort: ',l)"
#include<stdio.h>

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(){
    int n[] = {247, 158, 86, 306, 89, 392, 336, 353, 357, 40};
    int first, second;
    int length = sizeof(n)/sizeof(n[0]);
    find_two_largest(n, length, &first, &second);
    printf("largest: %d\nsecond: %d\n", first, second);
}

void find_two_largest(int a[], int n, int *largest, int *second_largest){
    if(a[1] > a[0]){
        *largest = a[1];
        *second_largest = a[0];
    }else{
        *largest = a[0];
        *second_largest = a[1];
    }
    for(int i = 2; i < n-1; i++){
        if(*largest < a[i]){
            *second_largest = *largest;
            *largest = a[i];
        }else if (*second_largest < a[i])
        {
            *second_largest = a[i];
        }  
    }
}