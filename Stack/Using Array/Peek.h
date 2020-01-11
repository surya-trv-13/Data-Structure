#ifndef PEEK_H_INCLUDED
#define PEEK_H_INCLUDED
#include<iostream>

using namespace std;

#include "ArrayCreation.h"
#include "IsEmpty.h"

void Stack :: peek(){
    int peekABoo;
    if(stac.isEmpty()){
        cout<<"\n\tUnderFLow !!!";
        return;
    }else{
        cout<<"\n\t\tTOP";
        for(peekABoo = stac.top ; peekABoo >= 0 ; peekABoo--){
            cout<<"==> "<<stac.items[peekABoo];

        }
    }
}


#endif // PEEK_H_INCLUDED
