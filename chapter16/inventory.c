
#include<stdio.h>
#include"readline.h"

#define N 100
#define SIZE 20

struct part{
    int number;
    char name[SIZE];
    int on_hand;
}inventory[N];

int num_parts = 0;

int find_part(int number);
void insert();
void search();
void update();
void print();

int main(){
    char opt;
    while (1)
    {
        printf("Enter the operation code:");
        scanf(" %c",&opt);
        while (getchar() != '\n')
            ;
        
        switch (opt)
        {
        case 'i':
            insert();
            break;
        case 's':
            search();
            break;
        case 'u':
            update();
            break;
        case 'p':
            print();
            break;
        case 'q':
            return 0;
        default:
            printf("input wrong args!");
            return 1;
        }
    }
    
    
}

int find_part(int number){
    for(int i = 0; i < N; i++){
        if(inventory[i].number == number)
            return i;
    }
    return -1;
}

void insert(){
    int part_number;

    if (num_parts == N){
        printf("Database is full; can't add more parts.\n");
        return ;
    }
    
    printf("Enter part number:");
    scanf("%d",&part_number);
    
    if(find_part(part_number) >= 0){
        printf("Part already exist.\n");
        return;
    }

    inventory[num_parts].number = part_number;
    printf("Enter part name:");
    read_line(inventory[num_parts].name, SIZE);
    printf("Enter quantity on hand: ");
    scanf("%d", &inventory[num_parts].on_hand);
    num_parts++;
}

void search(){
    int part_number;
    printf("Enter part number:");
    scanf("%d",&part_number);
    if(find_part(part_number) >= 0){
        printf("Part name: %s\n",inventory[find_part(part_number)].name);
        printf("Quantity on hand %d\n",inventory[find_part(part_number)].on_hand);
    }else{
        printf("not fount");
    }
}

void update(){
    int part_number;
    printf("Enter part number:");
    scanf("%d",&part_number);

    if(find_part(part_number) >= 0){
        printf("Enter quantity on hand: ");
        scanf("%d", &inventory[part_number].on_hand);
    }

    printf("Part not exist.\n");
    return;
}

void print(){
    if(num_parts == 0){
        printf("Database empty.\n");
        return;
    }

    printf("Part Number\tPart Name\t\tQuantity on Hand\n");
    for(int i = 0; i < num_parts; i++){
        printf("%d\t%s\t\t%d\n",inventory[i].number, inventory[i].name, inventory[i].on_hand);
    }
}