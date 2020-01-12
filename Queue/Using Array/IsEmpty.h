#ifndef ISEMPTY_H_INCLUDED
#define ISEMPTY_H_INCLUDED
#include "ArrayCreate.h"


int Queue :: isEmpty(){
    if(que.frontSide > que.rearSide){
        return 1;
    }else{
        return 0;
    }
}


#endif // ISEMPTY_H_INCLUDED
