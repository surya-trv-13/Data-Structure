#ifndef PEEK_H_INCLUDED
#define PEEK_H_INCLUDED
#include<stdio.h>
#include "Structure.h"
#include "isEmpty.h"

void peek(){
    if(isEmpty()){
        printf("\n\t\tUnderFlow!!");
        return;
    }else{
        struct Node *node = top;
        printf("\n\t\t TOP");
        while(node != NULL){
            printf("==> %d", node->item);
            node = node->next;
        }
    }
}

#endif // PEEK_H_INCLUDED
