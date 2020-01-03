#ifndef INSERTATSPECIFIC_H_INCLUDED
#define INSERTATSPECIFIC_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include "Structure.h"

void insertAtPosition(){
    int position,i;
    printf("\n\tEnter the Position you want to enter the Node :");
    scanf("%d",&position);

    struct DoublyLinkedList *node = start;
    for(i = 1 ; i < position-1 ; i++ ){
        node = node->next;
    }
    struct DoublyLinkedList *newNode;
    newNode = (struct DoublyLinkedList *)malloc(sizeof(struct DoublyLinkedList));
    printf("\n\tEnter the node :");
    scanf("%d",&newNode->info);
    newNode->next = node->next;
    node->next->prev = newNode;
    newNode->prev = node;
    node->next = newNode;
}


#endif // INSERTATSPECIFIC_H_INCLUDED
