
//IMPLEMENTING QUEUE USING LINKED LIST

#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node *next;
};

struct node *front=NULL,*rear=NULL;

void enqueue(int x)
{
 struct node *newnode;
 
 newnode=(struct node *)malloc(sizeof(struct node));
 
 newnode->data=x;
 newnode->next=NULL;
 
 
 if(front==NULL && rear==NULL)
 { 
  front=rear=newnode;
 }
 
 else
 {
   rear->next=newnode;
   rear=newnode;
 }
 
}

void dequeue()
{
 struct node *temp;
 
 temp=front;
 
 if(front==NULL && rear==NULL)
 {
  printf("\nQueue is empty ");
  return;
 }
 
 else if(front==rear)
 {
  printf("\n%d dequeued last\n",front->data);
  front=rear=NULL;
  //free(temp);
 }
 
 else
 {
  printf("\n%d dequeued \n",front->data);
  
  front=front->next;  
  
 // free(temp);
 }
 free(temp);
}

void display()
{
 struct node *temp;
 
 temp=front;
 
 if(front==NULL && rear==NULL)
 {
  printf("\nQueue is empty\n");
  return ;
 }
 
 else{ 
 printf("\nDisplaying the queue\t");
 
 while(temp!=NULL)
 {
  printf("%d\t",temp->data);
  temp=temp->next;
 }
 
 }
}  
  
int main()
{
 
 int n=1,option,data;
 
 printf("\nMain Menu :::\n");
 
 printf("\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n");
 
 while(n)
 {
  printf("\nEnter the operation you want to perform ");
  scanf("%d",&option);
  
  switch(option)
  {
   case 1:
   	printf("\nEnter the data ");
   	scanf("%d",&data);
   	enqueue(data);
   	break;
   	
   case 2:
   	dequeue();
   	break;
   	
   case 3:
   	display();
   	break;
   	
   default:
   	printf("\nEnter a valid choice\n");
  }
  
  printf("\nDo you want to continue ");
  scanf("%d",&n);
 }
  
 return 0;
}

    
  
