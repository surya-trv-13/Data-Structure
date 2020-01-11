#ifndef POP_H_INCLUDED
#define POP_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include "Structure.h"
#include "isEmpty.h"

void pop(){
    if(isEmpty()){
        printf("\n\tUnderFlow!!");
        return;
    }else{
        struct Node *node = top;
        top = top->next;
        printf("\n\tPopped Node is %d",node->item);
        free(node);
    }
}


#endif // POP_H_INCLUDED
