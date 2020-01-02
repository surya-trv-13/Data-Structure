#include<stdio.h>
#include<stdlib.h>
#include "Structure.h"
#include "ShowList.h"
#include "createList.h"
#include "insertAtBeginning.h"
#include "insertAtEnd.h"

void main(){
        int choice;
        char want;
        createList();
        do{
            printf("\n\t Enter you Choice :"
                "\n\t\t1. Show the List"
                "\n\t\t2. Insert At the Beginning"
                "\n\t\t3. Insert at the End\n\tResponse :");
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
                default:
                    printf("\n\t Enter a valid choice !");
                    break;
            }
            printf("\n\t Enter Any key to do more operation (Press n to exit): ");
            scanf("\n%c",&want);
        }while(want != 'N' || want != 'n');
}
