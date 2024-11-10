/*
 * @Author: wolf-li
 * @Date: 2024-06-13 22:27:59
 * @LastEditTime: 2024-06-14 15:18:34
 * @LastEditors: wolf-li
 * @Description: 
 * @FilePath: /c_code/c_morden_desgin/chapter17/Linklist.c
 * talk is cheep show me your code.
 */
#include"Linklist.h"

struct node *add_to_list(struct node *list, int n){
    struct node *p = malloc(sizeof(struct node));
    if(p == NULL){
        printf("Error: malloc failed in add_to_list\n");
        exit(EXIT_FAILURE);
    }
    p->value = n;
    p->next = list;
    return p;
}

struct node *read_number(void){
    struct node *first = NULL;
    int n;

    printf("ENter a series of integers(0 ot terminate):");
    while(1){
        scanf("%d",&n);
        if(n == 0)
            return first;
        first = add_to_list(first, n);
    }
}

// list是原始指针的副本，函数内改变不会影响原来指针
struct node *search_list(struct node *list, int n){
    struct node *p;
    for(p = list; p != NULL; p->next){
        if(p->value == n)
            return p;
    }
    return NULL;
}

// struct node *search_list(struct node *list, int n){
//     for(; list != NULL; list = list->next)
//         if(list->value == n)
//             return list;
//     return NULL;
// }


// struct node *search_list(struct node *list, int n){
//     for(; list != NULL && list->value != n; list = list->next)
//         ;
//     return list;
// }

struct node *delete_from_list(struct node *list, int n){
    struct node *curr, *prev;

    for(curr = list, prev = NULL; 
        curr != NULL && curr->value != n; 
        prev = curr, curr = curr->nuext){
        ;
    }
    if(curr == NULL)
        return list;
    if(prev == NULL)
        list = list->next;
    else
        prev->next = curr->next;
    free(curr);
    return list;
}


