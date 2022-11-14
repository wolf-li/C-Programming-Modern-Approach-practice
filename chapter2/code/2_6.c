/*
 date: 2022-11-13
 auth: wolf-li

 platform: centos7
 gcc command:
 gcc -o <Destination file name> <file.name>.c

 result:

*/

#include <stdio.h>
int main(){
        float x;
        printf("Enter an amount:");
        scanf("%f",&x);
        printf("3x^5 + 2x^4 - 5x^3 -x^2 + 7x - 6 = %.2f\n", ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x -6 );
}