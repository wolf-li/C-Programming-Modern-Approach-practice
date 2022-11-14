/*
 date: 2022-11-13
 auth: wolf-li

 platform: centos7
 gcc command:
 gcc -o 2_4 2_4.c

 result:
$ ./2_4
Dimensions: 12x10x8
Volume (cubic inches): 960
Volume (cubic inches): 6
$
*/

#include<stdio.h>
int main(){
        int height = 8, length = 12, width = 10, volume;
        volume = height * length * width;
        printf("Dimensions: %dx%dx%d\n",length, width, height);
        printf("Volume (cubic inches): %d\n", volume);
        printf("Volume (cubic inches): %d\n", (volume + 165 ) / 166);
        return 0;
}
