
//REVERSE THE LINKED LIST USING RECURSION

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
 int data;
 struct node *next;
} Node;

Node *Create(Node *head)
{
 struct node *temp,*newnode;
 
 int n;
 
 do
 {
  newnode=(Node *)malloc(sizeof(struct node));
  
  printf("\nEnter the data ");
  scanf("%d",&newnode->data);
  
  newnode->next=NULL;
  
  if(!head)
  {
   head=newnode;
   temp=newnode;
  }
  
  else
  {
   temp->next=newnode;
   temp=newnode;
  }
  
  printf("\nDo you want to continue ");
  scanf("%d",&n);
 }
 
 while(n);
 
 return head;
}

Node *Reverse(Node *head)
{
  Node *rest;
  
  if(head==NULL || head->next==NULL)
  {
   return head;
  }
  
  //Recursively reverse the linked list
  
  rest=Reverse(head->next);
  
  head->next->next=head;
  
  head->next=NULL; // This should be noted
  
  return rest;
}

void display(struct node *head)
{
 Node *temp;
 
 temp=head;
 
 printf("\nDisplaying the details ");
 
 while(temp)
 {
  printf("%d ",temp->data);
  temp=temp->next;
 }  
 
 printf("\n");
}

int main()
{
 struct node *head=NULL;
 
 head=Create(head);    
 
 display(head);
 
 printf("\nNow Reversing the linked list ::");
 
 head=Reverse(head);
 
 display(head);
 
 return 0;
}
  
   
  
  
