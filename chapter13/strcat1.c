/*
 * @Author: wolf-li
 * @Date: 2024-06-04 17:35:36
 * @LastEditTime: 2024-06-04 17:42:40
 * @LastEditors: wolf-li
 * @Description: 
 * @FilePath: /c_code/c_morden_desgin/chapter13/strcat1.c
 * talk is cheep show me your code.
 */
#include<string.h>
#include<stdio.h>

int main(){
    char *str;
    char str1[20] = "😈";  // str1 数组长度需要大于 str2
    char str2[] = "🤟";
    str = strcat(str1,str2);
    printf("str: %s\n",str);
    printf("str1: %s\n",str1);
}