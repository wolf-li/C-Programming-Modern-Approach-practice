#include<stdio.h>
#include<string.h>
// #define NAME_LEN 20

// struct part{
//     int number;
//     char name[NAME_LEN+1];
//     int on_hand;
// };

// struct t{
//     int;
//     float;
// }

// void print_part(struct part p);
// struct part init(int number, const char * name, int on_hand){
//     struct part p;
//     p.number = number;
//     strcpy(p.name, name);
//     p.on_hand = on_hand;
//     return p;
// }

// int main(){
//     print_part((struct part){528, "Disk drive", 10});
//     struct part sp = init(123, "teq", 2);
//     print_part(sp);
// }

// void print_part(struct part p){
//     printf("Part number: %d\n", p.number);
//     printf("Part name: %s\n",p.name);
//     printf("Quantity on hand: %d\n", p.on_hand);
// }

struct test{
    int id;
};

int main(){
    struct test p[10];
    printf("p length: %lu\n", sizeof(p)/sizeof(p[0]));
    return 0;
}
