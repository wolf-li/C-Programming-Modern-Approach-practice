/*
 date: 2022-11-13
 auth: wolf-li

 platform: centos7
 gcc command:
 gcc -o <Destination file name> <file.name>.c

 result:
 $
 ball volume is: 4187
 $

*/

#include <stdio.h>
#define PI 3.14
int main(){
        float r = 10;
        printf("ball volume is: %2.f\n", 4.0/3.0 * PI * r * r * r);
}

