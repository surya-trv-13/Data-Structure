#include<stdio.h>
#include "CreateTree.h"
#include "Structure.h"
#include "InorderTraversal.h"
#include "PreOrderTraversal.h"
#include "PostOrderTraversal.h"
#include "PreOrderTraversalNonRecursive.h"
#include "PostOrderTraversalNonRecursive.h"
#include "InorderTraversalNonRecursive.h"

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
                    "\n\t6. InOrder Traversal Non-Recursive"
                    "\n\t7. PreOrder Traversal Non-Recursive"
                    "\n\t8. PostOrder Traversal Non-Recursive"
                    "\n\t9. Searching");
            printf("\n\tEnter Your Choice :");
            scanf("%d" , &ch);
            switch(ch){
                case 1:
                    insertNode();
                    break;
                case 2 :
                    break;
                case 3 :
                    printf("\n\t InOrder Traversal :");
                    inorderTraversal(root);
                    break;
                case 4 :
                    printf("\n\t PreOrder Traversal :");
                    preorderTraversal(root);
                    break;
                case 5 :
                    printf("\n\tPost Order Traversal :");
                    postorderTraversal(root);
                    break;
                case 7 :
                    printf("\n\t PreOrder Traversal (Non - Recursive):");
                    PreOrderTraversal(root);
                    break;
                case 6 :
                    printf("\n\t InOrder Traversal (Non - Recursive):");
                    InOrderTraversal(root);
                    break;
                case 8 :
                    printf("\n\t PostOrder Traversal (Non - Recursive):");
                    PostOrderTraversal(root);
                    break;
                default :
                    printf("\n\tEnter a Valid Option :");
                    break;
            }
            printf("\n\tDo you want to do more operation ?\n\t(press N to abort) :");
            scanf(" %c", &choice);
    }while(choice != 'n');

}
