#include<stdio.h>
#include<string.h>

int count_space(const char ch[]);

int main(){
    // char ch[10] = {'1','2'};
    // for(char *p = ch; p < ch + 10; p++){
    //     // puts(p);
    //     printf("%c\n", *p);
    // }
    // return 0;

    // char ch[] = "Who are your?";
    // printf("%-4.3s",ch); // $who %
    // printf("%4.3s",ch); //  $ who%

    // const char *p;
    // int puts_output = puts(p);
    // if(puts_output == EOF)
    // printf("puts res: %d\n", puts_output);

    // char ch[10];
    // // scanf("%s",ch);
    // gets(ch);
    // printf("%s\n",ch);

    // array iter string
    char ch[] = "you are right";
    printf("ch str length: %d\n",strlen(ch));
    // printf("space count: %d", count_space(ch));
}

// int count_space(const char ch[]){
//     int count = 0;
//     for(int i = 0; ch[i] != '\0'; i++ ){
//         if (ch[i] == ' ')
//             count += 1;
//     }
//     return count;
// }

int count_space(const char s[]){
    int count = 0;
    for(; *s != '\0';s++){
        if( *s == ' '){
            count++;
        }
    }
    return count;
}