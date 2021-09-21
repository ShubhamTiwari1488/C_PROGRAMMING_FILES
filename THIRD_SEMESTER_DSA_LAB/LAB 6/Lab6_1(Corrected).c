
#include<stdio.h>
#include<stdlib.h>

struct node
{
 int coeff;
 int x_power;
 int y_power;
 struct node *next;
};

struct node *CREATE(struct node *head)
{
 struct node *newnode,*temp;
 
 int n=1;
 
 while(n)
 {
  newnode=(struct node *)malloc(sizeof(struct node));
  newnode->next=NULL;
  
  printf("\nEnter power of x ");
  scanf("%d",&newnode->x_power);
  
  printf("\nEnter power of y ");
  scanf("%d",&newnode->y_power);
  
  printf("\nEnter coeff ");
  scanf("%d",&newnode->coeff);
  
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
 
 return head;
}

struct node *add(struct node *ptr1,struct node *ptr2)
{
 struct node *ptr3;
 
 struct node *temp1,*temp2,*temp;
 
 while(temp1!=NULL || temp2!=NULL)
 {
  
  if(temp1!=NULL && temp2!=NULL)
  {
   if(temp1->x_power==temp2->x_power && temp1->y_power==temp2->y_power)
   { 
     ptr3=(struct node *)malloc(sizeof(struct node));
  
     ptr3->next=NULL;
    
     ptr3->x_power=temp1->x_power;
     ptr3->y_power=temp1->y_power;
     
     ptr3->coeff=temp1->coeff+temp2->coeff;
   } 
   
   else if(temp1->x_power>temp2->x_power)
   {
    ptr3=(struct node *)malloc(sizeof(struct node));
  
    ptr3->next=NULL;
    
    ptr3->x_power=temp1->x_power;
    ptr3->y_power=temp1->y_power;
    
    temp=ptr3; 
    
    ptr3=(struct node *)malloc(sizeof(struct node));
  
    ptr3->next=NULL;
    
    ptr3->x_power=temp2->x_power;
    ptr3->y_power=temp2->y_power;
    
    temp->next=ptr3;
    
    //ptr3->next=NULL;
   }
   
   else if(temp1->x_power<temp2->x_power) 
   {
    ptr3=(struct node *)malloc(sizeof(struct node));
    
    ptr3->next=NULL;
    
    ptr3->x_power=temp2->x_power;
    ptr3->y_power=temp2->y_power;
    
    temp=ptr3;
    
    ptr3=(struct node *)malloc(sizeof(struct node));
  
    ptr3->next=NULL;    
    
    ptr3->x_power=temp1->x_power;
    ptr3->y_power=temp1->y_power;
    
   }
  }
  
  else if(temp1==NULL)
  {
   ptr3=(struct node *)malloc(sizeof(struct node));
  
   ptr3->next=NULL;  
   
   ptr3->x_power=temp2->x_power;
   ptr3->y_power=temp2->y_power;
   ptr3->coeff=temp2->coeff;
   
  } 
