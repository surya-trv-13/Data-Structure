#include<stdio.h>
#include "createNode.h"
void main(){
    char choice;
    int operation;

    createTree();
    printf("\n\t\t Enter the Operation :");
    printf("\n\n\t 1. Insert Node "
           "\n\t 2. Delete Node"
           "\n\t 3. Find Node"
           "\n\t 4. Find Maximum"
           "\n\t 5. Find Minimum"
           "\n\tYour Choice :");
    scanf("%d" , &operation);
    switch(operation){
        case 1 :
    }
}
