
// CREATING A LINKED LIST AND DISPLAYING IT ON THE SCREEN

#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node *next;
};

struct node *head,*newnode,*temp;

int main()
{
 int i=0;
 
 head=NULL;
 
 while(1)
 {
  printf("\nEnter whether you want to continue or not (0,1)\n");
  scanf("%d",&i);
  
  if(i==0)
  break;
  
  newnode=(struct node *)malloc(sizeof(struct node));
  
  printf("\nEnter the data\n");
  scanf("%d",&newnode->data);
  
  newnode->next=0;
  
  if(head==NULL)
  {
   head=newnode;
  // temp=newnode;
  }
  
  else{
  
  temp->next=newnode;
  //temp=newnode 
 }
 
 temp=newnode;
 
}

temp=head;

printf("\n\nDisplaying the Linked List ::::");

while(temp!=0)
{
 printf("-> %d ",temp->data);
 temp=temp->next;
}
printf("\n\n");

return 0;
}

   
  
