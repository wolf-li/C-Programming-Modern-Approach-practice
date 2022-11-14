/*
 date: 2022-11-13
 auth: wolf-li

 platform: centos7
 gcc command:
 gcc -o <Destination file name> <file.name>.c

 result:
$./2_7
Enther a dollar amount:30
$20 bills: 1
$10 bills: 1
 $5 bills: 0
 $1 bills: 0

*/

#include<stdio.h>
int main(){
        int d, num20 , num10, num5 ,num1;
        printf("Enther a dollar amount:");
        scanf("%d",&d);
        num20 = d / 20;
        num10 = (d - num20 * 20) / 10;
        num5 = (d - num20 * 20 - num10 * 10) / 5;
        num1 = (d - num20 * 20 - num10 * 10 - num5 * 5);
        printf("$20 bills: %d\n", num20);
        printf("$10 bills: %d\n", num10);
        printf(" $5 bills: %d\n", num5);
        printf(" $1 bills: %d\n", num1);
}