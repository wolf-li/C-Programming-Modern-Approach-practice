// 凯撒密码
// 每个字母用字母表中固定距离之后的那个字母替代

#include<stdio.h>

const char upper_letter[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
const char lower_letter[26]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
char word[100];

int input(){
    char ch;
    int i = 0;
    while ((ch = getchar())!='\n')
    {
        word[i]=ch;
        i++;
    }
    return i;
}
// describe:
//    Enter message to be encrypted: Go ahead, make my day.
//    Enter shift amount (1-25): 3
//    Encrypted message: Jr dkhdg, pdnh pb gdb. 
void encrypt(){
    printf("Enter message to be encrypted:");
    int length = input();
    printf("Enter shift amount (1-25):");
    int sub;
    scanf("%d",&sub);
    printf("Encrypted message:");
    int i=0;
    while (i < length)
    {
        if (word[i] < 124 && word[i] > 96)
            // printf("%c",lower_letter[word[i]-97+sub]);
            printf("%c",(char)word[i]+sub);
        else if (word[i] < 91 && word[i] > 65)
            printf("%c",upper_letter[word[i]-65+sub]);
        else
            printf("%c",word[i]);
        i++;
    }
    printf("\n");
}

// describe:
//    Enter message to be encrypted: Jr dkhdg, pdnh pb gdb.
//    Enter shift amount (1-25): 23
//    Encrypted message: Go ahead, make my day.
void decrpy(){
    printf("Enter message to be encrypted: Jr dkhdg, pdnh pb gdb.");
    printf("Enter shift amount (1-25):");
    printf("Encrypted message: Go ahead, make my day.");
}

int main(){
    encrypt();
}