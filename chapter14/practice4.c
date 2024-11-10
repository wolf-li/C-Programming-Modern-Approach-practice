#include<stdio.h>

#define AVG(x,y) ((x+y)/2)
#define AREA(x,y) ((x)*(y))

int main(){
    float n1 = 10;
    float n2 = 30.2;
    printf("%f %f avg: %f", n1, n2, AVG(n1,n2));
    printf("%f %f area: %f", n1, n2, AREA(n1, n2));
}