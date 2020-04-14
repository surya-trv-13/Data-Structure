#ifndef PRINTCIRCULAR_H_INCLUDED
#define PRINTCIRCULAR_H_INCLUDED

#include "Structure.h"
#include <stdio.h>

void printCircularLL(){
    struct DoublyLinkedList *node = start;

    do{
        printf("->%d",node->info);
        node = node->next;
    }while(node != start);
}


#endif // PRINTCIRCULAR_H_INCLUDED
