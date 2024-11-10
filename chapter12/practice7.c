
#include<stdbool.h>
#include<stdio.h>

bool search(const int a[], int n, int key);

int main(){
    int n[] = {1,2,3,4,5,6};
    int length = sizeof(n)/sizeof(n[0]);
    printf("search 7: %d", search(n, length, 1));
}

bool search(const int a[], int n, int key){
    for(const int *p = a; p < a + n; p++)
        if(*p == key)
            return true;
    return false;
}