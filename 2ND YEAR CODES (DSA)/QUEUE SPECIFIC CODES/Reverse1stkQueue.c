
//REVERSING THE FIRST K ELEMENTS OF THE QUEUE 

#include<stdio.h>
#include<stdlib.h>

#define N 5

int front=-1,rear=-1;
int top=-1;

void enqueue(int [],int );
int dequeue(int []);
void push(int [],int);
int pop(int []);
void reversekthElement(int [],int);
void display(int []);
int Size(int []);

int main()
{
 int ch,num,k;
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
   	printf("\nTo reverse 1st Kth element of the queue ,,first enter the value of k ");
   	scanf("%d",&k);
   	reversekthElement(queue,k);
   	
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
  return -1;
 }
 
 else
 {
  return stack[top--];
 }
 
}

void reversekthElement(int queue[N],int k)
{
 int stack[N];
 
 int i,num,count=0;
 
 count=Size(queue);
 
 
 for(i=0;i<k;i++)
 {
   num=dequeue(queue);
   
   push(stack,num);
 
 }
 
 for(i=top;i>=0;i--)
 {
  num=pop(stack);
  
  enqueue(queue,num);
  
 }
 
 for(i=0;i<(count-k);i++)
 {
  num=dequeue(queue);
  
  enqueue(queue,num);
 }
 
}  

int Size(int queue[N])
{
 int i,count=1;
 
 if(front==-1 && rear==-1)
 {
  return 0;
 }
 
 else
 {
  for(i=front;i!=rear;i=(i+1)%N)
  {
   count++;
  }
  
  return count;
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
  for(i=front;i!=rear;i=(i+1)%N)
  {
   printf("%d\t",queue[i]);
  }
  printf("%d\n",queue[rear]);
 }
}     

