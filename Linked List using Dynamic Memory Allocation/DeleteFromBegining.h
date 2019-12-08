#ifndef DELETEFROMBEGINING_H_INCLUDED
#define DELETEFROMBEGINING_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include "Structure.h"

void deleteFromBegining(){
    if(start == NULL){
        printf("\n Underflow");
        return;
    }
    struct LinkedList *node,*temp;
    node = (struct LinkedList *)malloc(sizeof(struct LinkedList));
    node = start;
    temp = start;
    node = node->next;
    free(temp);
    start = node;
    return;
}


#endif // DELETEFROMBEGINING_H_INCLUDED
