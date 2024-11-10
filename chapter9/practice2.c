#include<stdio.h>

int check(int x, int y, int n){
    if (( x - n < 0) &&  (y - n < 0 ) )
        return 1;
    return 0;
}

int main(){
    int x = 7 , y = 10 , n = 2;
    printf("res: %d\n",check(x,y,n));
    x = 2 , y = 12 , n = 20;
    printf("res: %d\n",check(x,y,n));
    x = 2 , y = 12 , n = 4;
    printf("res: %d\n",check(x,y,n));
}