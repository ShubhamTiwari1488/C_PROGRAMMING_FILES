
//SORTING A QUEUE USING RECURSION

				
#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

#define N 5

int front=-1,rear=-1;
int top=-1;

void enqueue(int [],int);
int dequeue(int []);
void FrontToRear(int [],int );
void PushInQueue(int [],int,int);
void sortQueue(int []);
void display(int []);
int Size(int []);


int main()
{
 int ch,num,k;
 int queue[N];
 
 do
 {
  printf("\nMain Menu---\n1.Enqueue\n2.Dequeue\n3.Sort the Queue\n4.Display\n");
  
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
   	sortQueue(queue);
   	
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
 if((rear+1)%N==front)
 {
  printf("\nQueue is full \n");
  return;
 }
 
 else if(front==-1 && rear==-1)
 {
  front=rear=0;
  queue[rear]=data;
 }
 
 else
 {
  rear=(rear+1)%N;
  
  queue[rear]=data;
 }
 
}

int dequeue(int queue[N])
{
 int temp;
 
 if(front==-1 && rear==-1)
 {
  printf("\nQueue is empty\n");
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
  temp=queue[front];
  
  front=(front+1)%N;
  
  return temp;
 }
 
}

int Size(int queue[N])
{
 int count=1; 
 int i;
 
 if(front==-1 && rear==-1)
 {
  return 0;
 }
 
 else
 { 
  for(i=front;i!=rear;i=(i+1)%N)    //Last one will be left out .Hence I initialized count with the value of 1.
   { 
    count++;
   } 
 
 return count;
 }
}
 
void FrontToRear(int queue[N],int qsize)
{
 int temp;
 
 if(qsize<=0)
 	return;
 	
 else
 {
  temp=dequeue(queue);
  
  enqueue(queue,temp);
  
  FrontToRear(queue,qsize-1);
  
 }
 
}

void PushInQueue(int queue[N],int val,int qsize)
{
 int temp,count;
 
 if(Size(queue)==0 || qsize==0)
 {
    enqueue(queue,val);
    return;
 }
 
 else if(val<=queue[front])
 {
  enqueue(queue,val);
  
  FrontToRear(queue,qsize);
 }
 
 else
 {
   temp=dequeue(queue);
   enqueue(queue,temp);
   
   PushInQueue(queue,val,qsize-1);
 }
 
}

void sortQueue(int queue[N])
{
 int temp;
 
 if(Size(queue)==0)
 {
  return;
 }
 
 else
 {
   temp=dequeue(queue); 
   
   sortQueue(queue);
   
   PushInQueue(queue,temp,Size(queue));
   
 }
 
}
   
void display(int queue[N])
{
 int i;
 
 if(front==-1 && rear==-1)
 {
  printf("\nQueue is empty\n");
  return;
 }
 
 else
 {
  printf("\nDisplaying the queue \t");
  
  for(i=front;i!=rear;i=(i+1)%N)
  {
   printf("%d\t",queue[i]);
  }
  
  printf("%d\n",queue[i]);
 }
 
}          

