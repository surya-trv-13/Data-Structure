#ifndef STACKSTRUCTURE_H_INCLUDED
#define STACKSTRUCTURE_H_INCLUDED
#include "Structure.h"

struct StackNode {
    struct Node *node;
    struct StackNode *next;
};

struct StackNode *top =  NULL;



#endif // STACKSTRUCTURE_H_INCLUDED
