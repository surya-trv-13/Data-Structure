#ifndef STRUCTURE_H_INCLUDED
#define STRUCTURE_H_INCLUDED

struct Queue{
    int info;
    struct Queue *next;
};

struct Queue *frontSide, *rearSide;
frontSide =  NULL;
rearSide = NULL;

#endif // STRUCTURE_H_INCLUDED
