/*
 * @Author: wolf-li
 * @Date: 2024-06-04 22:47:00
 * @LastEditTime: 2024-06-04 23:55:04
 * @LastEditors: wolf-li
 * @Description: 
 * @FilePath: /c_code/c_morden_desgin/chapter13/practice6.c
 * talk is cheep show me your code.
 */
#include<stdio.h>
#include<string.h>

void censor(char ch[], const char target[], char replace[]);
char *_strcut(char ch[], int length, char return_char[]);
void replace_str(char *ch,char ch1[]);

int main(){
    char str[]= "who are you? It's your food. zool fo fall boy fol ffoot";
    char target[] = "foo";
    char replace[] = "xxx";

    censor(str, target, replace);
    printf("replace str are: %s", str);
    
    return 0;
}

void censor(char *ch, const char target[], char replace[]){
    char p[strlen(target)];
    while (*ch)
    {   
        if(strcmp(target, _strcut(ch, strlen(target), p))==0){
            replace_str(ch, replace);
        }   
        ch++;
    }
    
}

void replace_str(char *ch,char ch1[]){
    while (*ch1)
    {
        *ch = *ch1;
        ch++;
        ch1++;
    }
}

char *_strcut(char ch[], int length, char return_str[]){
    char *p = return_str;
    char *q = ch;
    while (length){
        *p = *q;
        p++;
        q++;
        length--;
    }
    return return_str;
}