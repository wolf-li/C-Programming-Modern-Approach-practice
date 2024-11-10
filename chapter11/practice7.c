#include<stdio.h>

int monthday[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

int leep_yea(int year){
    if (year % 4)
        return 0;
    return 1;
}

void split_date(int day_of_year, int year, int *month, int *day){
    if (leep_yea(year)){
        monthday[1] = 29;
    }else{
        monthday[1] = 28;
    }
    *month = 0;
    *day = 0;
    int tmp_day = 0;
    while (tmp_day < day_of_year)
    {
        tmp_day += monthday[*month];
        *month+=1;
    }
    *day = day_of_year - tmp_day + monthday[*month-1];
}

int main(){
    int year = 2024, date = 64, month, day;
    split_date(date, year, &month, &day);
    printf("%d年%d月%d日\n", year, month, day);
    return 0;
}