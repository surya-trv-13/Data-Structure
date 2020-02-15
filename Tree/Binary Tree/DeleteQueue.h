#ifndef DELETEQUEUE_H_INCLUDED
#define DELETEQUEUE_H_INCLUDED
#include "QueueStructure.h"

struct Node *DeQueue(){
    struct Queue *temp;
    if(front == NULL){
        return;
    }else if(rear == front){
         temp = front;
        front = rear = NULL;
    }else{
        temp = front;
        front = front->next;
    }
    return temp->node;
}


#endif // DELETEQUEUE_H_INCLUDED
