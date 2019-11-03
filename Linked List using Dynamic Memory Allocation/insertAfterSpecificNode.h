#ifndef INSERTAFTERSPECIFICNODE_H_INCLUDED
#define INSERTAFTERSPECIFICNODE_H_INCLUDED
#include<stdio.h>
#include "Structure.h"

void insertAfterNode(){
    struct LinkedList *node,*newNode;
    int info;
    node = start;
    printf("\n Enter the node after which you want to insert Node :");
    scanf("%d",&info);
    while(node != NULL){
        if(info == node->info){
            break;
        }
        node = node->next;
    }

    if(node == NULL){
        printf("\n Node not found !!");
        return;
    }

    newNode = (struct LinkedList *)malloc(sizeof(struct LinkedList));
    if(newNode == NULL){
        printf("\n Out of Memory");
        return;
    }
    printf("\n Enter the info :");
    scanf("%d",&newNode->info);

    newNode->next = node->next;
    node->next = newNode;

}

#endif // INSERTAFTERSPECIFICNODE_H_INCLUDED
