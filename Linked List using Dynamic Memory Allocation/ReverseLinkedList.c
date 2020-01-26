#include<stdio.h>
#include "Structure.h"
#include "createLinkedList.h"
#include "ShowLinkedList.h"

void main(){
    createList();

    //Play with 3 pointers one the current node , next on the previous and one next to the current.

    struct LinkedList *prev, *curr = start , *temp = start->next;
    while(temp != NULL){
        if(start->next == NULL){
            break;
        }else{
            prev = curr;
            curr = temp;
            temp = temp->next;
            curr->next = prev;
        }
    }
    start->next = NULL;
    start = curr;
    printf("\n\tReverse Of the Linked List :");
    showList();
}
