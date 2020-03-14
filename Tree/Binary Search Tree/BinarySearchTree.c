#include<stdio.h>
#include "CreateBST.h"
#include "Structure.h"
#include "InsertNode.h"
#include "InOrderTraversal.h"
#include "FindNodeBST.h"
#include "FindMaxBST.h"
#include "FindMinBST.h"

void main(){
    char choice;
    int operation , res;

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
            case 3 :
                res = findNode();
                if(res == 0){
                    printf("\n\tItem not Found");
                }else{
                    printf("\n\tItem Found!!!");
                }
                break;
            case 4 :
                res = findMaximum();
                printf("\n\tMaximum Value in Tree is %d" , res);
                break;
            case 5 :
                res = findMinimum();
                printf("\n\tMinimum Value in Tree is %d" , res);
                break;
            default :
                printf("\n\tEnter the Valid Operation :");
                break;
        }
        printf("\n\tDo you want more Operation (y/n)");
        scanf(" %c",&choice);
    }while(choice != 'n');

}
