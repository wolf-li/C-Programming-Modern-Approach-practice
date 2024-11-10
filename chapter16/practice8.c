/*
 * @Author: wolf-li
 * @Date: 2024-06-11 15:57:50
 * @LastEditTime: 2024-06-11 21:23:07
 * @LastEditors: wolf-li
 * @Description: 
 * @FilePath: /c_code/c_morden_desgin/chapter16/practice8.c
 * talk is cheep show me your code.
 */
#include<stdio.h>

struct color{
    int red;
    int green;
    int blue;
};

int main(){
    const struct color MAGENTA = {.red = 255, 0, .blue=255};
    printf("red: %d, green %d, blue: %d\n", MAGENTA.red, MAGENTA.green, MAGENTA.blue);
    return 0;
}