#include<stdio.h>
#include<stdbool.h>

#define LENGTH 50

char stack[LENGTH]={';'};

char pop(char ch[], int length){
    char tmp;
    for (int i = 0; i < length; i++){
        if(ch[i] == ';'){
            tmp = ch[i];
            ch[i-1] = ';';
            break;
        }
    }
    return tmp;
}

void push(char ch[], int length, char value){
    for(int i = 0; i < length; i++){
        if(ch[i] == ';'){
            if(i < length){
                ch[i] = value;
                ch[i+1] = ';';
            }else{
                printf("overflow");
            }
            break;
        }
    }
}

bool is_empty(char ch[], int length){
    if (ch[0] == ';')
        return true;
    return false;
}


int main(){
    char c;
    int i = 0;
    printf("Enter parenteses and/or braces:");
    do {
        switch (c = getchar())
        {
        case '(': case '{':
            push(stack, LENGTH, c);
            break;
        case '}':
            if(is_empty(stack, LENGTH)){
                printf("stackoverflow");
                return 0;
            }else{
                pop(stack, LENGTH);
            }
            break;
        case ')':
            if(is_empty(stack, LENGTH)){
                printf("stackoverflow");
                return 0;
            }else{
                pop(stack, LENGTH);
            }
            break;
        default:
            break;
        }
        i++;
    }while (c != '\n' &&  i < LENGTH );

    if (is_empty(stack, LENGTH))
    {
        printf("Parenteses/braces are nested properly\n");
    }else{
        printf("Parenteses/braces are not nested properly\n");
    }
}