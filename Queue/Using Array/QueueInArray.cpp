#include<iostream>
#include "ArrayCreate.h"
#include "Insert.h"
#include "Delete.h"
#include "Peek.h"

using namespace std;

int main(){
    char choice, wish = 'y';
    do{
        cout<<"\n\tEnter your Choice"
            <<"\n\t\ta. INSERT"
            <<"\n\t\tb. DELETE"
            <<"\n\t\tc. PEEK"
            <<"\n\t\tYour Choice : ";
        cin>>choice;
        switch(choice){
            case 'a' : que.insertQ();
                break;
            case 'b' : que.deleteQ();
                break;
            case 'c' : que.peekQ();
                break;
            default : cout<<"\n\t\tEnter a valid choice !!";
                break;
        }
        cout<<"\n\tDo you want to do more operation :";
        cin>>wish;
    }while(wish == 'y' || wish == 'Y');
}
