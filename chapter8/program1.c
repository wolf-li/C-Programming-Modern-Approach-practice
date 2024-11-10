// Enter a number: 28212
// Repeated digit
#include<stdio.h>

int main(){
    int digit[10] = {0};
    printf("Enter a number:");
    char ch;
    while (( ch = getchar()) != '\n')
    {
        if (ch >= '0' && ch <= '9' ){
            digit[ch-48] += 1;
        }
    }
    printf("Repeated digit:");
    for (int i = 0; i < 10; i++){
        if (digit[i] > 1){
            printf("%d ",i);
        }
    }
    return 0;
}