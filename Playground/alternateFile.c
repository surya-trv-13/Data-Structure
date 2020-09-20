#include<stdio.h>

void main(){
    int array[5];

    for(int i = 0 ; i < 6 ; i++){
        scanf("%d", &array[i]);
    }
    
    for(int i = 0 ; i < 6 ; i++){
        printf("%d", array[i]); 
    }
}