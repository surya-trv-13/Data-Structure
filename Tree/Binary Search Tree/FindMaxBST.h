#ifndef FINDMAXBST_H_INCLUDED
#define FINDMAXBST_H_INCLUDED
#include "Structure.h"

int findMaximum(){
    struct BST *maxNode = root;

    while(maxNode){
        if(maxNode->right == NULL){
            return maxNode->data;
        }else{
            maxNode = maxNode->right;
        }
    }
}


#endif // FINDMAXBST_H_INCLUDED
