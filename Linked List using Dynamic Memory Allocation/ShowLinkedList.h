#ifndef SHOWLINKEDLIST_H_INCLUDED
#define SHOWLINKEDLIST_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include "Structure.h"

void showList(){
    struct LinkedList *node;
    node = start;

    printf("\n LinkedList is as follow:\n\n start ");
    while(node != NULL){
        if(start == NULL){
            printf("\n UnderFlow!");
        }else{
        printf("--> %d ",node->info);
        node = node->next;
        }
    }
}


#endif // SHOWLINKEDLIST_H_INCLUDED
