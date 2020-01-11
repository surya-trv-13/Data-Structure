#include<stdio.h>
#include "Structure.h"
#include "Push.h"
#include "Pop.h"
#include "Peek.h"

void main(){
    char wish = 'y',choice;
    do{
        printf("\n\tEnter Your Choice :"
            "\n\t\ta.PUSH"
            "\n\t\tb.POP"
            "\n\t\tc.PEEK"
            "\n\t\tYour Choice :");
        scanf("\n%c",&choice);
        switch(choice){
            case 'a' : push();
                break;
            case 'b' :pop();
                break;
            case 'c' :peek();
                break;
            default : printf("\n\tEnter a valid Choice !");
                break;
        }
        printf("\n\tDo You want to perform more operation :");
        scanf("\n%c",&wish);
    }while(wish == 'Y' || wish == 'y');
}
