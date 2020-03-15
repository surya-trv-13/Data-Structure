#ifndef DELETENODE_H_INCLUDED
#define DELETENODE_H_INCLUDED
#include "stdio.h"
#include "Structure.h"
#include "QueueStructure.h"
#include "InsertQueue.h"
#include "Searching.h"

void deleteNode(){
    int data;
    printf("\n\tEnter the data you want to delete from the Tree :");
    scanf("%d" , &data);
    struct Node *searchNode = SearchingNode(root , data);
    if(searchNode == NULL){
        printf("\n\tData is not found in the tree");
        return;
    }else{
        printf("\n\tData found is %d", searchNode->data);
        if(front != NULL || rear != NULL){
            front = rear = NULL;
        }
        struct Node *tempNode = root , *previous;
        EnQueue(tempNode);

        while(front != NULL){
            tempNode = DeQueue();
            if(tempNode->left != NULL){
                previous = tempNode;
                EnQueue(tempNode->left);
            }
            if(tempNode->right != NULL){
                previous = tempNode;
                EnQueue(tempNode->right);
            }
        }
        searchNode->data = tempNode->data;

        //Making the Parent nodes left or right child NULL before deleting the child.
        if(previous->right == NULL){
             previous->left = NULL;
        }else{
            previous->right = NULL;
        }

        free(tempNode);


    }
}


#endif // DELETENODE_H_INCLUDED
