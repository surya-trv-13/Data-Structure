#ifndef STRUCTURE_H_INCLUDED
#define STRUCTURE_H_INCLUDED

struct BST{
    int data;
    struct BST *right;
    struct BST *left;
};

static struct BST *root = NULL;

#endif // STRUCTURE_H_INCLUDED
