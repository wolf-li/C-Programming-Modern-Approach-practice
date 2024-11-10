/*
 * @Author: wolf-li
 * @Date: 2024-06-24 22:02:46
 * @LastEditTime: 2024-06-24 22:07:07
 * @LastEditors: wolf-li
 * @Description: 
 * @FilePath: /c_code/c_morden_desgin/chapter22/canopen.c
 * talk is cheep show me your code.
 */
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    FILE *fp;

    if(argc != 2){
        printf("usage: %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if((fp = fopen(argv[1], "r")) == NULL){
        printf("%s can't be open\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    
    printf("%s cna be opened\n", argv[1]);
    fclose(fp);
    return 0;
}