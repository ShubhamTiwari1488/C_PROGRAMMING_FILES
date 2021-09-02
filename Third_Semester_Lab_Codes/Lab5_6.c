//WAP TO INSERT A NEW NODE AT THE BEGINNING OF A SINGLE CIRCULAR LINKED LIST

#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node *next;
 struct node *prev;
};

struct node *CREATE(struct node *);
struct node *InsertAtBeg(struct node *);
void Display(struct node *);

int main()
{
 struct node *head;
 
 head=NULL;
 
 head=CREATE(head); 
 
 Display(head);
 
 head=InsertAtBeg(head);
 
 Display(head);
 
 return 0;
}

struct node *CREATE(struct node *head)
{
 struct node *newnode,*temp;
 int n=1;
 
 while(n)
 {
  newnode=(struct node *)malloc(sizeof(struct node));
  
  printf("\nEnter the data ");
  scanf("%d",&newnode->data);
  
  newnode->next=NULL;
  newnode->prev=NULL;
  
  if(!head)
  {
   head=newnode;
   temp=newnode;
  }
  
  else
  {
   newnode->prev=temp;
   temp->next=newnode;
   temp=newnode;
   temp->next=head;
  }
  
  printf("\nDo you want to continue ");
  scanf("%d",&n);
 }
 
 
 return head;
}

void Display(struct node *head)
{
 struct node *temp;
 
 temp=head;
 
 printf("\nPrinting the data of the linked list:=\t");
 
 while(temp->next!=head)
 {
  printf("%d\t",temp->data);
  temp=temp->next;
 }
 
 printf("%d\n",temp->data);
}

struct node *InsertAtBeg(struct node *head)
{
 struct node *newnode,*temp;      
 
 newnode=(struct node *)malloc(sizeof(struct node));
 
 printf("\nEnter the data ");
 scanf("%d",&newnode->data);
 
 temp=head;
 while(temp->next!=head)
 {
  temp=temp->next;
 }
 
 newnode->next=head;
 newnode->prev=temp;
 
 temp->next=newnode;
 
 head->prev=newnode;
 
 head=newnode;
 
 return head;
}  
