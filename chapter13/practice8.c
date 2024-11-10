/*
 * @Author: wolf-li
 * @Date: 2024-06-05 09:05:26
 * @LastEditTime: 2024-06-05 09:09:47
 * @LastEditors: wolf-li
 * @Description: 
 * @FilePath: /c_code/c_morden_desgin/chapter13/practice8.c
 * talk is cheep show me your code.
 */
#include<stdio.h>
#include<string.h>

int main(){
    // 字符数组 与 *str 是不一样的
    char str[]="fuck goverment";
    printf("str: %s\n",str);
    strcpy(str, "tire-bouchon");
    printf("str: %s\n",str);
    strcpy(&str[4], "d-or-wi");
    printf("str: %s\n",str);
    strcat(str, "red?*");
    printf("str: %s\n",str);
}