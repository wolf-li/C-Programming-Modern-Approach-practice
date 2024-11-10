#include<stdio.h>

int main(){
    int letter_count[26];
    char ch = 'b';
    letter_count[ch - 'a'] = 1;
    for (int i = 0; i < 26; i++){
        printf("%d ", letter_count[i]);
    }
    return 0;
}
