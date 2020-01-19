#ifndef DELETEQ_H_INCLUDED
#define DELETEQ_H_INCLUDED
#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
#include "Structure.h"

void deleteQ(){
    if(frontSide == NULL){
        printf("\nUnderFlow");
    }else{
        struct Queue *temporary;
        temporary = frontSide;
        frontSide = frontSide->next;
        free(temporary);
    }

}


#endif // DELETEQ_H_INCLUDED
