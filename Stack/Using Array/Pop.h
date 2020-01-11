#ifndef POP_H_INCLUDED
#define POP_H_INCLUDED
#include<iostream>

using namespace std;

#include "ArrayCreation.h"
#include "IsEmpty.h"

void Stack :: pop(){
    if(stac.isEmpty()){
        cout<<"\n\t UnderFloW!!!";
        return;
    }else{
        cout<<"\n\tItem Popped is "<<stac.items[top];
        top--;
    }
}

#endif // POP_H_INCLUDED
