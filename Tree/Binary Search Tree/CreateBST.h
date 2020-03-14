#ifndef CREATENODE_H_INCLUDED
#define CREATENODE_H_INCLUDED
#include "InsertNode.h"
#include "Structure.h"

void createBST(){
    char choice;

    do{

        insertNode();

        printf("\n\t Do you want to enter more (Y/n)");
        scanf( " %c",&choice);
    }while(choice == 'y' || choice == 'Y');

}


#endif // CREATENODE_H_INCLUDED
