#ifndef INORDERTRAVERSAL_H_INCLUDED
#define INORDERTRAVERSAL_H_INCLUDED
#include <stdio.h>
#include "Structure.h"

void inorderTraversal(struct Node *node){

    if(node == NULL)
        return;

    inorderTraversal(node->left);
    printf(" %d" , node->data);
    inorderTraversal(node->right);
}


#endif // INORDERTRAVERSAL_H_INCLUDED
