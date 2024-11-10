/*
 * @Author: wolf-li
 * @Date: 2024-06-11 22:01:40
 * @LastEditTime: 2024-06-11 22:52:27
 * @LastEditors: wolf-li
 * @Description: 
 * @FilePath: /c_code/c_morden_desgin/chapter16/practice10.c
 * talk is cheep show me your code.
 */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>

struct point{
    int x;
    int y;
};

struct rectangle{
    struct point upper_left, lower_right;
};

int area(struct rectangle r);
struct point center(struct rectangle r);
void move(int x, int y, struct rectangle *r1);
bool inside_rectangle(struct point p, struct rectangle r);
void max(int *a, int *b);

int main(){
    struct rectangle r1 = {{0,-1},{1,3}};
    printf("area: %d\n", area(r1));
    struct point center_r1 = center(r1);
    printf("%d %d\n", center_r1.x, center_r1.y);
    // move(1,1,&r1);
    printf("(%d,%d) (%d,%d)\n",r1.upper_left.x, r1.upper_left.y, r1.lower_right.x, r1.lower_right.y);
    printf("area: %d\n", area(r1));
    struct point p1 = {0,1};
    printf("%d\n",inside_rectangle(p1,r1));
    return 0;
}

int area(struct rectangle r){
    return abs(r.upper_left.x - r.lower_right.x) * abs(r.upper_left.y - r.lower_right.y);
}

struct point center(struct rectangle r){
    struct point tmp;
    tmp.x = abs(r.upper_left.x - r.lower_right.x)/2;
    tmp.y = abs(r.upper_left.y - r.lower_right.y)/2;
    return tmp;
}

void move(int x, int y, struct rectangle *r1){
    r1->upper_left.x += x;
    r1->lower_right.x += x;
    r1->upper_left.y += y;
    r1->lower_right.y += y; 
}

bool inside_rectangle(struct point p, struct rectangle r){
    bool status = false;
    max(&r.upper_left.x, &r.lower_right.x);
    max(&r.upper_left.y, &r.lower_right.y);
    printf("(%d,%d)(%d,%d)\n", r.lower_right.x, r.lower_right.y, r.upper_left.x, r.upper_left.y);
    if(r.upper_left.x <= p.x && p.x <= r.lower_right.x && r.upper_left.y <= p.y && r.lower_right.y >= p.y)
        status = true;
    return status;
}

void max(int *a, int *b){
    if (*a > *b){
        *a = *b + *a;
        *b = *a - *b;
        *a = *a - *b;
    }
}