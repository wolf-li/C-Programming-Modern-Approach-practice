#include<stdio.h>
#include<stdlib.h>

int *create_array(int n, int initial_value);

int main(){
    int *arr = create_array(7, 5);
    printf("sizeof %d \n", arr[0]);
    free(arr);
    arr = create_array(3, 10);
    printf("sizeof %d \n", arr[0]);
    return 0;
}

int *create_array(int n, int initial_value){
    int *p = malloc(n);
    if(p == NULL){
        printf("Error can't create free.");
        exit(1);
    }

    for(int i = 0; i < n; i++){
        p[i] = initial_value;
        printf("%d %p\n",*p, &p[i]);
    }
    return p;
}