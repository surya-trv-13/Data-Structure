#ifndef PUSH_H_INCLUDED
#define PUSH_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include "Structure.h"
#include "isEmpty.h"

void push(){
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    printf("\n\t\tEnter the Info :");
    scanf("%d",&node->item);
    if(isEmpty()){
        top = node;
        top->next = NULL;
    }else{
        node->next = top;
        top = node;
    }
}



#endif // PUSH_H_INCLUDED
