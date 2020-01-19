#ifndef SHOWCIRCULARLIST_H_INCLUDED
#define SHOWCIRCULARLIST_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>
#include "Structure.h"

void showCircularList(){
    struct LinkedList *node;
    node = start;
    if(node == NULL){
        printf("\n UnderFlow!");
        return;
    }else{
        printf("\n LinkedList is as follow:\n\n start ");
        do{
            printf("--> %d ",node->info);
            node = node->next;
        }while(node != start);
        printf("--> start");
    }
}




#endif // SHOWCIRCULARLIST_H_INCLUDED
