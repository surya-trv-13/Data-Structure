#ifndef ISEMPTY_H_INCLUDED
#define ISEMPTY_H_INCLUDED

#include "Structure.h"

int isEmpty(){
    if(top == NULL){
        return 1;
    }else{
        return 0;
    }
}



#endif // ISEMPTY_H_INCLUDED
