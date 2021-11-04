
//IMPLEMENTING CIRCULAR QUEUE USING ARRAYS

#include<stdio.h>

#define N 5

int queue[N];
int front=-1,rear=-1;

void enqueue(int x)
{
 if((rear+1)%N==front)
 {
  printf("\nQueue is full \n");
  return ;
 }
 
 else if(front==-1 && rear==-1)
 {
  front=rear=0;
  queue[rear]=x;
 }
 
 else
 {
  rear=(rear+1)%N;
  
  queue[rear]=x;
 }
 
}

void dequeue()
{
 if(front==-1 && rear==-1)
 {
  printf("\nQueue is empty \n");
  return ;
 }
 
 else if(front==rear)
 {
  printf("\n%d dequeued last\n",queue[front]);
  front=rear=-1;
 }    
 
 else
 {
  printf("\n%d dequeued \n",queue[front]);
  front=(front+1)%N;
 }
 
}

void display()
{
 int i;
 
 if(front==-1 && rear==-1)
 {
  printf("\nQueue is empty\n");
  return;
 }
 
 else{
 	printf("\nDisplaying the details of queue\t");
 	for(i=front;i!=rear;i=(i+1)%N)
 	{
 	 printf("%d\t",queue[i]);
 	}
 	
  printf("%d\n",queue[rear]);
  
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
 
