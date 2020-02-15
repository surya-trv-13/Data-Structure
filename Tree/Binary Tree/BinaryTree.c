#include<stdio.h>
#include "CreateTree.h"
#include "Structure.h"
#include "InorderTraversal.h"
#include "PreOrderTraversal.h"
#include "PostOrderTraversal.h"

void main(){
    char choice;
    printf("\n\t******** Binary Tree ********");
    createTree();

    do{
            int ch;
            printf("\n\n\t1. Insert Node :"
                    "\n\t2. Delete Node"
                    "\n\t3. InOrder Traversal"
                    "\n\t4. Pre-Order Traversal"
                    "\n\t5. Post-Order Traversal"
                    "\n\t6. Searching");
            printf("\n\tEnter Your Choice :");
            scanf("%d" , &ch);
            switch(ch){
                case 1:
                    insertNode();
                    break;
                case 2 :
                    break;
                case 3 :
                    inorderTraversal(root);
                    break;
                case 4 :
                    preorderTraversal(root);
                    break;
                case 5 :
                    postorderTraversal(root);
                    break;
                default :
                    printf("\n\tEnter a Valid Option :");
                    break;
            }
            printf("\n\tDo you want to do more operation ?\n\t(press N to abort) :");
            scanf(" %c", &choice);
    }while(choice != 'n');

}
