#ifndef INORDERTRAVERSAL_H_INCLUDED
#define INORDERTRAVERSAL_H_INCLUDED
#include <stdio.h>
#include "Structure.h"

void inorderTraversal(struct Node *root){
    inorderTraversal(root->left);
    printf(" %d" , root->data);
    inorderTraversal(root->right);
}


#endif // INORDERTRAVERSAL_H_INCLUDED
