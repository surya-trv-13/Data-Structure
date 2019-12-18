#ifndef REVERSINGLIST_H_INCLUDED
#define REVERSINGLIST_H_INCLUDED
#include<stdio.h>
#include "Structure.h"

void reverseList(){
    struct LinkedList *current,*previous,*temporary;
    current = start;
    previous = current->next;
    current->next = NULL; //To change the value later;

    while(previous->next != NULL){
        temporary = previous->next;
        previous->next = current;
        current = previous;
        previous = temporary;
    }
    previous->next = current;
    start = previous;
    return;
}

#endif // REVERSINGLIST_H_INCLUDED
