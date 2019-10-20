#ifndef STRUCTURE_H_INCLUDED
#define STRUCTURE_H_INCLUDED
#include<stdio.h>
struct LinkedList{
    int info;
    struct LinkedList *next;
}*start;

struct LinkedList *start = NULL;


#endif // STRUCTURE_H_INCLUDED
