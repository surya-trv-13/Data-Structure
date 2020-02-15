#include<stdio.h>
#include "CreateTree.h"
#include "Structure.h"
#include "InorderTraversal.h"

void main(){
    char choice;
    printf("\n\t******** Binary Tree ********");
    createTree();
    inorderTraversal(root);
    /*do{
            int ch;
            printf("\n\n\t1. Insert Node :"
                    "\n\t5. Peek Node");
            printf("\n\tEnter Your Choice :");
            switch(ch){
                case 1:
                    insertNode();
                    break;
                case 5 :
                    peek();
                    break;
                default :
                    printf("\n\tEnter a Valid Option :");
                    break;
            }
            printf("\n\tDo you want to do more operation ?\n(press N to abort) :");
            scanf(" %c", &ch);
    }while(choice != 'n' || ch != 'N');
    */
}
