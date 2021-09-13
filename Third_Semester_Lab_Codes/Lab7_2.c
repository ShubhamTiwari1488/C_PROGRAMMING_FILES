
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
  
  n--;
 }
}

void REVERSE(struct node **head,struct node **tail)
{
 struct node *temp,*prevnode,*nextnode;
 
 temp=*head;
 
 prevnode=NULL;
 nextnode=*head;
 
 while(nextnode!=NULL)
 {
  nextnode=temp->next;  
  temp->prev=nextnode;
  temp->next=prevnode;
  
  prevnode=temp;
  temp=nextnode;
 }
 
 temp=*head;
 
 *head=*tail;
 
 *tail=temp;
}  
 
 
void display(struct node *head)
{
 
 printf("\nDisplaying the details of the linked list\t");
 
 while(head!=NULL)
 {
  printf("%d\t",head->data);
  head=head->next;
 }
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
 
 printf("\n\nAfter reversing the linked list we get ::\n");
 
 REVERSE(&head,&tail);
 
 display(head);
 
 printf("\n");
 
 return 0;
}
        
