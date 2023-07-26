//Binary tree;

#include <stdio.h>
#include <stdlib.h>
int main() {
    
    struct binarytree{
        struct binarytree *left;
        int data;
        struct binarytree *right;
    };
    
    struct binarytree *root=NULL;

    struct binarytree * create(){
        
        int x;
        scanf("%d",&x);
        
        if(x==0){
            return NULL;
        }
        
        struct binarytree *newnodetree;
        newnodetree=(struct binarytree *)malloc(sizeof(struct binarytree));
        
        newnodetree->data=x;
        
        printf("Enter the left child");
        newnodetree->left=create();
        
        printf("Enter the right child");
        newnodetree->right=create();
        
        return newnodetree;
        
    }  
    
    root=create();
    
    struct binarytree * traversalofbinarytree(struct binarytree *root){
        
        struct binarytree *temp;
        temp=root;
        
        if(temp==NULL){
             return NULL; 
        }
        printf("%d ",root->data);
        traversalofbinarytree(temp->left);
        traversalofbinarytree(temp->right);
    }    
    
    traversalofbinarytree(root);
    
    printf("\n");
    
    //Leaf nodes in a tree
    struct binarytree * listofleafnodes(struct binarytree *root){
        
        struct binarytree *temp;
        temp=root;
        
        if(temp==NULL){
            return NULL;
        }
        
        if(temp->left==NULL && temp->right==NULL){
            printf("%d ",temp->data);
        }
        listofleafnodes(temp->left);
        listofleafnodes(temp->right);
    }
    
    listofleafnodes(root);
    
}
