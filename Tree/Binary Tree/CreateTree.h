#ifndef CREATETREE_H_INCLUDED
#define CREATETREE_H_INCLUDED
#include "InsertNode.h"

void createTree(){
    char choice;
    do{
        insertNode();
        printf("\n\tDo you want to enter more :");
        scanf("\n%c", &choice);
    }while(choice == 'y' || choice == 'Y');
}


#endif // CREATETREE_H_INCLUDED
