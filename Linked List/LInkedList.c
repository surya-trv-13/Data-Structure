#include<stdio.h>
#include<stdlib.h>

#define SIZE 100
#define True 1

struct LinkedList{
    int info,
        next;
};

struct LinkedList node[SIZE];   //Added 100 nodes of structure node.
int avail;

void initialise(){
    int index;
    avail = 0;

    for(index=0; index<SIZE-1; index++ ){
        node[index].next = index+1;     //each node will initialize with the next node's index.
    }
    node[SIZE-1].next = -1;     //Final node will be -1 which will detect Overflow condition.
}

int getNode(){                  // Getting Available node for inserting the data
    int q;
    if(avail == -1){
        printf("Over Flow !!");
        return -1;
    }
    q = avail;
    avail = node[q].next;

    return q;
}

void createList(){                // Initial creation of the list before doing any operation
    char wish;
    int info,nodePosition = 0;

    printf("\n Create a List Before Operation");
    do{
        printf("\n Enter the Info :");
        scanf("%d",&info);
        nodePosition = insertNode(info,nodePosition);
        node[nodePosition].next = -1;

        printf("\n Do You Want to Enter More Elements ? (y/n) :");
        scanf(" %c",&wish);
    }while(wish == 'Y' || wish == 'y');
}

int insertNode(int info,int nodePostion){       //Insert node code
    int q;
    q = getNode();

    node[q].info = info;
    node[q].next = node[nodePostion].next;
    node[nodePostion].next = q;
    return q;
}

void deleteNode(int position){                  //Deleting node code
    int q;
    position--;

    if(position == -1){
        printf("\n Underflow !!");
        return;
    }else if(node[position].next == -1){
        printf("\n Underflow !!");
        return;
    }
    q = node[position].next ;
    node[position].next = node[q].next;
    freeNode(q);
}

void freeNode(int position){                //Freeing the position from where the data has been deleted and added to available
    node[position].next = avail;
    avail = position;
    return;
}

void showNode(){                            // Displaying Nodes in the linked List
    int position = 0;
    printf("\n Position    Info    Next-Position");

    while(position != -1){
        printf("\n %d          %d          %d",position,node[position].info,node[position].next);

        position = node[position].next;
    }
}

void main(){
    char choice ,wish;
    int info,position;
    initialise();
    createList();
    do{
        printf("\n Enter your Choice : ");
        printf("\n I : Insert Node");
        printf("\n D : Delete Node");
        printf("\n S : Show List");
        scanf(" %c",&choice);
        switch(choice){
            case 'I' :
                printf("\n Enter the info you wanna Send?");
                scanf("%d",&info);
                printf("\n Enter the position you want to Enter :");
                scanf("%d", &position);
                position = insertNode(info,position);
                break;
            case 'D' :
                printf("\n Enter the position after which node should be deleted");
                scanf("%d",&position);
                deleteNode(position);
                break;
            case 'S' : showNode();
                break;
            case 'Q' :
                exit(0);
                break;
            default:
                printf("\n Sorry Wrong choice!");
                break;
            }

        printf("\n Do you want to operate more??");
        scanf(" %c",&wish);
    }while(wish=='Y' || wish=='y');

}
