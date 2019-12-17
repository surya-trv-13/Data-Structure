#ifndef INSERTSPECIFICLOCATION_H_INCLUDED
#define INSERTSPECIFICLOCATION_H_INCLUDED
#include<stdio.h>
#include"Structure.h"
#include"CountNodes.h"

void insertAtposition(int n){
    int c = countNodes(start);
    int i;
    if(c > n){
        struct LinkedList *node,*previous;
        node = (struct LinkedList *)malloc(sizeof(struct LinkedList));
        printf("\n Enter the Info :");
        scanf("%d",&node->info);
        previous = (struct LinkedList *)malloc(sizeof(struct LinkedList));
        previous = start;
        for(i=1 ; i<n-1 ;i++){
            previous = previous->next;
        }
        node->next = previous-> next;
        previous->next = node;
    }
    else if(start == NULL || c<n){
        printf("\n The position exceeds the length of the array !");
        return;
    }
}

#endif // INSERTSPECIFICLOCATION_H_INCLUDED
