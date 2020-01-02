#ifndef DELETEATEND_H_INCLUDED
#define DELETEATEND_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include "Structure.h"

void deleteBack(){
    if(start == NULL){
        printf("\n\t UnderFlow !!");
        return;
    }else if(start->next == NULL){
        free(start);
        start = NULL;
    }else{
        struct DoublyLinkedList *node = start,*temporary;
        while(node->next != NULL)
        {
            node = node->next;
        }
        temporary = node;
        node = node->prev;
        node->next =  NULL;
        free(temporary);
    }
}



#endif // DELETEATEND_H_INCLUDED
