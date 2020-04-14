#ifndef CREATECIRCULARLIST_H_INCLUDED
#define CREATECIRCULARLIST_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include"Structure.h"

void createCircularLL(){
    struct DoublyLinkedList *node, *lastNode = NULL;
    char choice = 'Y';
    do{
        node = malloc(sizeof(struct DoublyLinkedList));

        //Create node;
        printf("\n\tEnter the info :");
        scanf("%d" , &node->info);
        node->next = node->prev = NULL;
        if(start == NULL){
            start = node;
            node->prev = start;
            node->next = start;
            lastNode = node;
        }else if(start->prev == start){
            node->next = lastNode; //start
            lastNode->prev = node;
            start = node;
            lastNode->next = start;
        }else{
            node->next = start;
            start->prev = node;
            start = node;
            lastNode->next = start;
        }
        printf("\n\tDo You Want To Enter More :");
        scanf(" %c" , &choice);
    }while(choice == 'y' || choice == 'Y');

}



#endif // CREATECIRCULARLIST_H_INCLUDED
