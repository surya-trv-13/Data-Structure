#ifndef SEARCHING_H_INCLUDED
#define SEARCHING_H_INCLUDED

#include "Structure.h"
#include "PushStack.h"
#include "PopStack.h"


int SearchingNode(struct Node *node ){
    struct Node *root = node;
    int DataSearch;
    printf("\n\tEnter the Data you want to Search :");
    scanf("%d" , &DataSearch);
    while(1){
        while(root != NULL){
            push(root);
            root = root->left;
        }
        root = pop();
        if(root){
            if(root->data == DataSearch){
                return 1;
            }
        }

        //If stack gets empty it will move out the Outer Loop
        if(top == NULL && root == NULL){
            break;
        }

        root = root->right;
    }
    return 0;
}


#endif // SEARCHING_H_INCLUDED
