#ifndef STRUCTURE_H_INCLUDED
#define STRUCTURE_H_INCLUDED
struct DoublyLinkedList {
     struct DoublyLinkedList *prev;
     int info;
     struct DoublyLinkedList *next;
}*start;

struct DoublyLinkedList *start = NULL;


#endif // STRUCTURE_H_INCLUDED
