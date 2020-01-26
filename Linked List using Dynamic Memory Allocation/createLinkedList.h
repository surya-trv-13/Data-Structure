#ifndef CREATELINKEDLIST_H_INCLUDED
#define CREATELINKEDLIST_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include "Structure.h"

void createList(){
    char ch = 'n';
    struct LinkedList *node;
    do{
        node = (struct LinkedList *)malloc(sizeof(struct LinkedList));
        printf("\n\tEnter the info :");
        scanf("%d",&node->info);

        if(start == NULL){
            start = node;
        }else{
            struct LinkedList *temporary = start;
            while(temporary->next != NULL){
                temporary = temporary->next;
            }
            temporary->next = node;
        }
        node->next = NULL;

        printf("\n\tEnter 'n' to abort! Press any key to continue!!");
        scanf(" %c",&ch);
    }while(ch != 'n');
    return;
}



#endif // CREATELINKEDLIST_H_INCLUDED
