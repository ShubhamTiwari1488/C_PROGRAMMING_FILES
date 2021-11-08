
#include <stdio.h>
#include<stdlib.h>

int node=1;

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

int CountNodes(struct node *root)
{
	if(root==NULL)
		return 0;
		
	if(root->l!=NULL)
	{
		node=node+1;
		node=CountNodes(root->l);
	}
	
	if(root->r!=NULL)
	{
		node=node+1;
		node=CountNodes(root->r);
	}
	
	return node;
}

int main()
{
    int n,data;
    int node;
    
    n=1;
    
    while(n)
    {
     printf("\nEnter data ");
     scanf("%d",&data);
     
     tree=addnode(tree,data);
     
     printf("\nDo you want to continue ");
     scanf("%d",&n);
    }
    
    node=CountNodes(tree);
    
    printf("\nThe total number of nodes are : %d\n",node);
    
    printf("\n");
    
    return 0;
    
}

