#include<word.h>
#include<line.h>
#include<string.h>

#define MAX_WORD_LINE 20

int main(){
    char word[MAX_WORD_LINE+2];
    int word_len;

    clear_line();
    flush_line();

    while (1)
    {
        read_word(word, MAX_WORD_LINE+1);
        word_len = strlen(word);
        if(word_len == 0){
            flush_line();
            return 0;
        }
        if(word_len > MAX_WORD_LINE){
            word[MAX_WORD_LINE] = '*';
        }
        if (word_len+1 > space_remaining())
        {
            write_line();
            clear_line();
        }
        add_word();
    }
    
    return 0;
}
