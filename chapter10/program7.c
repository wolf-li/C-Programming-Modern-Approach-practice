#include<stdio.h>

#define MAX_DIGITS 10

char digital[MAX_DIGITS][4];

char s_chars[7] = {'_','|','|','_','|','|','_'};
const int segment[7][2]={{0,1},{1,2},{2,2},{2,1},{2,0},{1,0},{1,1}};
int segments[][7] = {{1,1,1,1,1,1,0},\
                    {0,1,1,0,0,0,0},\
                    {1,1,0,1,1,0,1},\
                    {1,1,1,1,0,0,1},\
                    {0,1,1,0,0,1,1},\
                    {1,0,1,1,0,1,1},\
                    {1,0,1,1,1,1,1},\
                    {1,1,1,0,0,0,0},\
                    {1,1,1,1,1,1,1},\
                    {1,1,1,1,0,1,1}};

void clear_digits_array(void){
    for (int index = 0; index < 10 ; index++)
    {
        digital[0+index*3][0] = ' ';
        digital[0+index*3][2] = ' ';
        digital[0+index*3][3] = ' ';
        digital[1+index*3][3] = ' ';
        digital[2+index*3][3] = ' ';
    }
}

void print_digits_array(void){
    for (int i = 0; i < 3; i++)
    {
        int row = i;
        for (int j = 0; j < MAX_DIGITS; j++)
        {
            for (int z = 0; z < 4; z++)
            {
                printf("%c",digital[row][z]);
            }
            row+=3;
        }
        printf("\n");
    }
}

void process_digit(int digit, int position){
    int z = -1;
    for (int j = 0; j < 7; j++){
        if (segments[digit][j] && z<8){
            digital[segment[z+1][0]+ position*3][segment[z+1][1]] = s_chars[z+1];
        }else{
            digital[segment[z+1][0]+ position*3][segment[z+1][1]] = ' ';
        }
        z++;
    }
}

int main(){
    printf("Enter a number:");
    char input_n[10];
    int input_count = 0;
    char input;
    do
    {
        input = getchar();
        if ( input > 47 && input < 57)
        {
            input_n[input_count]=input;
        }
        input_count++;
    } while (input_count<10 && input != '\n');
    
    
    for(int i =0; i < input_count-1;i++){
        process_digit(input_n[i]-48,i);
    }
    clear_digits_array();
    print_digits_array();
}