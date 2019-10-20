#ifndef INSERTFROMBEGIN_H_INCLUDED
#define INSERTFROMBEGIN_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include "Structure.h"

insertAtBegin(){
    struct LinkedList *node;
    node = (struct LinkedList *)malloc(sizeof(struct LinkedList));
    printf("\n Enter the Info :");
    scanf("%d",&node->info);
    if(start == NULL){
        start = node;
        node->next = NULL;
    }else{
        node->next = start;
        start = node;
    }
}

#endif // INSERTFROMBEGIN_H_INCLUDED
