
//SORTING A QUEUE USING EXTRA SPACE

				
#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

#define N 5

int front=-1,rear=-1;
int top=-1;

void enqueue(int [],int);
int dequeue(int []);
void push(int [],int);
int pop(int []);
int minIndex(int [],int);
void insertMinToRear(int [],int);
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

void push(int stack[N],int data)
{
 if(top==N-1)
 {
  printf("\nStack Overflow\n");
  return;
 }
 
 else
 {
  stack[++top]=data;
 }
 
}

int pop(int stack[N])
{
 if(top==-1)
 { 
  printf("\nStack Underflow\n");
  return -1;
 }
 
 else
 {
  return stack[top--];
 }
 
}

int Size(int queue[N])
{
 int count=1; 
 int i;
 
 for(i=front;i!=rear;i=(i+1)%N)    //Last one will be left out .Hence I initialized count with the value of 1.
 { 
  count++;
 } 
 
 return count;
}
 
int minIndex(int queue[N],int sortedIndex)
{
 int min_index=-1;
 int min_val=INT_MAX;
 
 int n=Size(queue);
 
 int i,curr;
 
 for(i=0;i<n;i++)
 {
  curr=dequeue(queue);
  
  if(curr<=min_val && i<=sortedIndex)
  {
   min_index=i;
   min_val=curr;
  }
  
  enqueue(queue,curr);
 }
 
 return min_index;
}

void insertMinToRear(int queue[N],int min_index)
{
 int min_val;
 
 int n=Size(queue);
 
 int i,curr;
 
 for(i=0;i<n;i++)
 {
    curr=dequeue(queue);
    
    if(i!=min_index)
    {
     enqueue(queue,curr);
    }
    
    else
    {
     min_val=curr;
    }
    
 }
  
 enqueue(queue,min_val);
  
} 

void sortQueue(int queue[N])
{
  int i;
  
  int min_index;
  
  for(i=1;i<=Size(queue);i++)
  {
   min_index=minIndex(queue,(Size(queue)-i));
   insertMinToRear(queue,min_index);
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
   
