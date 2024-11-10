#include<stdio.h>
int main(){
    char ch;
    while ((ch = getchar()) != '\n' )
    {
        switch ((int)ch)
        {
        case 65:
        case 67:
            printf("2");
            break;
        case 70:
            printf("3");
            break;
        case 73:
            printf("4");
            break;
        case 76:
            printf("5");
            break;
        case 79:
            printf("6");
            break;
        case 82:
            printf("7");
            break;
        case 85:
            printf("8");
            break;
        case 88:
            printf("9");
            break;
        default:
            printf("%c",ch);
            break;
        }
    }
    printf("\n");
    
    return 0;
}