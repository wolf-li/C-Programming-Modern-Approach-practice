/*
 * @Author: wolf-li
 * @Date: 2024-06-24 22:11:26
 * @LastEditTime: 2024-06-24 22:15:58
 * @LastEditors: wolf-li
 * @Description: 
 * @FilePath: /c_code/c_morden_desgin/chapter22/fcopy.c
 * talk is cheep show me your code.
 */
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    FILE *source_fp, *dest_fp;
    int ch;

    if(argc != 3){
        printf("usage: %s source dest\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if((source_fp = fopen(argv[1], "rb")) == NULL){
        fprintf(stderr, "can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    if((dest_fp = fopen(argv[2], "wb")) == NULL){
        fprintf(stderr, "can't open %s\n",argv[2]);
        exit(EXIT_FAILURE);
    }

    while ((ch = getc(source_fp)) != EOF)
    {
        putc(ch, dest_fp);
    }
    
    fclose(source_fp);
    fclose(dest_fp);
    return 0;
}