/*
 date: 2022-11-13
 auth: wolf-li

 platform: centos7
 gcc command:
 gcc -o <Destination file name> <file.name>.c

 result:

*/

#include<stdio.h>
int main(){
        char star = '*';
        printf("       %c\n",star);
        printf("      %c\n",star);
        printf("     %c\n",star);
        printf("%c   %c\n",star,star);
        printf(" %c %c\n",star,star);
        printf("  %c\n",star);
}