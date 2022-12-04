/*
@File    :   5_11.c
@Time    :   2022/12/02 00:10:23
@Author  :   wolf-li 
@Version :   1.0
*/

#include<stdio.h>
int main() {
    int area_code = 912;
    switch (area_code){
        case 229:
            printf("Albany\n");
            break;
        case 404: case 470: case 678: case 770:
            printf("Atlanta\n");
            break;
        case 706: case 762:
            printf("Columbus\n");
            break;
        case 912:
            printf("Savannah\n");
            break;
        default:
            printf("Area code not recognized\n");
    }
    return 0;
}