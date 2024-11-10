#include<stdio.h>
#include<stdbool.h>

bool has_zero(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        if (a[i] == 0)
            return true;
    return false;
} 

int main(){
    int a1[] = {104, 331, -62, -114, 12, 200, 124};
    int a2[] = {24, 83, 320, 109, 43, -92, 3, 264, 0, 112};
    printf("a1 status: %d\n", has_zero(a1,7));
    printf("a2 status: %d\n", has_zero(a2,10));
}