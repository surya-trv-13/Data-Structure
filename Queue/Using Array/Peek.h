#ifndef PEEK_H_INCLUDED
#define PEEK_H_INCLUDED

#include<iostream>
using namespace std;

#include "ArrayCreate.h"
#include "isEmpty.h"

void Queue :: peekQ(){
    if(que.isEmpty()){
        cout<<"\nUnderFlow !!";
        return;
    }else{
        int i ;
        cout<<"\n\t\tFRONT";
        for(i = frontSide ; i <= rearSide ; i++){
            cout<<"==>"<<que.queueDS[i];
        }
        cout<<"==> REAR";
    }
}




#endif // PEEK_H_INCLUDED
