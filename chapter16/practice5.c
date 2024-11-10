#include<stdio.h>

struct date{
    int month;
    int day;
    int year;
};

int monthday[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

int leep_yea(int year){
    if (year % 4)
        return 0;
    return 1;
}
int day_of_year(struct date d);
int compare_dates(struct date d1, struct date d2);

int main(){
    struct date dd1 = {4,3,2021};
    struct date dd2 = {4,5,2021};
    struct date dd3 = {4,1,2021};

    printf("compare d1 d2 %d\n",compare_dates(dd1, dd2));
    printf("compare d1 d3 %d\n",compare_dates(dd1, dd3));
    printf("dd1 day of year: %d\n", day_of_year(dd1));
    printf("dd2 day of year: %d\n", day_of_year(dd2));
}

int day_of_year(struct date d){
    if(leep_yea(d.year)){
        monthday[1] = 29;
    }
    int res = 0;
    int i;
    for( i = 0; i < d.month - 1 ; i++){
        res += monthday[i];
    }
    res += d.day;
    return res;
}

int compare_dates(struct date d1, struct date d2){
    if (d1.year > d2.year){
        return 1;
    }else if(d1.year == d2.year){
        if (day_of_year(d1) > day_of_year(d2)){
            return 1;
        }else if(day_of_year(d1) == day_of_year(d2)){
            return 0;
        }else{
            return -1;
        }
    }else{
        return -1;
    }
}
