#ifndef INSERTQUEUE_H_INCLUDED
#define INSERTQUEUE_H_INCLUDED
#include <stdlib.h>
#include "QueueStructure.h"

void EnQueue(struct Node *currNode){
    struct Queue *queueNode = malloc(sizeof(struct Queue));
    queueNode->node = currNode;
    if(front == NULL){
        front = queueNode;
        rear = queueNode;
    }else{
        rear->next = queueNode;
        rear = rear->next;
    }
    rear->next = NULL;
};



#endif // INSERTQUEUE_H_INCLUDED
