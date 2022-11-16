/*
@File    :   4_5.c
@Time    :   2022/11/16 22:32:49
@Author  :   wolf-li 
@Version :   1.0

@result :
$ ./main 
Enter the first digits of a UPC:01380015173
Check digit: 5


*/

#include<stdio.h>
int main() {
    int d, i1, i2, i3, i4 ,i5, j1, j2, j3, j4, j5;
    printf("Enter the first digits of a UPC:");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5);
    printf("Check digit: %d\n", 9 - ((( 3*(d+ i2+ i4+ j1 + j3 + j5) + i1 + i3 + i5 + j2 +j4) - 1)%10) );
    return 0;
}
