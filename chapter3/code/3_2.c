/*
 date: 2022-11-15
 auth: wolf-li

 platform: centos7
 gcc command:
 gcc -o <Destination file name> <file.name>.c

 result:
$ ./main
Enter item number:123
Enter unit price:13243.123
Enter purchase date (mm/dd/yyyy):123/123/124

Item            Unit            Purchase
                Price           Date
123             $13243.12       123/123/0124
*/

#include<stdio.h>
main() {
        int num, m, d, y;
        float price;
        printf("Enter item number:");
        scanf("%d", &num);
        printf("Enter unit price:");
        scanf("%f", &price);
        printf("Enter purchase date (mm/dd/yyyy):");
        scanf("%d/%d/%d", &m, &d, &y);
        printf("\nItem\t\tUnit\t\tPurchase\n");
        printf("\t\tPrice\t\tDate\n");
        printf("%d\t\t$%7.2f\t%.2d/%.2d/%.4d\n",num,price,m,d,y);
        return 0;
}