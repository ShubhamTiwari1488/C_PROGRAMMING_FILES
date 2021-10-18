
//IMPLEMENTING QUEUE USING ARRAY

#include<stdio.h>

#define N 5

int queue[N];
int front=-1,rear=-1;

void enqueue(int x)
{
 
 if(rear==N-1)
 {
  printf("\nQueue is full\n");
  return;
 }
 
 else if(front==-1 && rear==-1)
 {
  front=rear=0;
  
  queue[rear]=x;
 }
 
 else
 {
  //rear++;
  queue[++rear]=x;
 }
 
}

void dequeue()
{
 if(front==-1 && rear==-1)
 {
  printf("\nQueue is empty\n");
  return;
 }
 
 else if(front==rear)
 {
  printf("\n%d dequeued last ",queue[front]);
  front=rear=-1;
 }
 
 else
 {
  printf("\n%d dequeued ",queue[front++]);
  
  //front++;
 }
 
}

void display()
{
 int i;
 
 if(front==-1 && rear==-1)
 {
  printf("\nQueue is empty ");
  return;
 }
 
 else{ 
 printf("\nDisplaying the queue details :\t");
 
 for(i=front;i<=rear;i++)
 {
  printf("%d\t",queue[i]);
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

    
  
