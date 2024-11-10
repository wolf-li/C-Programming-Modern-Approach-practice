#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(int argc, char *argv[]){
    const char *plants[] = {"Mercury", "Venus", "Earth","Mars", "Jupiter", "Saturn","Uranus", "Neptune", "Pluto"};
    char **p;
    const char **q;

    for( p = &argv[1]; p < &argv[0] + argc ; p++ ){
        for( q = &plants[0]; q < &plants[0] + 9; ++q){
            if(strcmp(*q, *p) == 0){
                printf("%s is planet %ld\n", *p, q - &plants[0]+1 );
                break;
            }
        }
        // 疑惑 q - &plangts[0] == 9
        if(q - &plants[0] == 9)
            printf("%s is not a planet.\n", *p);
    }

    return 0;
}