// 修改第 5 章的编程题 8，使其包含下列函数：
// void find_closest_flight(int desired_time,
//  int *departure_time,
//  int *arrival_time);
// 函数需查出起飞时间与 desired_time（用从午夜开始的分钟数表示）最接近的航班。该航班的起飞
// 时间和抵达时间（也都用从午夜开始的分钟数表示）将分别存储在 departure_time 和 arrival_time
// 所指向的变量中。

#include<stdio.h>

int start[]={8*60, 9*60+43, 11*60+19, 12*60+47, 14*60, 15*60+45, 19*60, 21*60+45};
int end[]={10*60+16, 11*60+52, 13*60+31, 15*60, 16*60+8, 17*60+55, 21*60+20, 23*60+58};

void find_closest_flight(int desire_time, int *departure_time, int *arrival_time);

int main(){
    printf("Enter a 24-hour time:");
    int hour, min;
    int start_time;
    int arrive_time;
    int start_hour, start_min, end_hour, end_min;
    scanf("%d:%d",&hour, & min);
    int desire_time = hour * 60 + min;
    find_closest_flight(desire_time, &start_time, &arrive_time);
    start_hour = start_time / 60;
    start_min = start_time - start_hour*60;
    end_hour = arrive_time / 60;
    end_min = arrive_time - end_hour * 60;
    printf("Closest departure time is %d:%d , arriving at %d:%d",start_hour,start_min, end_hour,end_min);
}

void find_closest_flight(int desire_time, int *departure_time, int *arrival_time){
    for(int i = 0; i < 8; i++){
        if(desire_time < start[i]){
            *departure_time = start[i];
            *arrival_time = end[i];
            break;
        }
    }
}