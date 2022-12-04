/*
@File    :   5_8.c
@Time    :   2022/12/03 15:58:45
@Author  :   wolf-li 
@Version :   1.0
*/

#include<stdio.h>
int main() {
    int hour, min;
    printf("Enter a 24-hour time:");
    scanf("%d:%d",&hour,&min);
    if ( hour < 8 )
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
    else if ( ( hour < 9 ) || (hour == 9 && min < 43))
        printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
    else if ( ( hour < 11 ) || ( hour == 11 && min < 19))
        printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
    else if ( ( hour < 12 ) || ( hour == 12 && min < 47))
        printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
    else if ( hour < 2 )
        printf("Closest departure time is 2:00 p.m., arriving at 3:00 p.m.\n");
    else if ( ( hour < 3 ) || ( hour ==3 && min < 45 ) )
        printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
    else if ( hour < 7 )
        printf("Closest departure time is 7:00 p.m., arriving at 9::20 p.m.\n");
    else if ( ( hour < 9 ) || ( hour == 9 && min < 45 ) )
        printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");
    return 0;
}
