#ifndef INSERTFROMENDING_H_INCLUDED
#define INSERTFROMENDING_H_INCLUDED
#include<stdio.h>
#include "Structure.h"

void insertAtEnding(){
    struct LinkedList *node,*temporary;
    node = (struct LinkedList *)malloc(sizeof(struct LinkedList));
    printf("\n Enter the Info :");
    scanf("%d",&node->info);
    if(start == NULL){
        start = node;
        node->next = NULL;
    }else{
        temporary = start;
        while(temporary->next != NULL){
            temporary = temporary->next;
        }
        temporary->next = node;
        node->next = NULL;
    }
}


#endif // INSERTFROMENDING_H_INCLUDED
