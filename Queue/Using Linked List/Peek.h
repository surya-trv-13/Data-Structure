#ifndef PEEK_H_INCLUDED
#define PEEK_H_INCLUDED
#include<stdio.h>
#include "Structure.h"

void peekQ(){
    struct Queue *peekObj;
    peekObj = frontSide;
    printf("\n\t\tFRONT -->");
    while(peekObj != rearSide->next){
            printf("%d -->",peekObj->info);
            peekObj = peekObj->next;
    }
    printf("REAR");
}

#endif // PEEK_H_INCLUDED
