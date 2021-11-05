
/*________INTERLEAVE THE FIRST HALF OF THE QUEUE WITH SECOND HALF  _________________________*/

/*___ALGORITHM :=

	1) PUSH FIRST HALF OF THE QUEUE INTO STACK
	2) ENQUEUE BACK THE STACK ELEMENTS
	3) DEQUEUE FIRST HALF OF THE QUEUE AND ENQUEUE THEM BACK 
	4) AGAIN PUSH FIRST HALF ELEMENTS OF THE QUEUE
	5) INTERLEAVE THE ELEMENTS OF THE QUEUE AND STACK
	
				_______________________________*/

				
#include<stdio.h>
#include<stdlib.h>

#define N 5

int front=-1,rear=-1;
int top=-1;

void enqueue(int [],int);
int dequeue(int []);
void push(int [],int);
int pop(int []);
void Queue_Interleave(int []);
void display(int []);
int Size(int []);


int main()
{
 int ch,num,k;
 int queue[N];
 
 do
 {
  printf("\nMain Menu---\n1.Enqueue\n2.Dequeue\n3.Interleave the Queue\n4.Display\n");
  
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
   	Queue_Interleave(queue);
   	
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
 
void Queue_Interleave(int queue[N])
{
  int stack[N];
  int count,i,num;
  
  count=Size(queue);
  
  //printf("\nSize of the queue is : %d\n",count);
  
  for(i=0;i<(count/2);i++)
  { 
   num=dequeue(queue);
   
   push(stack,num);
   
  }
  
  for(i=top;i>=0;i--)
  {
   num=pop(stack);
   
   enqueue(queue,num);
   
  }
  
  for(i=0;i<(count/2);i++)
  {
   num=dequeue(queue);
   
   enqueue(queue,num);
  }
  
  for(i=0;i<(count/2);i++)
  {
   num=dequeue(queue);
   
   push(stack,num);
  }
  
  for(i=top;i>=0;i--)
  {
   num=pop(stack);
   
   enqueue(queue,num);
   
   num=dequeue(queue);
   
   enqueue(queue,num);
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
   
   
