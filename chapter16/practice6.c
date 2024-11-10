// test code
// python3:
// python3 -c '''import time; localtime = time.localtime(time.time()); print("%d %d:%d:%d" %(localtime.tm_sec + localtime.tm_hour * 60 * 60 + localtime.tm_min * 60, localtime.tm_hour, localtime.tm_min, localtime.tm_sec))'''

#include<stdio.h>

struct time{
    int hours;
    int minutes;
    int seconds;
};

struct time split_time(long total_seconds);
void print_time(struct time t);

int main(){
    long int input;
    scanf("%ld", &input);
    struct time now;
    now = split_time(input);
    print_time(now);
}

struct time split_time(long total_seconds){
    struct time t1;
    t1.seconds =  total_seconds % 60;
    t1.minutes = ( total_seconds - t1.seconds ) / 60 % 60;
    t1.hours = ( total_seconds - t1.seconds - t1.minutes * 60 ) / 60 / 60;
    return t1;
}

void print_time(struct time t){
    printf("%d:%d:%d\n",t.hours, t.minutes, t.seconds);
}
