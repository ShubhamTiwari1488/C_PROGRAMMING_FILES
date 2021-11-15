

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

int calculateSum(struct node *root)
{  
    int sum, sumLeft, sumRight;  
    
    sum = sumRight = sumLeft = 0;  
      
    
    if(tree == NULL) 
    {  
        printf("Tree is empty\n");  
        return 0;  
    }  
    
    else 
    {  
        
        if(root->l != NULL)  
            sumLeft = calculateSum(root->l);  
          
        
        if(root->r != NULL)  
              sumRight = calculateSum(root->r);  
          
        
        sum = root->val + sumLeft + sumRight;   
        return sum;  
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
    
    
    printf("\nThe sum of the total number of nodes is : %d\n",calculateSum(tree));
    
    printf("\n");
    
    return 0;
    
}

