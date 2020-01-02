#ifndef CREATELIST_H_INCLUDED
#define CREATELIST_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include"Structure.h"

createList(){
    struct DoublyLinkedList *current,*node;

    char ch;
    do{
        node = (struct DoublyLinkedList *)malloc(sizeof(struct DoublyLinkedList));

        if(start == NULL){
            current = node;
            printf("\n Enter the info (start) :");
            scanf("%d",&current->info);
            current->prev = NULL;
            current->next = NULL;
            start = current;
        }else{
            current->next = node;
            node->prev = current;
            current = current->next;
            printf("\n Enter the info :");
            scanf("%d",&current->info);
            current->next = NULL;
        }

    printf("\n DO you want to enter more? :");
    scanf(" %c",&ch);
    }while(ch == 'Y' || ch == 'y');

}



#endif // CREATELIST_H_INCLUDED
