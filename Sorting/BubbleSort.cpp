#include<iostream>

using namespace std;

int main(){
    int sizeOfArray , temporary;
    cout<<"\t******BUBBLE SORT*******\n";
    cout<<"\tEnter the size of the Array :";
    cin>>sizeOfArray;
    int a[sizeOfArray];
    cout<<"\n\tEnter "<<sizeOfArray<<" elements in the array :";
    for(int i = 0; i < sizeOfArray; i++){
        cin>>a[i];
    }

    for(int i = 0 ; i < sizeOfArray ; i++ ){

        for(int j = 0 ; j < sizeOfArray - i  ; j++ ){

            if(a[j] > a[j+1]){
                temporary = a[j];
                a[j] = a[j+1];
                a[j+1] = temporary;

            }
        }
    }
    cout<<"\n\tSorted Array :";
    for(int i = 0 ; i< sizeOfArray ; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
