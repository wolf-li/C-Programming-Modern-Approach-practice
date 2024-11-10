#include<stdio.h>
#include<time.h>

void split_time(long total_sec, int *hr, int *min, int * sec);

int main(){
    long int input_sec;
    int hr, min, sec;
    printf("split time:");
    scanf("%ld",&input_sec);
    split_time(input_sec, &hr, &min, &sec);
    printf("time: %d:%d:%d\n",hr, min, sec);
}

// 数学逻辑没有理解
void split_time(long total_sec, int *hr, int *min, int * sec){
    *sec = total_sec % 60;
    total_sec = total_sec - *sec;
    *min = (total_sec / 60 ) % 60;
    *hr = (total_sec / 60) /60;
}