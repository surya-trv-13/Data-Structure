#ifndef ISEMPTY_H_INCLUDED
#define ISEMPTY_H_INCLUDED
#include "ArrayCreation.h"

int Stack :: isEmpty(){

    if(stac.top == -1){
        return 1;
    }else{
        return 0;
    }
}



#endif // ISEMPTY_H_INCLUDED
