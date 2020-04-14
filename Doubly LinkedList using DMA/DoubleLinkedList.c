#include<stdio.h>
#include<stdlib.h>
#include "Structure.h"
#include "ShowList.h"
#include "createList.h"
#include "insertAtBeginning.h"
#include "insertAtEnd.h"
#include "DeleteAtFront.h"
#include "DeleteAtEnd.h"
#include "InsertAtSpecific.h"
#include "createCircularList.h"
#include "printCircular.h"

void main(){
        int choice;
        char want;
        int premiumChoice;

        printf("\n\n\tENTER YOUR CHOICE"
               "\n\t 1. Double Linked List"
               "\n\t 2. Circular Double LinkedList"
               "\n\tCHOICE :");
        scanf("%d", &premiumChoice);
        if(premiumChoice == 1){
            createList();
        do{
            printf("\n\t Enter you Choice :"
                "\n\t\t1. Show the List"
                "\n\t\t2. Insert at the Beginning"
                "\n\t\t3. Insert at the End"
                "\n\t\t4. Delete at the Beginning"
                "\n\t\t5. Delete at the End"
                "\n\t\t6. Insert at Specific List\n\tResponse :");
            scanf("%d",&choice);
            switch(choice){
                case 1:
                    showList();
                    break;
                case 2:
                    insertFront();
                    break;
                case 3:
                    insertBack();
                    break;
                case 4:
                    deleteFront();
                    break;
                case 5:
                    deleteBack();
                    break;
                case 6:
                    insertAtPosition();
                    break;
                default:
                    printf("\n\t Enter a valid choice !");
                    break;
            }
            printf("\n\t Enter Any key to do more operation (Press n to exit): ");
            scanf("%c",&want);
        }while(want != 'N' || want != 'n');
    }else{
       createCircularLL();
       printCircularLL();
    }


}
