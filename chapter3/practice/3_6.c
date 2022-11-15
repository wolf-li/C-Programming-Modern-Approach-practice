/*
 date: 2022-11-13
 auth: wolf-li

 platform: centos7
 gcc command:
 gcc -o <Destination file name> <file.name>.c

 result:

*/

//addfrac.c

#include<stdio.h>
main() {
        int num1, denom1, num2, denom2, result_num, result_denom;
        printf("Enter first fraction: ");
        scanf("%d/%d",&num1, &denom1);
        printf("Enter second fraction: ");
        scanf("%d/%d",&num2, &denom2);
        result_num = num1 * denom2 + num2 * denom1;
        result_denom = denom1 * denom2;
        printf("The sum is %d/%d\n", result_num , result_denom);
        return 0;
}


#include<stdio.h>
main() {
        int num1, denom1, num2, denom2, result_num, result_denom;
        printf("Enter first fraction: ");
        scanf("%d / %d",&num1, &denom1);
        printf("Enter second fraction: ");
        scanf("%d / %d",&num2, &denom2);
        result_num = num1 * denom2 + num2 * denom1;
        result_denom = denom1 * denom2;
        printf("The sum is %d/%d\n", result_num , result_denom);
        return 0;
}