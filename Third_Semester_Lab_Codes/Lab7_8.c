
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

void display(struct node *head)
{
 
 printf("\nDisplaying the details of the linked list\t");
 
 while(head!=NULL)
 {
  printf("%d\t",head->data);
  head=head->next;
 }
} 

void MIDDLE(struct node *head,int n)
{
 int i,count;
 
 struct node *temp,*prevnode;
 
 temp=head;
 
 if((n+1)%2==0)
 {
  count=(n+1)/2;
  
  i=1;
  
  while(i<count)
  {
   temp=temp->next;
   i++;
  }
  
  printf("The middle term is %d \n",temp->data);
 }
 
 else
 {
  
  count=n/2;
  
  i=1;
  
  while(i<=count)
  {
   prevnode=temp;
   
   temp=temp->next;
  }
  
  printf("\nThe middle terms are %d and %d\n",prevnode->data,temp->data);
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
 
 printf("\n");
 
 MIDDLE(head,n);
 
 printf("\n");
 
 return 0;
}
        
