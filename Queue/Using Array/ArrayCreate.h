#ifndef ARRAYCREATE_H_INCLUDED
#define ARRAYCREATE_H_INCLUDED
#define MAX_SIZE 100
class Queue{
        int frontSide,rearSide;
        int queueDS[MAX_SIZE];
    public :
        Queue(){
            frontSide = 0;
            rearSide = -1;
        }
        void insertQ();
        void deleteQ();
        void peekQ();
        int isEmpty();
        int isFull();
};

static Queue que;

#endif // ARRAYCREATE_H_INCLUDED
