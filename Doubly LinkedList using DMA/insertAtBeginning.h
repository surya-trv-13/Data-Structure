#ifndef INSERTATBEGINNING_H_INCLUDED
#define INSERTATBEGINNING_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include"Structure.h"

void insertFront(){
    struct DoublyLinkedList *node;
    node = (struct DoublyLinkedList *)malloc(sizeof(struct DoublyLinkedList));

    if(node == NULL){
        printf("\n OverFlow !");
        return;
    }else{
        printf("\n\tEnter the node :");
        scanf("%d",&node->info);
        node->next = start;
        node->prev = NULL;
        start->prev = node;
        start = node;
    }
}


#endif // INSERTATBEGINNING_H_INCLUDED
