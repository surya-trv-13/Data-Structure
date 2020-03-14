#ifndef FINDNODEBST_H_INCLUDED
#define FINDNODEBST_H_INCLUDED
#include "Structure.h"

int findNode(){
    int dataSearch;
    printf("\n\tEnter data you want to FIND :");
    scanf("%d", &dataSearch);

    struct BST *pointer = root;
    while(pointer){
        if(pointer->data == dataSearch){
            return 1;
        }
        else if(pointer->data < dataSearch){
            pointer = pointer->right;
        }else{
            pointer = pointer->left;
        }
    }
    return 0;
}




#endif // FINDNODEBST_H_INCLUDED
