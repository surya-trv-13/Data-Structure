#ifndef ARRAYCREATION_H_INCLUDED
#define ARRAYCREATION_H_INCLUDED
#define MAX_SIZE 100

class Stack{

        int items[MAX_SIZE];
        int top;
    public :
        Stack(){
            top = -1;
        }
        void push();
        void pop();
        void peek();
        int isEmpty();
        int isFull();
};

static Stack stac;

#endif // ARRAYCREATION_H_INCLUDED
