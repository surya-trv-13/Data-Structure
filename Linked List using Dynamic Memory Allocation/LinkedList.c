#include<stdio.h>
#include "Structure.h"
#include "createLinkedList.h"
#include "ShowLinkedList.h"
#include "insertFromBegin.h"
#include "insertFromEnding.h"
#include "insertSpecificLocation.h"

void main(){
    int choice;
    int position; //for inserting at specific location in Linked List
    char wantMore;

    createList();
    do{
        printf("\nEnter your choice: \n\n\t1. Insert at Beginning \n\t2. Insert at End \n\t3. Insert at any specific location \n\t4. Show the List\n\t Response:");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            insertAtBegin();
            break;
        case 2:
            insertAtEnding();
            break;
        case 3:
            printf("\n Enter the position you want to enter the node : ");
            scanf("%d",&position);
            insertAtposition(position);
            break;
        case 4:
            showList();
            break;
        default :
            printf("\n Enter a valid choice :");
            break;
        }
        printf("\n Do you want to perform more transactions ?");
        scanf(" %c",&wantMore);
        printf("%c",wantMore);

    }while(wantMore!='n' || wantMore!='N');
    showList();
}
