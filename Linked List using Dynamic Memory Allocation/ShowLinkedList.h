#ifndef SHOWLINKEDLIST_H_INCLUDED
#define SHOWLINKEDLIST_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include "Structure.h"

void showList(){
    struct LinkedList *node;
    node = start;
    if(start == NULL){
        printf("\n UnderFlow!");
        return;
    }else{
        printf("\n LinkedList is as follow:\n\n start ");
        while(node != NULL){
            printf("--> %d ",node->info);
            node = node->next;
        }
        printf("--> NULL");
    }
}


#endif // SHOWLINKEDLIST_H_INCLUDED
