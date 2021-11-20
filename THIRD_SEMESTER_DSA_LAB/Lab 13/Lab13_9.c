#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
int isBSTUtil(struct node* node, int min, int max);
int isBST(struct node* node) 
{ 
  return(isBSTUtil(node, INT_MIN, INT_MAX)); 
} 
int isBSTUtil(struct node* node, int min, int max) 
{ 
  if (node==NULL) 
     return 1;
  if (node->data < min || node->data > max) 
     return 0; 
  return 
    isBSTUtil(node->left, min, node->data-1) &&  isBSTUtil(node->right, node->data+1, max);  
} 
struct node* newNode(int data)
{
  struct node* node = (struct node*)malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;

  return(node);
}
int main()
{
  struct node *root = newNode(4);
  root->left        = newNode(22);
  root->right       = newNode(5);
  root->left->left  = newNode(11);
  root->left->right = newNode(3); 
  
  printf("\nThe entered tree is :\t");
  printf("4 22 5 11 3\n");
  
  if(isBST(root))
    printf("\nThe tree is a BST\n");
  else
    printf("\nThe tree is NOT a BST\n");
    
  printf("\n");
  
  return 0;
}
