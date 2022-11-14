/*
 date: 2022-11-13
 auth: wolf-li

 platform: centos7
 gcc command: 
 gcc -o <Destination file name> 2_3.c

 result:
$ ./2_3
       *
      *
     *
*   *
 * *
  *
$

*/

#include<stdio.h>
int main(){
        char star = '*';
        printf("%8c\n",star);
        printf("%7c\n",star);
        printf("%6c\n",star);
        printf("%c%4c\n",star,star);
        printf("%2c%2c\n",star,star);
        printf("%3c\n",star);
}


