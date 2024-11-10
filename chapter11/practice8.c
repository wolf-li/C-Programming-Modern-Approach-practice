// python3 -c "import random; l = random.sample(range(1,400),10);print(l); l.sort();print('max: ',l[-1])"
#include<stdio.h>

int *find_largest(int a[], int n);

int main(){
    int arr[] = {155, 164, 65, 45, 54, 107, 101, 333, 345, 150};
    int length = sizeof(arr)/sizeof(arr[0]);
    printf("max: %d\n", *find_largest(arr, length));
}

int *find_largest(int a[], int n){
    int *p = &a[0];
    for(int i = 1; i < n; i++){
        if(*p < a[i]){
            p = &a[i];
        }
    }
    return p;
}
