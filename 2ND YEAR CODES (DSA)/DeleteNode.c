
/*_______________DELETING A NODE FROM BEGINING ,END AND FROM A SPECIAL POSITION________________________*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node *next;
};

struct node *head,*temp,*tail;

struct node *DisplayNode(struct node *);
struct node *DeleteFromBeg(struct node *);
struct node *DeleteFromEnd(struct node *);
struct node *DeleteFromPos(struct node *,int);

int main()
{
 int choice=1,pos,num=1;
 
 struct node *newnode;
 
 head=NULL;
 temp=NULL;
 tail=NULL;
 
 printf("\nCreation of Linked List begins\n");
 
 while(choice)
 {
  newnode=(struct node *)malloc(sizeof(struct node));
  
  printf("\nEnter the data please\n");
  scanf("%d",&newnode->data);
  
  newnode->next=NULL;
  
  if(head==0)
  {
   head=newnode;
   temp=newnode;
   tail=newnode;
  }
  
  else
  {
   temp->next=newnode;
   temp=newnode;
   tail=newnode;
  }
  
  printf("Do you want to continue \\if yes then 1 else 0\\\n");
  scanf("%d",&choice);
  
 }
 
 DisplayNode(head);
 
 while(num)
 {
 printf("\n\nEnter your choice\n1.Delete from beginning\n2.Delete from end\n3.Delete from specific position\n");
 
 scanf("%d",&choice);
 
 switch(choice)
 {
  case 1:
          head=DeleteFromBeg(head);
          break;
  
  case 2:
          head=DeleteFromEnd(head);
          break;
  
  case 3:
         printf("\nPlease enter the position of node you want to delete\n\n");
         scanf("%d",&pos);
         head=DeleteFromPos(head,pos);
         break;
                 
  default:
          printf("\nUser you have not selected any option from the above\n");    
          continue;    
          
  }
  
  printf("Printing the elements after performing operations :=\t");
  
  DisplayNode(head);
  
  printf("Do you want to continue\n");
  scanf("%d",&num);
} 
 
         
 return 0;
}

struct node *DisplayNode(struct node *head)  
{
 if(!head)
 {
  printf("The list is empty\n");
  exit(0);
 }
  
 temp=head;
 
 printf("\n\nDisplaying the Linked List :==\t");
 
 while(temp!=NULL)
 {
  printf("%d ",temp->data);
  temp=temp->next;
 }
 
 printf("\n\n");
 
 return head;
}

struct node *DeleteFromBeg(struct node *head)
{
 if(!head)
 {
  printf("The list is empty\n");
  exit(0);
 }
  
 temp=head;
 head=temp->next;
 free(temp);
 
 return head;
}

struct node *DeleteFromEnd(struct node *head)
{  
   if(!head)
   {
    printf("The list is empty\n");
    exit(0);
   }
    
  //while(temp->next!=NULL);
  
  if(head->next==NULL)
     head=DeleteFromBeg(head);
   
  else
  {
  temp=head;
  
  while(temp->next!=tail)
  {
   temp=temp->next;
  }
  
  temp->next=NULL;
  
  free(tail);
  
  tail=temp;
 }
  
  return head;
}

struct node *DeleteFromPos(struct node *head,int pos)
{  
  struct node *prev;
  
  int i=1;
  
  if(pos==1)
  {
   head=DeleteFromBeg(head);
  }
  
  else{
   
  temp=head;
   
  while(i<pos)
  {
   prev=temp;
   temp=temp->next;
   i++;
  }
  
  prev->next=temp->next;
  free(temp);
  }
  
  return head;
}
  
   
   
  
    
