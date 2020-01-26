#include<stdio.h>
#include "Structure.h"
#include "createLinkedList.h"
#include "ShowLinkedList.h"
#include "CountNodes.h"

void main(){
    createList();

    //Play with 3 pointers one the current node , next on the previous and one next to the current.

    struct LinkedList *prev, *curr = start , *temp , *tempPrev ;
    int i;
    int count = countNodes(curr);
    int mid = count / 2;

    curr = start;
    for(i = 0 ; i < mid ; i++){
        tempPrev = curr;
        curr = curr->next;
    }

    struct LinkedList *storeMidNode = curr;
    temp = curr->next;
    while(temp != NULL){
        if(curr->next == NULL){
            break;
        }else{
            prev = curr;
            curr = temp;
            temp = temp->next;
            curr->next = prev;
        }
    }
    storeMidNode->next = NULL;
    tempPrev->next = curr;
    printf("\n\tReverse Of the Linked List :");
    showList();
}
