#ifndef CREATECIRCULARLINKEDLIST_H_INCLUDED
#define CREATECIRCULARLINKEDLIST_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include "Structure.h"

void createCircularList(){
    char ch = 'n';
    struct LinkedList *node,*temporary;
    do{
        node = (struct LinkedList *)malloc(sizeof(struct LinkedList));
        printf("\n\tEnter the info :");
        scanf("%d",&node->info);

        if(start == NULL){
            start = node;
        }else{
            temporary = start;
            while(temporary->next != start){
                temporary = temporary->next;
                printf("\nLoop");
            }
            temporary->next = node;
        }
        node->next = start;

        printf("\n\tEnter 'n' to abort! Press any key to continue!!");
        scanf(" %c",&ch);
    }while(ch != 'n');
    return;
}
#endif // CREATECIRCULARLINKEDLIST_H_INCLUDED
