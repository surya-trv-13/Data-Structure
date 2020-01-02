#include<stdio.h>
#include<stdlib.h>
#include "Structure.h"
#include "ShowList.h"
#include "createList.h"
#include "insertAtBeginning.h"
#include "insertAtEnd.h"
#include "DeleteAtFront.h"

void main(){
        int choice;
        char want;
        createList();
        do{
            printf("\n\t Enter you Choice :"
                "\n\t\t1. Show the List"
                "\n\t\t2. Insert at the Beginning"
                "\n\t\t3. Insert at the End"
                "\n\t\t4. Delete at the Beginning\n\tResponse :");
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
                default:
                    printf("\n\t Enter a valid choice !");
                    break;
            }
            printf("\n\t Enter Any key to do more operation (Press n to exit): ");
            scanf("\n%c",&want);
        }while(want != 'N' || want != 'n');
}
