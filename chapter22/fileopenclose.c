/*
 * @Author: wolf-li
 * @Date: 2024-06-24 22:02:46
 * @LastEditTime: 2024-06-24 22:16:53
 * @LastEditors: wolf-li
 * @Description: 
 * @FilePath: /c_code/c_morden_desgin/chapter22/fileopenclose.c
 * talk is cheep show me your code.
 */
#include<stdio.h>
#include<stdlib.h>
#define FILE_NAME "test"

int main(){
    FILE *fp;

    if((fp = fopen(FILE_NAME, "r")) == NULL){
        printf("%s can't be open\n", FILE_NAME);
        exit(EXIT_FAILURE);
    }
    
    printf("%s cna be opened\n", FILE_NAME);
    fclose(fp);
    return 0;
}