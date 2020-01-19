#ifndef INSERTQ_H_INCLUDED
#define INSERTQ_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>
#include "Structure.h"

void insertQ(){
    struct Queue *current,*temporary;
    current = malloc(sizeof(struct Queue));
    printf("\n\tEnter the info you want to push :");
    scanf("%d", &current->info);

    if(frontSide ==  NULL){
        frontSide = current;
        rearSide = current;
        current->next = NULL;
    }else{
        temporary = rearSide;
        temporary->next = current;
        rearSide = rearSide->next;
    }
}

#endif // INSERTQ_H_INCLUDED
