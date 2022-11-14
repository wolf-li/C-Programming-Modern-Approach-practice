/*
 date: 2022-11-13
 auth: wolf-li

 platform: centos7
 gcc command:
 gcc -o <Destination file name> <file.name>.c

 result:
$ ./main
Enter amount of loan:20000
Enter interest rate:6
Enter monthly payment:386.66
Balance remaining after first payment: 19713.34
Balance remaining after second payment: 19425.25
Balance remaining after third payment: 19135.71

*/

#include<stdio.h>

main(){
        float loan, rate, payment;
        printf("Enter amount of loan:");
        scanf("%f",&loan);
        printf("Enter interest rate:");
        scanf("%f",&rate);
        printf("Enter monthly payment:");
        scanf("%f",&payment);

        double tmp;
        tmp = (loan - payment) + loan * (( rate * 0.01 ) / 12 );
        printf("Balance remaining after first payment: %.2f\n", tmp);
        tmp = (tmp - payment) + tmp * (( rate * 0.01 ) / 12 );
        printf("Balance remaining after second payment: %.2f\n", tmp);
        tmp = (tmp - payment) + tmp * (( rate * 0.01 ) / 12 );
        printf("Balance remaining after third payment: %.2f\n", tmp);
}

