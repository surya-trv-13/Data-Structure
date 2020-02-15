#ifndef STRUCTURE_H_INCLUDED
#define STRUCTURE_H_INCLUDED

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};


struct Node *root = NULL;
#endif // STRUCTURE_H_INCLUDED
