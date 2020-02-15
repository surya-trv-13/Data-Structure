#ifndef QUEUESTRUCTURE_H_INCLUDED
#define QUEUESTRUCTURE_H_INCLUDED
#include "Structure.h"

struct Queue {
    struct Node *node;
    struct Queue *next;
};

static struct Queue *front = NULL;
static struct Queue *rear = NULL;

#endif // QUEUESTRUCTURE_H_INCLUDED
