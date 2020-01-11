#include<iostream>
#include "ArrayCreation.h"
#include "Peek.h"
#include "Push.h"
#include "Pop.h"

using namespace std;

int main(){
    char ch,wish = 'y';

    do{
        cout<<"\n\tEnter your Choice";
        cout<<"\n\t\ta. PUSH";
        cout<<"\n\t\tb. POP";
        cout<<"\n\t\tc. PEEK";
        cout<<"\n\n\t\tYour Choice :";
        cin>>ch;
        switch(ch){
            case 'a' : stac.push();
                break;
            case 'b' : stac.pop();
                break;
            case 'c' : stac.peek();
                break;
            default  : cout<<"Enter a Valid Choice :";
                break;
        }
        cout<<"\n\tDo you want to do more operation :";
        cin>>wish;
    }while(wish == 'y' || wish == 'Y');
    return 0;
}
