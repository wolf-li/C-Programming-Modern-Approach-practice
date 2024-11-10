#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node{
    int value;
    struct node *next;
};

struct node *add_to_list(struct node *list, int n);

struct node *read_number(void);

struct node *search_list(struct node *list, int n);

struct node *delete_from_list(struct node *list, int n);