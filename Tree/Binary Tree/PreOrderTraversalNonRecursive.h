#ifndef PREORDERTRAVERSALNONRECURSIVE_H_INCLUDED
#define PREORDERTRAVERSALNONRECURSIVE_H_INCLUDED
#include "PushStack.h"
#include "PopStack.h"
#include "Structure.h"

void PreOrderTraversal(struct Node *node){
    struct Node *root = node;
    while(1){
        while(root !=  NULL){
            printf("%d " , root->data);

            push(root);
            root = root->left;
        }
        //Exit Outer While loop if Stack is Empty
        if(top == NULL){
            break;
        }

        root = pop();
        root = root->right;
    }
}


#endif // PREORDERTRAVERSALNONRECURSIVE_H_INCLUDED
