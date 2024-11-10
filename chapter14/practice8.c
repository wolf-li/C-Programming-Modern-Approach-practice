/*
 * @Author: wolf-li
 * @Date: 2024-06-07 23:32:04
 * @LastEditTime: 2024-06-08 14:37:54
 * @LastEditors: wolf-li
 * @Description: 
 * @FilePath: /c_code/c_morden_desgin/chapter14/practice8.c
 * talk is cheep show me your code.
 */

#include<stdio.h>

// __LINE__ 当前宏所在行的行号
// __FILE__ 当前文件的名字
#define STRINGSIZE(x) #x  // x 结果串化
#define EXPAND_TO_STRING(x) STRINGSIZE(x)

#define LINE_FILE "Line " EXPAND_TO_STRING(__LINE__) " file name " __FILE__

int main(){
    const char *str = LINE_FILE;
    printf("%s\n", str);
    printf("Time now: %s\n",__TIME__);
    printf("support c version: %ld", __STDC_VERSION__);
}