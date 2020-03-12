#ifndef CREATENODE_H_INCLUDED
#define CREATENODE_H_INCLUDED

void createNode(){
    char choice;

    do{
        printf("\n\tEnter the Node :");
        scanf("%d", &data);
        insertNode(root , data);

        printf("\n\t Do you want to enter more (Y/n)");
        scanf( " %d",&choice);
    }while(choice == 'y')

}


#endif // CREATENODE_H_INCLUDED
