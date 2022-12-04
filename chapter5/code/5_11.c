/*
@File    :   5_11.c
@Time    :   2022/12/03 22:43:27
@Author  :   wolf-li 
@Version :   1.0
*/

#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter a two-digital number:");
    scanf("%1d%1d",&num1,&num2);
    if ( num1 < 2 ){
        switch(num2){
            case 0:
                printf("Your Enter the number ten\n");
                break;
            case 1:
                printf("Your Enter the number eleven\n");
                break;
            case 2:
                printf("Your Enter the number twelve\n");
                break;
            case 3:
                printf("Your Enter the number thirteen\n");
                break;
            case 4:
                printf("Your Enter the number forteen\n");
                break;
            case 5:
                printf("Your Enter the number fifteen\n");
                break;
            case 6:
                printf("Your Enter the number sixteen\n");
                break;
            case 7:
                printf("Your Enter the number seventeen\n");
                break;
            case 8:
                printf("Your Enter the number eighteen\n");
                break;
            case 9:
                printf("Your Enter the number nineteen\n");
                break;
        };
    }else{
        switch(num1){
            case 2:
                printf("Your Enter the number twenty-");
                break;
            case 3:
                printf("Your Enter the number thirty-");
                break;
            case 4:
                printf("Your Enter the number forty-");
                break;
            case 5:
                printf("Your Enter the number fifty-");
                break;
            case 6:
                printf("Your Enter the number sixty-");
                break;
            case 7:
                printf("Your Enter the number seventy-");
                break;
            case 8:
                printf("Your Enter the number eighty-");
                break;
            case 9:
                printf("Your Enter the number ninety-");
                break;
        };
        switch(num2){
            case 1:
                printf("one\n");
                break;
            case 2:
                printf("two\n");
                break;
            case 3:
                printf("three\n");
                break;
            case 4:
                printf("four\n");
                break;
            case 5:
                printf("five\n");
                break;
            case 6:
                printf("six\n");
                break;
            case 7:
                printf("seven\n");
                break;
            case 8:
                printf("eight\n");
                break;
            case 9:
                printf("nine\n");
                break;
        };
    }
    return 0;
}