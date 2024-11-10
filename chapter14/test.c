/*
 * @Author: wolf-li
 * @Date: 2024-06-06 22:17:30
 * @LastEditTime: 2024-06-08 16:27:51
 * @LastEditors: wolf-li
 * @Description: 
 * @FilePath: /c_code/c_morden_desgin/chapter14/test.c
 * talk is cheep show me your code.
 */
// #include<stdio.h>
// #include<string.h>

// #define len(str) ((int) strlen(str) + 1)

// int main(){
//     char s[]= "your are beautiful.";
//     printf("s length: %d\n", len(s));
// }

int main(){
    #ifdef __unix__
        puts("Unix or complicate OS.");
    #endif
    #ifdef __linux__
        puts("linux or complicate OS.");
    #endif
    #ifdef __win32__
        puts("win 32 or complicate OS.");
    #endif
    
    return 0;
}