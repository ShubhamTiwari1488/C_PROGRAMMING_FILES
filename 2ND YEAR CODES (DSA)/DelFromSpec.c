
//DELETE A NODE BEFORE A SPECIFIC NODE.

#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node *next;
};

struct node *Delete(struct node *head,int pos) 
{
 struct node *prev,*curr;
 int i=1;
 
 prev=NULL;
 
 curr=head;
 
 while(i<pos)
 {
  prev=curr;
  curr=curr->next;
  i++;
 } 
 
 prev->next=curr->next;
 
 free(curr);
 
 return head;
}

struct node *Insert(struct node *head)
{
 struct node *newnode,*temp;
 
 newnode=(struct node *)malloc(sizeof(struct node));
 
 printf("\nEnter the data\n");
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
 
 return head;
}

void Display(struct node *head)
{
 struct node *temp;
 
 printf("\nPrinting the linked list:\t");
 
 temp=head;
 
 while(temp!=NULL)
 {
  printf("%d\t",temp->data);
  temp=temp->next;
 }
 
 printf("\n");
}

  
int main()
{
 struct node *head;
 head=NULL;
 
 int n,pos;
 n=1;
 
 while(n)
 {
  head=Insert(head);
  
  printf("\nDo you want to continue");
  scanf("%d",&n);
 }
 
 Display(head);
 
 printf("\nEnter pos\n");
 scanf("%d",&pos);
 
 head=Delete(head,pos);
 
 Display(head);
 
 return 0;
}
   
    
  
