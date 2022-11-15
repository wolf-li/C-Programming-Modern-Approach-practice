/*
 date: 2022-11-15
 auth: wolf-li

 platform: centos7
 gcc command:
 gcc -o <Destination file name> <file.name>.c

 result:
$ ./main
Enter a date (mm/dd/yyyy):1/2/34
Your entered the date 00340102

 doubt:
 Using scanf with short, only the last var get the input.

*/



#include<stdio.h>
main() {
        int m, d, y;
        printf("Enter a date (mm/dd/yyyy):");
        scanf("%d/%d/%d", &m, &d, &y);
        printf("Your entered the date %.4d%.2d%.2d\n", y, m, d);
        return 0;
}