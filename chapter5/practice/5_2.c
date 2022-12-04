/*
@File    :   5_2.c
@Time    :   2022/11/19 22:56:34
@Author  :   wolf-li 
@Version :   1.0

@result:
1
1
1
1
*/

#include<stdio.h>
int main() {
    int i,j,k;
    i = 10, j = 5;
    printf("%d\n", !i < j);
    i = 2, j = 1;
    printf("%d\n", !!i + !j);
    i = 5, j = 0, k = -5;
    printf("%d\n", i && j || k   );
    i = 1, j = 2, k = 3;
    printf("%d\n", i < j || k   );
    return 0;
}