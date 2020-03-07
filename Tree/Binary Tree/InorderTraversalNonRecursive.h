#ifndef INORDERTRAVERSALNONRECURSIVE_H_INCLUDED
#define INORDERTRAVERSALNONRECURSIVE_H_INCLUDED
#include "Structure.h"
#include "PushStack.h"
#include "PopStack.h"


void InOrderTraversal(struct Node *node){
    struct Node *root = node;
    while(1){
        while(root != NULL){
            push(root);
            root = root->left;
        }
        root = pop();
        if(root){
            printf(" %d" , root->data);
        }

        //If stack gets empty it will move out the Outer Loop
        if(top == NULL && root == NULL){
            printf("\n\t Hello World!");
            break;
        }

        root = root->right;
    }
}

#endif // INORDERTRAVERSALNONRECURSIVE_H_INCLUDED
