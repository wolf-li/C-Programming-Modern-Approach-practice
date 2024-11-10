// Enter a number: 28212
// Repeated digit
#include<stdbool.h> // c99 only
#include<stdio.h>

int main(){
    bool digit[10] = {false};
    printf("Enter a number:");
    char ch;
    while (( ch = getchar()) != '\n')
    {
        if (ch >= '0' && ch <= '9' ){
            digit[(int)ch-48] = true;
        }
    }
    for (int i = 0; i < 10; i++){
        if (digit[i] == true){
            printf("Repeated digit\n");
            break;
        }
    }
    return 0;
}