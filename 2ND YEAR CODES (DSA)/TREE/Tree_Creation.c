
// CREATING A TREE USING LINKED LIST

#include<stdio.h>
#include<stdlib.h>

struct node 
{
 int data;
 
 struct node *left;
 struct node *right;
};

struct node *create();

int main()
{
 struct node *root=NULL;
 
 root=create();
 
 return 0;
}

struct node *create()
{
 struct node *newnode;
 
 int x;
 
 newnode=(struct node *)malloc(sizeof(struct node));
 
 printf("\nEnter the data (-1 for NO node)");
 
 scanf("%d",&x);
 
 if(x==-1)
  return NULL;
  
 newnode->data=x;
 
 printf("\nEnter the left child of %d ",x);
 
 newnode->left=create();
 
 printf("\nEnter the right child of %d ",x);
 
 newnode->right=create();
 
 return newnode;
}
    
