/*
@File    :   3_3.c
@Time    :   2022/11/15 22:34:49
@Author  :   wolf-li 
@Version :   1.0

@result  :
$ ./main
Enter item number:97-0-393-97867-3
GSI prefix: 97
Group identifier: 0
Publisher code: 393
Item number: 97867
Cheak: 3

*/


#include<stdio.h>
main() {
        int prefix, group, publisher, item, check;
        printf("Enter item number:");
        scanf("%d-%d-%d-%d-%d", &prefix, &group, &publisher, &item, &check);
        printf("GSI prefix: %d\n",prefix);
        printf("Group identifier: %d\n", group);
        printf("Publisher code: %d\n", publisher);
        printf("Item number: %d\n", item);
        printf("Cheak: %d\n", check);
        return 0;
}