#include<stdio.h>
#include "Structure.h"
#include "createLinkedList.h"
#include "ShowLinkedList.h"
#include "insertFromBegin.h"

void main(){
    int choice;
    char wantMore;

    createList();
    do{
        printf("\nEnter your choice: \n\n\t1. Insert at Beginning \n\t2. Show the List\n\t Response:");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            insertAtBegin();
            break;
        case 2:
            showList();
            break;
        default :
            printf("\n Enter a valid choice :");
            break;
        }
        printf("\n Do you want to perform more transactions ?");
        scanf(" %c",&wantMore);

    }while(wantMore!='n' || wantMore!='N');
    showList();
}
