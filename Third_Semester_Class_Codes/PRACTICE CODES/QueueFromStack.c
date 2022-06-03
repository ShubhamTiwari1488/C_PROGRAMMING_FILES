//IMPLEMENTING USING ENQUEUE COSTLIER...

#include<stdio.h>

#define N 5

int top1 = -1 , top2 = -1;

int count = 0;

int stack1[N] , stack2[N];

void enqueue(int data);
void dequeue();
void push1(int data);
void push2(int data);
int pop1();
int pop2();
void display();

int main()
{
 int i;
 
 for(i=0;i<6;i++)
 {
  enqueue(i+1);
 }
 
 for(i=0;i<6;i++)
 {
  dequeue();
 }
   
 return 0;
}

void push1(int data)
{
 if(top1 == N-1)
 	return;
 	
 else
 {
  stack1[++top1] = data;
 }
}

void push2(int data)
{
 if(top2 == N-1)
 	return;
 	
 else
 {
  stack2[++top2] = data;
 }
}

int pop1()
{
 if(top1 == -1)
 	return -1;
 	
 else
 {
  return stack1[top1--];
 }
}

int pop2()
{
 if(top2 == -1)
 	return -1;
 	
 else
 {
  return stack2[top2--];
 }
}

void display()
{
 int i;
 
 printf("\nThe Queue Elements are : ");
 
 for(i=top1;i>=0;i--)
 	printf("%d ",stack1[i]);
 	
 printf("\n");
} 


void enqueue(int data)
{ 
 int a,i;
 
 if(top1 == N-1) {
 	printf("\nQueue is Full\n");
 	return;
 }
 	
 else if(top1 == -1)
 {
  top1 = 0;
  
  stack1[top1] = data;
   
  count = 1;
 }
 
 else
 {
  for(i=0;i<count;i++)
  {
   a = pop1();
   
   push2(a);
  }
  
  push2(data);
  
  count++;
  
  for(i=0;i<count;i++)
  {
   a = pop2();
   
   push1(a);
  }
 }
}

void dequeue()
{
 int num;
 
 if(top1 == -1)
 {
  printf("\nQueue is empty\n");
  return;
 }
 
 else
 {
   num = pop1();
   
   printf("\nDequeued Element is : %d\n",num);
    
   count--;
 }
}

