#ifndef SEARCHING_H_INCLUDED
#define SEARCHING_H_INCLUDED

#include "Structure.h"
#include "PushStack.h"
#include "PopStack.h"


struct Node *SearchingNode(struct Node *node , int DataSearch){
    struct Node *root = node;
    while(1){
        while(root != NULL){
            push(root);
            root = root->left;
        }
        root = pop();
        if(root){
            if(root->data == DataSearch){
                return root;
            }
        }

        //If stack gets empty it will move out the Outer Loop
        if(top == NULL && root == NULL){
            break;
        }

        root = root->right;
    }
    return NULL;
}


#endif // SEARCHING_H_INCLUDED
