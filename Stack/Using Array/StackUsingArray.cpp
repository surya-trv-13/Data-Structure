#include<iostream>
#include "ArrayCreation.h"
#include "IsEmpty.h"

using namespace std;

int main(){
    Stack stac;
    char ch,wish = 'y';


    do{
        cout<<"\n\tEnter your Choice";
        cout<<"\n\t\t1. PUSH";
        cout<<"\n\t\t1. POP";
        cout<<"\n\t\t1. PEEK";
        cout<<"\n\n\t\tYour Choice :";
        cin>>ch;
        switch(ch){
            case 'a' : push();
                break;
            case 'b' : pop();
                break;
            case 'c' : peek();
                break;
            default  : cout<<"Enter a Valid Choice :"
                break;
        }
        cout<<"\n\tDo you want to do more operation :";
        cin>>wish;
    }while(wish == 'y' || wish == 'Y');
    return 0;
}
