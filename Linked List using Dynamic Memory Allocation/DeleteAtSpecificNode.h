#ifndef DELETEATSPECIFICNODE_H_INCLUDED
#define DELETEATSPECIFICNODE_H_INCLUDED
#include<stdio.h>
#include"Structure.h"
#include"CountNodes.h"

void deleteAtSpecificNode(){
    int value;
    struct LinkedList *node = start->next ,*previous = start;

    //Asking for the value
    printf("\n Enter the Value you want to delete :");
    scanf("%d", &value);

    if(value == start->info){
        start = node;
        free(previous);
    }else{
        while(node->next != NULL && node->info != value){
            previous = node;
            node = node->next;
        }
    }
    if(node == NULL){
        printf("\n Value can't found in the linked list");
        return;
    }
    previous->next = node->next;
    free(node);
    return;
}

#endif // DELETEATSPECIFICNODE_H_INCLUDED
