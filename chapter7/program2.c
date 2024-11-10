// prints a table of squares using a for statement

#include<stdio.h>
int main(){
    int i,n;
    char ch;
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d",&n);
    for(i = 1;i<=n; i++){
        if ( i%24 == 0 || i == 24 ){
            printf("Press Enter to contine...");
            while ((ch = getchar()) != '\n')
            {
                break;
            }
        }
        printf("%10d%10d\n", i ,i*i);
    }
    return 0;
}