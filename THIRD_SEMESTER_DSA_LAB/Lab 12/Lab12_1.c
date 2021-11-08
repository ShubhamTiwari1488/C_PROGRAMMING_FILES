
#include <stdio.h>
#include<stdlib.h>

struct node
{
    int val;
    struct node *l;
    struct node *r;
};

struct node *tree=NULL;

struct node *addnode(struct node *tree,int data)
{
    struct node *ptr,*child,*parent;
    
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->val=data;
    ptr->l=NULL;
    ptr->r=NULL;
    
    if(tree==NULL)
    {
        tree=ptr;
        tree->l=NULL;
        tree->r=NULL;
    }
    
    else
    {
        parent=NULL;
        child=tree;
        while(child!=NULL)
        {
            parent=child;
            
        if(data<child->val)
            child=child->l;
        else
            child=child->r;
        }
    
     if(data<parent->val)
        parent->l=ptr;
     else
        parent->r=ptr;
    }
    return tree;
}

void inorder(struct node *t)
{
    if (tree == NULL)
    {
        printf("No elements in a tree to display");
        return;
    }
    
    if (t->l != NULL)    
        inorder(t->l);
        
    printf("%d -> ", t->val);
    
    if (t->r != NULL)    
        inorder(t->r);
}


int main()
{
    int n,data;
    
    n=1;
    
    while(n)
    {
     printf("\nEnter data ");
     scanf("%d",&data);
     
     tree=addnode(tree,data);
     
     printf("\nDo you want to continue ");
     scanf("%d",&n);
    }
     
    printf("\nThe inorder traversal will be :\t"); 
    inorder(tree);
    
    printf("\n");
    
    return 0;
    
}

