#include<stdio.h>


int main(){
    #define N 10
    double ident[N][N]={{1,2,3},{2,3,4},{4,5,6},{5,6,7},{6,7,8}};
    int row, col;
    for(col = 0; col < N; col++){
        for (row = 0; row < N; row++)
        {
            printf("%.2f ",ident[col][row]);
        }
        printf("\n");
    }
    return 0;
}