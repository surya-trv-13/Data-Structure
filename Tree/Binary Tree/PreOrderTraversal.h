#ifndef PREORDERTRAVERSAL_H_INCLUDED
#define PREORDERTRAVERSAL_H_INCLUDED
#include <stdio.h>
#include "Structure.h"

void preorderTraversal(struct Node *node){

    if(node == NULL)
        return;
    printf(" %d" , node->data);
    preorderTraversal(node->left);
    preorderTraversal(node->right);
}



#endif // PREORDERTRAVERSAL_H_INCLUDED
