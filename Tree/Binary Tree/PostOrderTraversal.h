#ifndef POSTORDERTRAVERSAL_H_INCLUDED
#define POSTORDERTRAVERSAL_H_INCLUDED
#include <stdio.h>
#include "Structure.h"

void postorderTraversal(struct Node *node){

    if(node == NULL)
        return;

    postorderTraversal(node->left);
    postorderTraversal(node->right);
    printf(" %d", node->data);
}



#endif // POSTORDERTRAVERSAL_H_INCLUDED
