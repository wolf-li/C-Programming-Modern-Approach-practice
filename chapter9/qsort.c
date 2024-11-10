#include<stdio.h>

int split(int a[], int low, int high){
    int part_element = a[low];

    for(;;){
        while (low < high && part_element <= a[high])
        {
            high--;
        }
        if (low >= high) break;
        a[low++] = a[high];

        while (low < high && a[low] <= part_element)
        {
            low++;
        }
        if (low >= high) break;
        a[high--] = a[low];
    }

    a[high] = part_element;
    return high;
}

void quicksort(int a[], int low, int high){
    int middle;
    if (low >= high) return;
    middle = split(a, low, high);
    quicksort(a, low, middle-1);
    quicksort(a, middle+1, high);
}

int main(){
    int num[]= {23,34,12,3,4,5,33,74,11,1};
    quicksort(num, 0, 9);
    printf("Sort order:");
    for (int i =0 ; i < 10; i++){
        printf("%d ",num[i]);
    }
    printf("\n");
    return 0;
}