#ifndef DELETE_H_INCLUDED
#define DELETE_H_INCLUDED

#include<iostream>
using namespace std;

#include "ArrayCreate.h"
#include "IsEmpty.h"

void Queue :: deleteQ(){
    if(que.isEmpty()){
        cout<<"\n\t\tUnderFlow!";
        return;
    }else{
        cout<<"\n\t\tValue Popped : "<<que.queueDS[que.frontSide];
        que.frontSide++;
    }
}



#endif // DELETE_H_INCLUDED
