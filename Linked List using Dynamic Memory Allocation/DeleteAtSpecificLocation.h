#ifndef DELETEATSPECIFICLOCATION_H_INCLUDED
#define DELETEATSPECIFICLOCATION_H_INCLUDED
#include"Structure.h"
#include"CountNodes.h"

void deleteSpecificLocation(int position){
    int c = countNodes(start);
    int i = 0;
    if(c >= position){
        struct LinkedList *node = start, *temporary;
        for(i = 1 ; i < position-1 ; i++ ){
            node = node->next;
        }
        temporary = node->next;
        node-> next = temporary-> next;
        free(temporary);
        return;
    }else if(start == NULL || c < position){
        printf("\n The position exceeds the length of the array !");
        return;
    }
}

#endif // DELETEATSPECIFICLOCATION_H_INCLUDED
