/*
 * @Author: wolf-li
 * @Date: 2024-06-05 10:12:24
 * @LastEditTime: 2024-06-05 23:01:35
 * @LastEditors: wolf-li
 * @Description: 
 * @FilePath: /c_code/c_morden_desgin/chapter13/practice12.c
 * talk is cheep show me your code.
 */
#include<stdio.h>
#include<string.h>

// extension NULL store '\0'
void get_extension(const char *file_name, char *extension);
void function_case(char options, char *arg);
void build_index_url(const char *domain, char *index_url);
void remove_filename(char *url);

int main(int argc, char *argv[]){
    if(argc == 3){
        if(argv[1][0] == '-')
            function_case(argv[1][1],argv[2]);
    }else{
        printf("argc wrong ");
    }
}

void function_case(char options, char *arg){
    char substr[20];
    char str[100];
    switch (options)
    {
    case 'f':    
        get_extension(arg, substr);
        printf("suffix: \n%s\n", substr);
        break;
    case 'u':
        build_index_url(arg, str);
        printf("index url: \n%s\n", str);
        break;
    case 'r':
        remove_filename(arg);
        // printf("url: \n%s\n", arg);
        break;
    default:
        printf("Usage:\n");
        printf(" sub [-f] [-u]\n");
        break;
    }
}

void remove_filename(char *url){
    int length = strlen(url);
    char *p;
    for(p = &url[0] + length - 1; *p != '/' ; p--){
        ;
    }
    *p='\0';
    printf("url: \n%s\n",url);
}

void build_index_url(const char *domain, char *index_url){
    char perfix[] = "http://www.";
    strcpy(index_url, perfix);
    strcat(index_url, domain);
    char suffix[] = "/index.html";
    strcat(index_url, suffix);
}

void get_extension(const char *file_name, char *extension){
    const char *p = file_name;
    while (*p != '.' && *p != '\0')
    {
        p++;
    }

    if (*p++ != '\0')
        while (*extension++ = *p++)
        {
            ;
        }
}