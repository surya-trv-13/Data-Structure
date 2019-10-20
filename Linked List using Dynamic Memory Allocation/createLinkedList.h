#ifndef CREATELINKEDLIST_H_INCLUDED
#define CREATELINKEDLIST_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include "Structure.h"

void createList(){
    char ch = 'n';
    struct LinkedList *node,*temporaryNode;
    do{
        node = (struct LinkedList *)malloc(sizeof(struct LinkedList));

        if(start == NULL){
            temporaryNode = node;
            printf("\nEnter the info :");
            scanf("%d",&temporaryNode->info);
            temporaryNode->next = NULL;
            start = temporaryNode;
        }else{
            temporaryNode->next = node;
            temporaryNode = temporaryNode->next;
            printf("\nEnter the info :");
            scanf("%d",&temporaryNode->info);
            temporaryNode->next = NULL;
        }
        printf("\nEnter 'n' to abort! Press any key to continue!!");
        scanf(" %c",&ch);
    }while(ch != 'n');
    return;
}



#endif // CREATELINKEDLIST_H_INCLUDED
