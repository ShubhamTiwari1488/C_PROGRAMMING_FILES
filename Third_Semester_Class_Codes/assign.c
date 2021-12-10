#include <stdio.h> 
#include <stdlib.h>

 struct node
{
  int data;
  struct node *left;
  struct node *right;
};

struct node *tree = NULL;

struct node *insertElement (struct node *, int);

struct node *deleteElement (struct node *, int);

void inorderTraversal (struct node *);

int getRightMin (struct node *tree);

 
int main () 
{
  
 int option, val;
  
 struct node *ptr;
  do
  {
      printf ("\n *MAIN MENU*\n");
      
printf ("\n 1. Insert Element");
      
printf ("\n 2. Inorder Traversal");
      
printf ("\n 3. Delete an element");
      
printf ("\n 4. Exit");
      
printf ("\n Enter your option : ");
      
 
scanf ("%d", &option);
      
switch (option)
	
{
	
case 1:
printf ("\n Enter the value of the new node : ");
	  
scanf ("%d", &val);
	  
tree = insertElement (tree, val);
	  
break;
	
 
case 2:
	  printf ("\n The elements of the tree are : \n");
	  
inorderTraversal (tree);
	  
break;
	
 
case 3:
	  printf ("\n Enter the element to be deleted : ");
	  
scanf ("%d", &val);
	  
tree = deleteElement (tree, val);
	  
break;
	
 
}
    
}
  while (option != 4);
  
 
return 0;

}


 
struct node *insertElement (struct node *tree, int val) 
{
  
struct node *ptr, *nodeptr, *parentptr;
  
ptr = (struct node *) malloc (sizeof (struct node));
  
ptr->data = val;
  
ptr->left = NULL;
  
ptr->right = NULL;
  
if (tree == NULL)
    
    {
      
tree = ptr;
      
tree->left = NULL;
      
tree->right = NULL;
    
}
  
  else
    
    {
      
parentptr = NULL;
      
nodeptr = tree;
      while (nodeptr != NULL)
	{
	  parentptr = nodeptr;
	  
if (val < nodeptr->data)
	    
nodeptr = nodeptr->left;
	  
	  else
	    
nodeptr = nodeptr->right;
	
}
      if (val < parentptr->data)
	
parentptr->left = ptr;
      
      else
	parentptr->right = ptr;
    
}
  
return tree;

}


int getRightMin (struct node *tree) 
{
  
struct node *temp = tree;
  
while (temp->left != NULL)
    
    {
      
temp = temp->left;
    
}
  
return temp->data;

}


struct node *deleteElement (struct node *tree, int val) 
{
  
if (tree == NULL)
    
    {
      
printf ("Tree is empty\n");
      
return NULL;
    
}
  
if (tree->data < val)
    tree->right = deleteElement (tree->right, val);
  
  else if (tree->data > val)
    tree->left = deleteElement (tree->left, val);
  
  else
    
    {
      
if (tree->left == NULL && tree->right == NULL)
	
	{
	  
free (tree);
	  
return NULL;
	
}
      
      else if (tree->left == NULL)
	
	{
	  
struct node *temp = tree->right;
	  
free (tree);
	  
return temp;
	
}
      
      else if (tree->right == NULL)
	
	{
	  
struct node *temp = tree->left;
	  
free (tree);
	  
return temp;
	
}
      
      else
	
	{
	  
int rightMin = getRightMin (tree->right);
	  
tree->data = rightMin;
	  
tree->right = deleteElement (tree->right, rightMin);
    
} 
} 
return tree;

}


void inorderTraversal (struct node *tree) 
{
  
if (tree != NULL)
    
    {
      
inorderTraversal (tree->left);
      
printf ("%d\t", tree->data);
      
inorderTraversal (tree->right);
    
}

}


 

