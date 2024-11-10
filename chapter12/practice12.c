 // python3 -c "import random; l = random.sample(range(1,400),10);print(l); l.sort();print('''max: %d  '''%(l[-1]),l[len(l)-2])"
#include<stdio.h>

void find_two_largest(const int *a, int n, int *largest, int *second_largest);

int main(){
    int n[]={141, 227, 278, 352, 63, 98, 170, 284, 60, 39};
    int f, s;
    int length = sizeof(n)/sizeof(n[0]);
    find_two_largest(n, length, &f, &s);
    printf("largest %d, second: %d\n", f,s);
}

void find_two_largest(const int *a, int n, int *largest, int *second_largest){
    if (a[0] < a[1]){
        *largest = a[1];
        *second_largest = a[0];
    }else{
        *largest = a[0];
        *second_largest = a[1];
    }
        
    for(int *p = &a[2]; p < a + n; p++){
        if(*p > *largest){
            *second_largest = *largest;
            *largest = *p;
        }else if (*p > *second_largest){
            *second_largest = *p;
        }
    }
}