#ifndef POSTORDERTRAVERSALNONRECURSIVE_H_INCLUDED
#define POSTORDERTRAVERSALNONRECURSIVE_H_INCLUDED
#include "PushStack.h"
#include "PopStack.h"
#include "Structure.h"

void PostOrderTraversal(struct Node *node){
    struct Node *root = node;
    int flag = 0;
    while(1){
        while(root){
            push(root);
            root = root->left;
        }
        if(top == NULL){
            break;
        }


        root = pop();

        if(root-> right == NULL){
            printf(" %d" , root->data);
            root = root->right;
        }else if(root->right != NULL && i == 0){
            push(root);
            root = root->right;
            flag = 1;
        }else if(root->right != NULL && i == 1){
            printf(" %d", root->data);
            root = NULL;
            flag = 0;
        }
    }
}


#endif // POSTORDERTRAVERSALNONRECURSIVE_H_INCLUDED
