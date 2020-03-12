#ifndef INSERTNODE_H_INCLUDED
#define INSERTNODE_H_INCLUDED
#include "Structure.h"
#include <stdlib.h>

void insertNode(struct BST *root){
    struct BST *node = malloc(sizeof(struct BST));
    printf("\n\tEnter the Node :");
    scanf("%d", &node->data);
    node->left = node->right = NULL;

    if(root == NULL){
        root = node ;
    }else{
        struct BST *temporary = root;
        while(temporary){
            if(temporary->left == NULL && temporary->right == NULL){
                if(temporary->data == node->data){
                    break;
                }else if(temporary->data < node->data){
                    temporary->right = node;
                    break;
                }else{
                    temporary->left = node;
                    break;
                }
            }else if(temporary->data < node->data){
                temporary = temporary->left;
            }else if(temporary->data > node->data){
                temporary = temporary->right;
            }
        }
    }

}



#endif // INSERTNODE_H_INCLUDED
