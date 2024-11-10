#include<stdio.h>
#define cube(x) ( x*x*x )
#define _reminder_4(x) (x%4)
#define _multiply_100(x,y) (x*y<100?1:0)

int main(){
    int n1 = 2;
    int n2 = 45;
    printf("%d ^ 3 : %d\n",n1, cube(n1));
    printf("%d %% 4 : %d\n",n1, _reminder_4(n1));
    printf("%d * %d < 100 : %d\n", n1, n2, _multiply_100(n1,n2));
}