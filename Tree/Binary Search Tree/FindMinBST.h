#ifndef FINDMINBST_H_INCLUDED
#define FINDMINBST_H_INCLUDED
#include "Structure.h"

int findMinimum(){
    struct BST *minNode = root;

    while(minNode){
        if(minNode->left == NULL){
            return minNode->data;
        }else{
            minNode = minNode->left;
        }
    }
    return -1;
}

#endif // FINDMINBST_H_INCLUDED
