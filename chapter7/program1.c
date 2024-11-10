// prints a table of seqares using a for statement

#include<stdio.h>
int main(void){
    int i;
    short n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%hd",&n);
    for (i = 1; i <= n; i++){
        // 强制类型转换语法格式： (类型) 表达式
        printf("%10d%10ld\n",i,(long)i*i);
    }
    return 0;
}