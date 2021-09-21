
#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
};

void rotate (struct Node **head_ref, int k)
{
  if (k == 0)
    return;

  struct Node *current = *head_ref;

  int count = 1;
  while (count < k && current != NULL)
    {
      current = current->next;
      count++;
    }

  if (current == NULL)
    return;

  struct Node *kthNode = current;

  while (current->next != NULL)
    current = current->next;

  current->next = *head_ref;

  *head_ref = kthNode->next;

  kthNode->next = NULL;
}

void push (struct Node **head, int new_data)
{
  struct Node *new_node = (struct Node *) malloc (sizeof (struct Node));
  
  struct Node *temp;
  
  new_node->data=new_data;
  new_node->next=NULL;
  
  if((*head)==NULL)
  {
   *head=new_node;
   temp=new_node;
  }
  
  else
  {
   new_node->prev=temp;
   temp->next=new_node;
   temp=new_node; 
  }
  
  
}


void printList (struct Node *node)
{
  while (node != NULL)
    {
      printf ("%d ", node->data);
      node = node->next;
    }
}


int main()
{
  struct Node *head = NULL;

  int num;
  int n, k;

  do
    {
      printf ("\nEnter the data ");
      scanf ("%d", &num);

      push (&head, num);

      printf ("\nDo you want to continue ");
      scanf ("%d", &n);

    }
  while (n);


  printf ("Given linked list is :\t");
  printList (head);

  printf ("\n");

  printf ("\nEnter the value of k ");
  scanf ("%d", &k);

  rotate (&head, k);

  printf ("\nRotated Linked list is :\t");
  printList (head);
  
  printf("\n\n");
  return (0);
}


