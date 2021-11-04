
//Reversing the Queue

#include<stdio.h>
#include<stdlib.h>

#define N 5

int front=-1,rear=-1;
int top=-1;

void enqueue(int [],int);
int dequeue(int []);
void push(int [],int);
int pop(int []);
void reverse(int []);
void display(int []);

int main()
{
 int ch,num;
 int queue[N];
 
 do
 {
  printf("\nMain Menu---\n1.Enqueue\n2.Dequeue\n.3.Reverse\n4.Display\n");
  
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
   	reverse(queue);
   	
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
  return ;
 }
 
 else if(front==-1 && rear==-1)
 {
  front=rear=0;
  
  queue[front]=data;
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
  return queue[front++];
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
  printf("\nStack is empty\n");
  return -1;
 }
 
 else
 {
  return stack[top--];
 }
 
}

void reverse(int queue[N])
{
 int stack[N];
 int i,num;
 
 for(i=front;i<=rear;i++)
 {
   num=dequeue(queue);
   push(stack,num);
 }
 
 for(i=top;i>=0;i--)
 {
  num=pop(stack);
  enqueue(queue,num);
 }
 
}

void display(int queue[N])
{
 int i;
 printf("\nDisplaying the queue:=\t");
 
 for(i=front;i<=rear;i++)
 {
  printf("%d\t",queue[i]);
 }
 
}

      
