#ifndef INSERTSTACK_H_INCLUDED
#define INSERTSTACK_H_INCLUDED
#include <stdlib.h>
#include "StackStructure.h"
#include "Structure.h"

void push(struct Node *node){
    struct StackNode *stack = malloc(sizeof(struct StackNode));
    stack->node = node;
    if(top == NULL){
        stack->next = NULL;
    }else{
        stack->next = top;
    }
    top = stack;
}


#endif // INSERTSTACK_H_INCLUDED

