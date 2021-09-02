
//WAP TO DELETE A NODE AFTER A CERTAIN NODE OF A SINGLE CIRCULAR LINKED LIST

#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node *next;
 struct node *prev;
};

struct node *CREATE(struct node *);
struct node *DelAtPos(struct node *);
void Display(struct node *);

int main()
{
 struct node *head;
 
 head=NULL;
 
 head=CREATE(head); 
 
 Display(head);
 
 head=DelAtPos(head);
 
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

struct node *DelAtPos(struct node *head)
{
 struct node *temp;
 int pos,i;
 
 i=1;
 
 printf("\nEnter the position of the node ");
 scanf("%d",&pos);
 
 temp=head;
 
 while(i<pos)
 {
  temp=temp->next;
  i++;
 }
 
 temp->prev->next=temp->next;
 
 temp->next->prev=temp->prev;
 
 free(temp);
 
 return head;
}   
