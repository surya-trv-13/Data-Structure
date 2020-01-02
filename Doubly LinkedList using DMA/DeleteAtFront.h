#ifndef DELETEATFRONT_H_INCLUDED
#define DELETEATFRONT_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include "Structure.h"

void deleteFront(){

    if(start == NULL){
        printf("\n UnderFlow !!");
        return;
    }else if(start->next == NULL){
        free(start);
        start = NULL;
    }
    else{
        struct DoublyLinkedList *node;
        node = start;
        start = start->next;
        start->prev = NULL;
        free(node);
    }
}



#endif // DELETEATFRONT_H_INCLUDED
