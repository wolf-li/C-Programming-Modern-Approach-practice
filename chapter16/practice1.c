#include<stdio.h>

struct x{int x; int y;};
struct y{
    int x;
    int y;
};

int main(){
    struct x w = {.x = 3, .y = 7};
    struct y z = {.x = 8, .y = 9};
    printf("x.x : %d, x.y = %d\n", w.x, w.y);
    printf("y.x : %d, y.y = %d\n", z.x, z.y);
}
