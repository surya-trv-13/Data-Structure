#ifndef INSERT_H_INCLUDED
#define INSERT_H_INCLUDED

#include<iostream>
using namespace std;

#include "ArrayCreate.h"
#include "IsFull.h"

void Queue :: insertQ(){
    if(que.isFull()){
        cout<<"\n\tOvErFlOw!!";
        return;
    }else{
        cout<<"\n\t\tEnter the item you want to Insert :";
        cin>>que.queueDS[++que.rearSide];
    }
}


#endif // INSERT_H_INCLUDED
