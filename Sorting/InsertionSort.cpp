#include<iostream>

using namespace std;

int main(){
    int sizeOfArray;
    cout<<"\t*******INSERTION SORT********\n";
    cout<<"\tEnter the size of the Array :";
    cin>>sizeOfArray;
    int a[sizeOfArray];
    cout<<"\n\tEnter "<<sizeOfArray<<" elements in the array :";
    for(int i = 0; i < sizeOfArray; i++){
        cin>>a[i];
    }
    int temp , j ;
    for(int i = 1 ; i< sizeOfArray ; i++){
        temp = a[i];
        j = i-1;
        while((j >= 0) && (temp < a[j])){
                a[j+1] = a[j];
                a[j] = temp;
                j--;
        }
    }

    cout<<"\n\tSorted Array is ";
    for(int i = 0 ; i< sizeOfArray ; i++){
        cout<<a[i]<<" ";
    }
}
