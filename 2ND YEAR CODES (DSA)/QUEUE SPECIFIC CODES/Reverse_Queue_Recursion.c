
//REVERSE A QUEUE USING RECURSION

#include<stdio.h>
#include<stdlib.h>

#define N 5

int front=-1,rear=-1;

void enqueue(int [],int );
int dequeue(int []);
int isEmpty(int []);
void RecursionReverse(int []);
void display(int []);

int main()
{
 int ch,num;
 int queue[N];
 
 do
 {
  printf("\nMain Menu---\n1.Enqueue\n2.Dequeue\n3.Reverse\n4.Display\n");
  
  printf("\nEnter choice ");
  scanf("%d",&ch);
  
  switch(ch)
  {
   case 1:
   	printf("\nEnter the data ");
   	scanf("%d",&num);
   	
   	enqueue(queue,num);
   	
   	break;
   	
   case 2:
   	num=dequeue(queue);
   	
   	printf("\n%d dequeued\n",num);
   	
   	break;
   	
   case 3:
   	RecursionReverse(queue);
   	
   	break;
   	
   case 4:
   	display(queue);
   	
   	break;
   	
   default:
   	exit(0);
   	
   }
   
   
 }while(ch<=4);
  
  printf("\n");
  
  return 0;
} 


void enqueue(int queue[N],int data)
{
 if(rear==N-1)
 {
   printf("\nQueue is full\n");
   return;
 }
 
 else if(front==-1 && rear==-1)
 {
  front=rear=0;
  queue[rear]=data;
 }
 
 else
 {
  queue[++rear]=data;
 }
 
}     

int dequeue(int queue[N])
{
 int temp;
 
 if(front==-1 && rear==-1)
 {
  //printf("\nQueue is empty\n");
  return -1;
 }
 
 else if(front==rear)
 { 
   temp=queue[front];
   
   front=rear=-1;
   
   return temp;
 }
 
 else
 {
  return queue[front++];
 }
 
}

int isEmpty(int queue[N])
{
 if(front==-1 && rear==-1)
 {
  return 1;
 }
 
 else
 {
  return 0;
 }
}

void RecursionReverse(int queue[N])
{
 int data;
 
 if(isEmpty(queue))
 {
  return;
 }
 
 else
 {
   data=dequeue(queue);
   
   RecursionReverse(queue);
   
   enqueue(queue,data);

 }
  
}      

void display(int queue[N])
{
 int i;
 
 if(front==-1 && rear==-1)
 {
  printf("\nQueue is empty\n");
 }
 
 else
 { 
 printf("\nDisplaying the queue : \t");
 
 for(i=front;i<=rear;i++)
 {
  printf("%d\t",queue[i]);
 }
 
 }
}
    
