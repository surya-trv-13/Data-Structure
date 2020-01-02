#ifndef INSERTATEND_H_INCLUDED
#define INSERTATEND_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include "Structure.h"

void insertBack(){
    struct DoublyLinkedList *node,*current;
    node = (struct DoublyLinkedList *)malloc(sizeof(struct DoublyLinkedList));

    if(node == NULL){
        printf("\n OverFlow !");
        return;
    }else if(start == NULL){
            printf("\n\tEnter the node  :");
            scanf("%d",&node->info);
            node->prev = NULL;
            node->next = NULL;
            start = node;
    }else{
        current = start;
        while(current->next != NULL){
            current = current->next;
        }
        printf("\n\tEnter the node :");
        scanf("%d",&node->info);
        current->next = node;
        node->prev = current;
        node->next = NULL;
    }
}



#endif // INSERTATEND_H_INCLUDED
