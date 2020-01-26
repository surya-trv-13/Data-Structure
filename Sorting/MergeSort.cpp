#include<iostream>


using namespace std;

void merge(int a[] , int initial , int mid , int rear );

void mergeSort(int a[] , int initial , int rear){
    int mid;
    if(initial < rear){
        mid = (initial + rear)/2;

        mergeSort(a , initial , mid);
        mergeSort(a , mid+1 , rear);
        merge(a , initial , mid , rear);
    }
}

void merge(int a[] , int initial , int mid , int rear){

    int b[20] , in , re , i;
    in = initial;
    re = mid+1;
    i = initial;
    cout<<"\n\tMerge Called !!"<<initial<<" "<<mid<<" "<<rear;
    while((in <= mid) && (re <= rear)){
        if(a[in] < a[re]){
            b[i] = a[in];
            in++;
            i++;
        }else{
            b[i] = a[re];
            re++;
            i++;
        }
    }
    while(in <= mid){
        b[i] = a[in];
        in++;
        i++;
    }
    while(re <= rear){
        b[i] = a[re];
        re++;
        i++;
    }
    for(int j = initial ; j < rear+1 ; j++){
        a[j] = b[j];
        cout<<"\n\t\t a["<<j<<"] = "<<a[j];
    }

}

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

    mergeSort(a , 0 , sizeOfArray-1);

    cout<<"\n\tSorted Array :";
    for(int i = 0 ; i< sizeOfArray ; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
