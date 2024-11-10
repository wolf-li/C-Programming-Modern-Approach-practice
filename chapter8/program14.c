#include<stdio.h>

void printWord(int left, int right, char s[]){
    for (int i = left; i <= right; i++){
        printf("%c",s[i]);
    }
}

int main(){
    char word[100];
    char ch;
    int i = 0, left, right;
    printf("Enter a sentence:");
    do 
    {
        ch = getchar();
        word[i] = ch ;
        i++;
    }while (( i < 100 && ch != '?' && ch != '.' && ch!= '!'));

    printf("Reversal of sentence:%c",word[i-1]);
    for (left = i-2, right = left; left >= 0; left--){
        if (word[left] != ' ' && left != 0){
            continue;
        }else 
        {
            if (left != 0)
                printWord(left+1, right,word);
            else
                printWord(left,right,word);
            right = left-1;
        }
        printf(" ");
    }
    printf("\n");
}
