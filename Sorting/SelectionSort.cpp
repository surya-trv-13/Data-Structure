#include<iostream>

using namespace std;

int main(){
    int sizeOfArray;
    cout<<"\t*******SELECTION SORT********\n";
    cout<<"\tEnter the size of the Array :";
    cin>>sizeOfArray;
    int a[sizeOfArray];
    cout<<"\n\tEnter "<<sizeOfArray<<" elements in the array :";
    for(int i = 0; i < sizeOfArray; i++){
        cin>>a[i];
    }

    int currentLarge = 0 , sortedPointer = sizeOfArray-1 , temp;
    while(sortedPointer >= 0){
            for(int i = 0 ; i <= sortedPointer ; i++){
                if(a[currentLarge] < a[i]){
                    currentLarge = i;
                }
            }
            temp = a[sortedPointer];
            a[sortedPointer] = a[currentLarge];
            a[currentLarge] = temp;
            sortedPointer--;
            currentLarge = 0;
    }

    cout<<"\n\tSorted Array is ";
    for(int i = 0 ; i< sizeOfArray ; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
