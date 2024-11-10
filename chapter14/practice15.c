#include<stdio.h>

#define ENGLISH 2
#define FRENCH 1

int main(){
    #if ENGLISH
    printf("Insert Disk 1.");
    #elif FRENCH
    printf("Inserez Le Disque 1.");
    #elif SPANISH
    printf("Inserte E1 Disco 1");
    #endif
}