#ifndef DELETEFROMEND_H_INCLUDED
#define DELETEFROMEND_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include "Structure.h"

void deleteFromEnd(){
    if(start == NULL){
        printf("\n Underflow");
        return;
    }
    struct LinkedList *node,*previous;
    node = (struct LinkedList *)malloc(sizeof(struct LinkedList));
    node = start;
    if(node->next == NULL){
        free(node);
        start = NULL;
        return;
    }
    while(node->next != NULL){
        previous = node;
        node = node->next;
    }

    free(node);
    previous->next = NULL;
    return;
}


#endif // DELETEFROMEND_H_INCLUDED
