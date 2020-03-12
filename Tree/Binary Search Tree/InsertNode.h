#ifndef INSERTNODE_H_INCLUDED
#define INSERTNODE_H_INCLUDED

void insertNode(struct BST *root , int data){
    struct BST *node = malloc(sizeof(struct BST));
    node->data = data;
    node->left = root->right = NULL;
    if(root == NULL){
        root = node ;
    }else{
        while(root)){
            if(root->left == NULL && root->right == NULL){
                if(root->data == NULL){
                    break;
                }else if(root->data < data){
                    root->right = node;
                    break;
                }else{
                    root->left = node;
                    break;
                }
            }else if(root->data < data){
                root = root->left;
            }else if(root->data > data){
                root = root->right;
            }
        }
    }

}



#endif // INSERTNODE_H_INCLUDED
