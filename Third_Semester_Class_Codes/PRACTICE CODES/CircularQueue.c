#include<stdio.h>

#define N 5

int front = -1 , rear = -1;

int queue[N];

void enqueue(int data)
{
 if((rear+1)%N == front)
 {
 	printf("\nOverflow\n");
 	return;
 }
 
 else if(front == -1 && rear == -1)
 {
  	front = rear = 0;
  	
  	queue[rear] = data;
 }
 
 else
 {
 	rear = (rear+1)%N;
 	
  	queue[rear] = data;
 }
}

void dequeue()
{
 if(front == -1 && rear == -1)
 {
  printf("\nUnderflow\n");
  return;
 }
 
 else if(front == rear)
 {
  printf("\nDequeued : %d\n",queue[front]);
  
  front = rear = -1;
 }   
 
 else
 {
  printf("\nDequeued : %d\n",queue[front]);
  
  front = (front+1)%N;
 } 
 
}

void display()
{
 int i;
 
 printf("\nDisplaying the queue : ");
 
 for(i=front;i != rear;i=(i+1)%N)
 {
  printf("%d ",queue[i]);
 }
 
 printf("%d\n",queue[rear]);
}  


int main()
{
 int i;
 
 for(i=0;i<5;i++)
 	enqueue((i+1));
 	
 display();
 
 printf("\n===================\n");
 
 dequeue();
 
 printf("\n===================\n");
 
 display();
 
 printf("\n===================\n");
 
 enqueue(11);
 
 display();
 
 printf("\n===================\n");
 
 enqueue(33);
 
 for(i=0;i<5;i++)
 {
  dequeue();
 }
 
 dequeue();
 
 return 0;
}  
 
  
