#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
 int data;
 struct node *next;
 
} Queue;

Queue *front = NULL , *rear = NULL;

void enqueue(int data)
{
 Queue *newnode;
 
 newnode = (Queue *)malloc(sizeof(Queue));
 
 newnode->data = data;
 newnode->next = NULL;
 
 if(front == NULL && rear == NULL)
 {
   front = rear = newnode;
   rear->next = front;
 }
 
 else
 {
  rear->next = newnode;
  rear = newnode;
  rear->next = front;
 }
 
}

void dequeue()
{
 Queue *temp = front;
 
 if(front == NULL && rear == NULL)
 {
  printf("\nQueue is empty\n");
  return;
 }
 
 else if(front == rear)
 {
    front = rear = NULL;
 }
 
 else
 {
  front = front->next;
  
  rear->next = front;
 }
 
 printf("\nDequeued element is %d\n",temp->data);
 
 free(temp);
}

void display()
{
 Queue *temp = front;
 
 while(temp->next != front)
 {
  printf("%d ",temp->data);
  
  temp=temp->next;
 }
 
 printf("%d\n",temp->data);
 
 printf("\nRear Next is : %d\n",rear->next->data);
 printf("\nFront Next is : %d\n",front->next->data);
 
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
 
 display();
 
 printf("\n===================\n");
 
 dequeue();
 
 display();
 
 printf("\n===================\n");
 
 for(i=0;i<5;i++)
 {
  dequeue();
 }
 
 dequeue();
 
 return 0;
}  
 
    
