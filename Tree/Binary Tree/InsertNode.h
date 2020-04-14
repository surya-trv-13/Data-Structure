#ifndef INSERTNODE_H_INCLUDED
#define INSERTNODE_H_INCLUDED
#include <stdio.h>
#include "Structure.h"
#include "QueueStructure.h"
#include "InsertQueue.h"
#include "DeleteQueue.h"

void insertNode(){
    struct Node* node= malloc(sizeof(struct Node));
    printf("\n\tEnter the data :");
    scanf("%d", &node->data);
    node->right = node->left = NULL;

    if(!node){
        return;
    }else{
        if(root == NULL){
            root = node;
        }else{
            struct Node *temp;
            EnQueue(root);
            while(temp != NULL){
                temp = DeQueue();
                if(temp->left == NULL){
                    temp->left = node;
                    break;
                }else{
                    EnQueue(temp->left);
                }

                if(temp->right == NULL){
                    printf("Called");
                    temp->right = node;
                    break;
                }else{
                    EnQueue(temp->right);
                }
            }
        }
    }

}

#endif // INSERTNODE_H_INCLUDED
