#include<stdio.h>

int main(){
    // double arr[] = {1,2,3,4,5,6,7};
    // double *p, *q;
    // p = &arr[3];
    // q = &arr[0];
    // p += 3;
    // printf("pointer p - q: %lf", *(q + 2) );

    // int a[10];
    // *a = 7;
    // printf("a[0]: %d", a[0]);

    // int a[] = {1,2,3,4,5,6,7,9};
    // for(int *p = &a[7]; p >= &a[0]; p--){
    //     printf("%d ",*p);
    // }

    // int a[2][2] = {{1,2},{3,4}}, *p, i = 0;
    // for (p = a[1]; p < a[1] + 2; p++){
    //     printf("%d ", *p);
    // }
    // int (*q)[2];
    // for (q = &a[0]; q < &a[2]; q++)
    //     printf("%d ", (*q)[1]);

    // int  i = 0;
    // while (i < 10)
    // {   
    //     printf("before i++ %d\n", i);
    //     printf("after i++ %d\n",i++);
    // }

    int a[3] = {1,2,3};

    int *p = &a[0];
    printf("%d", p - a); 
    
}