#include <iostream>

using namespace std;

int partition(int a[] , int p , int r){
    int i = p-1;
    int j = r+1;
    int x = a[p];
    int temp;

    while(1){
        do{
            ++i;
        }while(a[i] < x);

        do{
            --j;
        }while(a[j] > x);

        if(i < j){
            temp = a[i];
            a[i]= a[j];
            a[j] = temp;
        }
        else{
        cout<<"\n\t Inside Partition :";
        for(int i = p ; i <= r ; i++){
            cout<<a[i]<<" ";
        }
         return(j);
        }
    }

}

void quickSort(int a[] , int p , int r){
    int q;
    if(p < r){
        q = partition(a , p , r);

        cout<<"\n\tp = "<<p<<"\t q = "<<q;
        quickSort(a, p ,q);
        cout<<"\n\tq+1 = "<<q+1<<"\t r = "<<r;
        quickSort(a , q+1 , r);
    }
}

int main(){
    int sizeOfArray;
    cout<<"\t*******QUICK SORT********\n";
    cout<<"\tEnter the size of the Array :";
    cin>>sizeOfArray;
    int a[sizeOfArray];
    cout<<"\n\tEnter "<<sizeOfArray<<" elements in the array :";
    for(int i = 0; i < sizeOfArray; i++){
        cin>>a[i];
    }

    quickSort(a , 0 , sizeOfArray-1);

    cout<<"\n\tSorted Array is ";
    for(int i = 0 ; i< sizeOfArray ; i++){
        cout<<a[i]<<" ";
    }

    return 0;
}
