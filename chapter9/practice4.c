/*
 * @Author: wolf-li
 * @Date: 2024-05-29 16:47:32
 * @LastEditTime: 2024-06-02 00:40:51
 * @LastEditors: wolf-li
 * @Description: 
 * @FilePath: /c_code/c_morden_desgin/chapter9/practice4.c
 * talk is cheep show me your code.
 */
#include<stdio.h>
#include<time.h>

const int monthday[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

int leep_yea(int year){
    if (year % 4)
        return 0;
    return 1;
}

int day_of_year(int month, int day, int year){
    int res = 0;
    if (leep_yea(year)){
        for (int i = 0; i < month - 1; i++){
            res += monthday[i];
        }
        res += day;
        if (month > 2){
            res++;
        }
    }else{
        for (int i = 0; i < month - 1; i++){
            res += monthday[i];
        }
        res += day;
    }
    return res;
}

int main(){
    time_t t;
    struct tm *st;
    time(&t);
    st = localtime(&t);
    int year = st->tm_year + 1900;
    int month = st->tm_mon + 1;
    int day = st->tm_mday ;
    printf("today: %d年%d月%d日\n", year, month, day);
    printf("day of year: %d\n",day_of_year(month,day,year));
}