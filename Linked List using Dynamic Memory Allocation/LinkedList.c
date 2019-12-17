#include<stdio.h>
#include "Structure.h"
#include "createLinkedList.h"
#include "ShowLinkedList.h"
#include "insertFromBegin.h"
#include "insertFromEnding.h"
#include "insertSpecificLocation.h"
#include "insertAfterSpecificNode.h"
#include "DeleteFromBegining.h"
#include "DeleteFromEnd.h"
#include "DeleteAtSpecificNode.h"
#include "DeleteAtSpecificLocation.h"
#include "sortingList.h"

void main(){
    char choice;
    int position; //for inserting at specific location in Linked List
    char wantMore;

    createList();
    do{
        printf("\nEnter your choice:"
               "\n\n\tA. Insert at Beginning"
               "\n\tB. Insert at End"
               "\n\tC. Insert at any specific location"
               "\n\tD. Insert After Specific node"
               "\n\tE. Delete from the Beginning"
               "\n\tF. Delete from the End"
               "\n\tG. Delete At Specific Location"
               "\n\tH. Delete At Specific Node"
               "\n\tI. Sort the LinkedList"
               "\n\tJ. Show the List\n\t Response:"
               );
        scanf("\n%c",&choice);
        switch(choice){
        case 'A':
            insertAtBegin();
            break;
        case 'B':
            insertAtEnding();
            break;
        case 'C':
            printf("\n Enter the position you want to enter the node : ");
            scanf("%d",&position);
            insertAtposition(position);
            break;
        case 'D':
            insertAfterNode();
            break;
        case 'J':
            showList();
            break;
        case 'E':
            deleteFromBegining();
            break;
        case 'F':
            deleteFromEnd();
            break;
        case 'G':
            printf("\n Enter the position you want to delete the node :");
            scanf("%d", &position);
            deleteSpecificLocation(position);
            break;
        case 'H':
            deleteAtSpecificNode();
            break;
        case 'I':
            sorting();
            break;
        default :
            printf("\n Enter a valid choice :");
            break;
        }
        printf("\n Do you want to perform more transactions ?");
        scanf(" %c",&wantMore);
    }while(wantMore!='n');
    showList();
}
