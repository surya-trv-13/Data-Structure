#ifndef POPSTACK_H_INCLUDED
#define POPSTACK_H_INCLUDED
#include <stdlib.h>
#include "StackStructure.h"
#include "Structure.h"

struct Node *pop(){

    if(top == NULL){
        return NULL;
    }else{
        struct StackNode *temp;
        temp = top;
        top = top->next;
        return temp->node;
    }
    return;
}


#endif // POPSTACK_H_INCLUDED
