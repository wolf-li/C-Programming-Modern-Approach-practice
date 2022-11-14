/*
 date: 2022-11-13
 auth: wolf-li

 platform: centos7
 gcc command:
 gcc -o <Destination file name> <file.name>.c

 result:
$ ./2_3
input the r:10
ball volume is: 4187
$
*/

#include <stdio.h>
#define PI 3.14
int main(){
        float r ;
        printf("input the r:");
        scanf("%f",&r);
        printf("ball volume is: %.2f\n", 4.0/3.0 * PI * r * r * r);
}