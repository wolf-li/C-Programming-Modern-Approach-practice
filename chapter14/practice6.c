#include<stdio.h>
#include<math.h>

#define DISP(f,x) (printf(#f"(%g) = %g\n", x, f(x)))

int main(){
    DISP(sqrt, 4.0);
}