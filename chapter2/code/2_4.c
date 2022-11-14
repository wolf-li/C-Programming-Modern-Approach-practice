/*
 date: 2022-11-13
 auth: wolf-li

 platform: centos7
 gcc command:
 gcc -o <Destination file name> <file.name>.c

 result:
$ ./2_4
Enter an amount:100
With tax added:105.00
$

*/

#include <stdio.h>
int main(){
        float inputData;
        printf("Enter an amount:");
        scanf("%f",&inputData);
        printf("With tax added:%.2f\n", inputData * 1.05);
}

