#include<stdio.h>
#include "Structure.h"
#include "InsertQ.h"
#include "DeleteQ.h"
#include "Peek.h"

void main(){
    char wish = 'y',choice;
    do{
        printf("\n\tEnter Your Choice :"
            "\n\t\ta. INSERT"
            "\n\t\tb. DELETE"
            "\n\t\tc. PEEK"
            "\n\t\tYour Choice :");
        scanf("\n%c",&choice);
        switch(choice){
            case 'a' : insertQ();
                break;
            case 'b' : deleteQ();
                break;
            case 'c' : peekQ();
                break;
            default : printf("\n\tEnter a valid Choice !");
                break;
        }
        printf("\n\tDo You want to perform more operation :");
        scanf("\n%c",&wish);
    }while(wish == 'Y' || wish == 'y');
}
