#include<stdio.h>

enum week {
    MONDAY = 1,
    THERSDAY = 2,
    WENSDAY = 3,
    THRUTHDAY = 4,
    FRIDAY = 5,
    STATEDAY = 6,
    SUNDAY = 0
};

int main(){
    enum week tomrrow;
    tomrrow = 0;
    printf("%d\n",tomrrow);
}