#ifndef ISFULL_H_INCLUDED
#define ISFULL_H_INCLUDED
#include "ArrayCreation.h"

int Stack :: isFull(){
    Stack stac;
    if(stac.top == MAX_SIZE){
        return 1;
    }else{
        return 0;
    }
}

#endif // ISFULL_H_INCLUDED
