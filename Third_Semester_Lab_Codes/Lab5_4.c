//WAP TO INSERT A NEW NODE AT THE BEGINNING OF A DOUBLY LINKED LIST

#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node *next;
 struct node *prev;
};

void CreateList(struct node **start,struct node **tail,int num)
{
 struct node *newnode;
 
 newnode=(struct node *)malloc(sizeof(struct node));
 
 newnode->data=num;
 newnode->next=NULL;
 newnode->prev=NULL;
 
 if(*start==NULL)
 {
  *start=newnode;
  *tail=newnode;
 }
 
 else
 {
  (*tail)->next=newnode;
  newnode->prev=*tail;
  *tail=newnode;
 }
}

void Display(struct node *start)
{
  struct node *temp;
  
  temp=start;
  
  printf("\nPrinting the doubly linked list:\t");
  
  while(temp!=NULL)
  {
   printf("%d\t",temp->data);
   temp=temp->next;
  }
  
  printf("\n");
}

void InsertAtBeg(struct node **start,int num)
{
 struct node *newnode;
 
 newnode=(struct node *)malloc(sizeof(struct node));
 
 newnode->data=num;
 
 newnode->next=*start;
 (*start)->prev=newnode;
 
 newnode->prev=NULL;
 
 *start=newnode;
}



int main()
{
 struct node *start,*tail;
 
 int n,num,option;
 
 
 start=NULL;
 tail=NULL;
 
 n=1;
 
 while(n)
 {
  printf("\nEnter the data\n");
  scanf("%d",&num);
  
  CreateList(&start,&tail,num);
  
  printf("Do you want to continue 1 for yes and 0 for no");
  scanf("%d",&n);
 } 
 
 Display(start);
 

 printf("\nEnter the number");
 scanf("%d",&num);
         
 InsertAtBeg(&start,num);
         
 Display(start);
        

 return 0;
}
    
