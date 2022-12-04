/*
@File    :   5_9.c
@Time    :   2022/12/03 22:00:49
@Author  :   wolf-li 
@Version :   1.0
*/

#include<stdio.h>
int main() {
    int firstM, firstD, firstY, secondM, secondD, secondY;
    printf("Enter first date(mm/dd/yy):");
    scanf("%d/%d/%d", &firstM, &firstD, &firstY);
    printf("Enter second date(mm/dd/yy):");
    scanf("%d/%d/%d", &secondM, &secondD, &secondY);
    if ( firstY > secondY )
        printf("%d/%d/%d is earlier than %d/%d/%d\n", secondM, secondD, secondY, firstM, firstD, firstY);
    else if ( firstM > secondM )
        printf("%d/%d/%d is earlier than %d/%d/%d\n", secondM, secondD, secondY, firstM, firstD, firstY);
    else if ( firstD > secondD )
        printf("%d/%d/%d is earlier than %d/%d/%d\n", secondM, secondD, secondY, firstM, firstD, firstY);
    else
        printf("%d/%d/%d is earlier than %d/%d/%d\n", firstM, firstD, firstY, secondM, secondD, secondY);
    return 0;
}