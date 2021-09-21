
#include <stdio.h>
#include <stdlib.h> 

struct Node 
{
  int data;
  struct Node *next;
  struct Node *prev;
};

void insert(struct Node **head, int value) 
{
  struct Node *node = (struct Node *) malloc(sizeof(struct Node));
  if (node == NULL) 
  {
    printf("Memory overflow\n");
  } 
  else 
  {
    node -> data = value;
    node -> next = NULL;
    node -> prev = NULL;
    if ( *head == NULL) 
    {
      *head = node;
    } 
    else 
    {
      struct Node *temp = *head;
      while (temp != NULL && temp -> next != NULL) 
      {
        temp = temp -> next;
      }
      temp -> next = node;
      node -> prev = temp;

    }
  }
}

void display(struct Node *temp) 
{

  if (temp==NULL) 
  {
    printf("Empty linked list");
  } 
  else 
  {
   
    while (temp!=NULL) 
    {
    
      printf("%d  ",temp->data);
      temp = temp -> next;
    }
  }
  printf("\n");
}

void remove_node(struct Node *head) 
{

  if (head != NULL) 
  {

    struct Node *temp = head -> next, *find = NULL;

    while (temp != NULL) 
    {
      
      if (temp -> prev -> data == temp -> data) 
      {
        find = temp;

      }
      temp = temp -> next;

      if (find != NULL) 
      {
        
        if (find -> prev != NULL) 
        {
          find -> prev -> next = temp;
        }
        if (temp != NULL) 
        {
          temp -> prev = find -> prev;
        }
        find -> prev = NULL;
        find -> next = NULL;
        
        free(find);
        find = NULL;
      }
    }
  }
}
int main() 
{
  
  struct Node *head = NULL;
  
  int data,n;

  do{
   printf("\nEnter the data ");
   scanf("%d",&data);
   
   insert(&head,data);
   
   printf("\nDo you want to continue ");
   scanf("%d",&n);
  }while(n); 

  printf("Before Deleting duplicate nodes : \n");

  display(head);
  printf("\nAfter Deleting duplicate nodes : \n");
  remove_node(head);
  display(head);
  
  printf("\n");
  
  return 0;
 } 

