
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

void preorder(struct node *t)
{
    if (tree == NULL)
    {
        printf("No elements in a tree to display");
        return;
    }
    
    printf("%d -> ", t->val);
    
    if (t->l != NULL)    
        preorder(t->l);
        
    if (t->r != NULL)    
        preorder(t->r);
}

void postorder(struct node *t)
{
    if (tree == NULL)
    {
        printf("No elements in a tree to display ");
        return;
    }
    if (t->l != NULL) 
        postorder(t->l);
        
    if (t->r != NULL) 
        postorder(t->r);
        
    printf("%d -> ", t->val);
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
     
    printf("\nThe preorder traversal will be :\t"); 
    preorder(tree);
    
    printf("\n");
    
    printf("\nThe postorder traversal will be :\t");
    postorder(tree);
    
    printf("\n");
    
    return 0;
    
}

