

#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node *next;
 struct node *prev;
};

void CREATE(struct node **head,struct node **tail,int n)
{
 struct node *newnode,*temp;
 
 while(n)
 {
  newnode=(struct node *)malloc(sizeof(struct node));
  
  newnode->next=NULL;
  newnode->prev=NULL;
  
  printf("\nEnter the data ");
  scanf("%d",&newnode->data);
  
  if((*head)==NULL)
  {
   *head=newnode;
   temp=newnode;
  }
  
  else{
  
   temp->next=newnode;
   newnode->prev=temp;
   
   temp=newnode;
  }
  
  *tail=temp;
  
  (*tail)->next=*head;
  (*head)->prev=*tail;
  
  n--;
 }
}

void display(struct node *head)
{
 struct node *temp;
 
 printf("\nDisplaying the details of the linked list\t");
 
 temp=head;
 
 while(temp->next!=head)
 {
  printf("%d\t",temp->data);
  temp=temp->next;
 }
 
 printf("%d\n",temp->data);
} 

int main()
{
 struct node *head,*tail;
 head=NULL;
 tail=NULL;
 
 int n;
 
 printf("\nEnter the no of elements ");
 scanf("%d",&n);
 
 CREATE(&head,&tail,n);
 
 display(head);
 
 printf("\n");
 
 return 0;
}
        
