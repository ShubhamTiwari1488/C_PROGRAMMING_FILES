

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

int maxDepth(struct node* node)
{
    if (node == NULL)
        return -1;
    
    else 
    {
        
        int lDepth = maxDepth(node->l);
        int rDepth = maxDepth(node->r);
 
        
        if (lDepth > rDepth)
            return (lDepth + 1);
        else
            return (rDepth + 1);
    }
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
    
    
    printf("\nThe depth of the tree is : %d\n",maxDepth(tree));
    
    printf("\n");
    
    return 0;
    
}

