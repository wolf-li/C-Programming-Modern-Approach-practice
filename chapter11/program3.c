#include<stdio.h>

void largest_comman_divisorgcd(int *num1, int *num2);

int main(){
    int denominator, numerator;
    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);
    largest_comman_divisorgcd(&numerator, &denominator);
    printf("In lowest terms: %d/%d\n",numerator, denominator);
    return 0;
}

void largest_comman_divisorgcd(int *num1, int *num2){
    int tmp1 = *num1, tmp2 = *num2;
    if(tmp1 > tmp2){
        tmp1 += tmp2;
        tmp2 = tmp1 - tmp2;
        tmp1 -= tmp2;
    }
    if (tmp2 % tmp1){
        int tmp3 = tmp1 - 1;
        while (tmp2%tmp3 != 0 && tmp1%tmp3 != 0)
        {
            tmp3--;
        }
        *num1 = *num1 / tmp3;
        *num2 = *num2 / tmp3;
    }else{
        *num2 = *num2 / *num1;
        *num1 = 1;
    }
}
