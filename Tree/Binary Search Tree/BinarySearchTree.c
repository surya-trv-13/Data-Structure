#include<stdio.h>
#include "CreateBST.h"
#include "Structure.h"
#include "InsertNode.h"
#include "InOrderTraversal.h"

void main(){
    char choice;
    int operation;

    createBST();
    do{
        printf("\n\t Enter the Operation :");
        printf("\n\n\t 1. Insert Node "
           "\n\t 2. Delete Node"
           "\n\t 3. Find Node"
           "\n\t 4. Find Maximum"
           "\n\t 5. Find Minimum"
           "\n\t 6. Traverse in InOrder"
           "\n\tYour Choice :");
        scanf("%d" , &operation);
        switch(operation){
            case 1 :
                insertNode();
                break;
            case 6 :
                printf("\n\tInOrder Traversal :");
                inorderTraversal(root);
                break;
            default :
                printf("\n\tEnter the Valid Operation :");
                break;
        }
        printf("\n\tDo you want more Operation (y/n)");
        scanf(" %c",&choice);
    }while(choice != 'n');

}
