#ifndef ISFULL_H_INCLUDED
#define ISFULL_H_INCLUDED
#include "ArrayCreate.h"

int Queue :: isFull(){
    if(que.rearSide == MAX_SIZE - 1){
        return 1;
    }else{
        return 0;
    }
}


#endif // ISFULL_H_INCLUDED
