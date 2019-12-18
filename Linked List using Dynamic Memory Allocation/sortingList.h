#ifndef SORTINGLIST_H_INCLUDED
#define SORTINGLIST_H_INCLUDED
#include "Structure.h"
#include "stdio.h"

void sorting(){
    int temporary;
    struct LinkedList *node = start;
    struct LinkedList *checker;
    while(node->next != NULL){
        checker = node->next;
        while(checker->next != NULL){
            if(checker->info < node->info){
                temporary = checker->info;
                checker->info = node->info;
                node->info = temporary;
            }
            checker = checker->next;
        }
        //Managing the corner case
        if(checker->info < node->info){
            temporary = checker->info;
            checker->info = node->info;
            node->info = temporary;
        }
        node = node->next;
    }
    return;
}


#endif // SORTINGLIST_H_INCLUDED
