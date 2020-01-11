#ifndef PUSH_H_INCLUDED
#define PUSH_H_INCLUDED
#include<iostream>

using namespace std;

#include "ArrayCreation.h"
#include "IsFull.h"

void Stack :: push(){
    if(stac.isFull()){
        cout<< "\n\t Over FLoW!!";
        return;
    }else{
        int value;
        cout<<"\n\tEnter the value you want to push :";
        cin>>value;

        stac.items[++top] = value;
    }
}



#endif // PUSH_H_INCLUDED
