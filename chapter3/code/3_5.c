/*
@File    :   3_5.c
@Time    :   2022/11/15 23:34:12
@Author  :   wolf-li 
@Version :   1.0

result   :
$ ./main
Entyer the number form 1 to 16 in any order:
16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
16 3 2 13
5 10 11 8
9 6 7 12
4 15 14 1
Row sums:  34  34  34  34
Column sums:  34  34  34  34
Diagonal sums: 34 34

*/

#include<stdio.h>
int main() {
        int matrix[16], row[4], column[4], diagonal[2] = {0};
        printf("Entyer the number form 1 to 16 in any order:\n");
        scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &matrix[0], &matrix[1], &matrix[2], &matrix[3], &matrix[4], &matrix[5], &matrix[6], &matrix[7], &matrix[8], &matrix[9], &matrix[10], &matrix[11], &matrix[12], &matrix[13], &matrix[14], &matrix[15]);
        for (int i = 0; i < 4; i++){
                printf("%d %d %d %d\n", matrix[i*4 + 0],matrix[i*4 + 1], matrix[i*4 + 2], matrix[i*4 + 3]);
                row[i] = matrix[i*4 + 0]+matrix[i*4 + 1]+ matrix[i*4 + 2]+ matrix[i*4 + 3];
                column[i] = matrix[ i + 0] +  matrix[ i + 4] + matrix[ i + 8 ] +  matrix[ i + 12 ];
                diagonal[0] = diagonal[0] + matrix[ i * 5 ];
                diagonal[1] = diagonal[1] + matrix[ (i + 1) * 3 ];
        }
        printf("Row sums: ");
        for (int i = 0; i < 4; i++){
                printf(" %d ",row[i]);
        }
        printf("\nColumn sums: ");
        for (int i = 0; i < 4; i++){
                printf(" %d ", column[i]);
        }
        printf("\nDiagonal sums: %d %d\n", diagonal[0], diagonal[1]);
        return 0;
}