#ifndef COUNTNODES_H_INCLUDED
#define COUNTNODES_H_INCLUDED
#include<stdio.h>
#include "Structure.h"

int countNodes(struct LinkedList *node){
    int c = 1;
    while(node->next != NULL){
        node = node->next;
        c++;
    }
    return c;
}


#endif // COUNTNODES_H_INCLUDED
