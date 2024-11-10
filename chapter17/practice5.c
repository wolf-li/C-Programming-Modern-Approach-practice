/*
 * @Author: wolf-li
 * @Date: 2024-06-17 22:50:03
 * @LastEditTime: 2024-06-19 01:07:26
 * @LastEditors: wolf-li
 * @Description: 
 * @FilePath: /c_code/c_morden_desgin/chapter17/practice5.c
 * talk is cheep show me your code.
 */
#include<stdio.h>
#include<stdlib.h>

struct node{
    int value;
    struct node *next;
};

struct node *add_to_list(struct node *list, int n);
void show_list(struct node *list);
struct node *search(struct node *list, int n);
struct node *delete_from_list(struct node *list, int n);
struct node *delete_from_list1(struct node *list, int n);

int main(){
    struct node *start, *new_node;
    // start = malloc(sizeof(struct node));
    // start->value = 10;
    // start->next = NULL;
    // new_node = malloc(sizeof(struct node));
    // new_node->value = 20;
    new_node = NULL;
    new_node = add_to_list(new_node, 89);
    new_node = add_to_list(new_node, 819);
    new_node = add_to_list(new_node, 9);
    new_node = add_to_list(new_node, 3);
    show_list(new_node);
    printf("\n");
    // start = search(new_node, 89);
    // printf("%d ", start->value);
    new_node = delete_from_list(new_node, 89);
    new_node = delete_from_list(new_node, 3);
    new_node = delete_from_list(new_node, 1);
    show_list(new_node);
}

struct node *add_to_list(struct node *list, int n){
    struct node *new_node = malloc(sizeof(struct node));
    if(new_node == NULL){
        printf("Error: malloc fail to add_list\n");
        exit(EXIT_FAILURE);
    }
    new_node->value = n;
    new_node->next = list;
    return new_node;
}

void show_list(struct node *list){
    for(; list != NULL; list=list->next)
        printf("%d ",list->value);
}

struct node *search(struct node *list, int n){
    for(; list != NULL; list=list->next)
        if(list->value == n)
            return list;
    return NULL;
}

struct node *delete_from_list1(struct node *list, int n){
    struct node *p;
    for(p = list; p != NULL; p = p->next )
        if(p->next->value == n || p->value == n )
            break;

    struct node *tmp;
    if( p == list && p->value == n){
        tmp = p;
        p = p->next;
        free(tmp);
        return p;
    }
    
    if(p != NULL){
        tmp = p->next;
        if(p->next->next != NULL){
            p->next = p->next->next;
        }else{
            p->next = NULL;
        }
        free(tmp);
    }
    return list;
}

struct node *delete_from_list(struct node *list, int n){
    struct node *cur, *prev;
    for(prev = NULL, cur = list; cur != NULL && cur->value != n; prev = cur, cur = cur->next)
        ;

    if(cur == NULL)
        return list;
    if(prev == NULL)
        list = list->next;
    else
        prev -> next = cur->next;
    free(cur);
    return list;
}