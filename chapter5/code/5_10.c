/*
@File    :   5_10.c
@Time    :   2022/12/03 22:37:26
@Author  :   wolf-li 
@Version :   1.0
*/

#include<stdio.h>
int main() {
    int point;
    printf("Enter numerical grade:");
    scanf("%d",&point);
    switch (point){
        case 0 ... 59:
            printf("Letter grade: F\n");
            break;
        case 60 ... 69:
            printf("Letter grade: D\n");
            break;
        case 70 ... 79:
            printf("Letter grade: C\n");
            break;
        case 80 ... 89:
            printf("Letter grade: B\n");
            break;
        case 90 ... 100:
            printf("Letter grade: A\n");
            break;
        default:
            printf("Wrong input\n");
    }
    return 0;
}