
//REVERSE A LINKED LIST USING ITERATIVE METHOD

#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node *next;
};

struct node *Create(struct node *head)
{
 struct node *temp,*newnode;
 
 int n;
 
 do
 {
  newnode=(struct node *)malloc(sizeof(struct node));
  
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
    
struct node *Reverse(struct node *head)
{
 struct node *curr=head,*prev=NULL,*next=head;
 
 while(curr)
 {
  next=next->next;
  
  curr->next=prev;
  
  prev=curr;
  curr=next;
 } 
 
 head=prev;
 
 return head;
}
  
void display(struct node *head)
{
 struct node *temp;
 
 temp=head;
 
 printf("\nDisplaying the details ");
 
 while(temp)
 {
  printf("%d\t",temp->data);
  
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
 
