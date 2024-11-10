/*
 * @Author: wolf-li
 * @Date: 2024-06-24 22:24:04
 * @LastEditTime: 2024-06-24 22:34:49
 * @LastEditors: wolf-li
 * @Description: 
 * @FilePath: /c_code/c_morden_desgin/chapter22/vic.c
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
        fclose(fp);
        fp = fopen(argv[1], "w");
    }
    
    char ch;
    while((ch = getchar()) != '\n'){
        fputc(ch, fp);
    }
    fclose(fp);
    return 0;
}