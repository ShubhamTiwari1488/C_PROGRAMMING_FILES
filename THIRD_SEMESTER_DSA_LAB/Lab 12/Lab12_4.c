
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

int largest(struct node *t)
{
    if (t->r != NULL)
    {
        return(largest(t->r));
    }
    else    
        return(t->val);
}

int main()
{
    int n,data;
    int large;
    
    n=1;
    
    while(n)
    {
     printf("\nEnter data ");
     scanf("%d",&data);
     
     tree=addnode(tree,data);
     
     printf("\nDo you want to continue ");
     scanf("%d",&n);
    }
     
    large=largest(tree);
    
    printf("\nThe largest element is : %d\n",large);
    
    printf("\n");
    
    return 0;
    
}

