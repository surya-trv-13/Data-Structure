#ifndef SHOWLIST_H_INCLUDED
#define SHOWLIST_H_INCLUDED
#include<stdio.h>
#include "Structure.h"

void showList(){
    struct DoublyLinkedList *node = start;
    while(node != NULL){
        printf("--> %d",node->info);
        node = node->next;
    }
}


#endif // SHOWLIST_H_INCLUDED
