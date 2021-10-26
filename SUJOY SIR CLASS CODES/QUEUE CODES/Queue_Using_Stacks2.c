
//IMPLEMENTING QUEUE USING STACK ( ENQUEUE IS COSTLY ).

#include<stdio.h>

#define N 5

int s1[N],s2[N];
int top1=-1,top2=-1;

int count=0;

void enqueue(int x);
void dequeue();
void push1(int data);
void push2(int data);
int pop1();
int pop2();
void display();

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
 
 printf("\n");
  
 return 0;
}

void enqueue(int x)
{
 int i;
 
 for(i=0;i<count;i++)
 {
   push2(pop1());
 }
 
 push2(x);
 
 count++;
 
 for(i=0;i<count;i++)
 {
  push1(pop2());
 }
  
}

void dequeue()
{
 
 int a;
 
 a=pop1();
 count--;
 
 printf("\n%d Popped out \n",a);
 
}

void push1(int data)
{
 if(top1==N-1)
 {
  printf("\nQueue is full\n");
  return;
 }
 
 else
 {
  s1[++top1]=data;
 }
}

void push2(int data)
{
 if(top2==N-1)
 {
  printf("\nQueue is full\n");
  return ;
 }
 
 else
 {
  s2[++top2]=data;
 }
}

int pop1()
{
 if(top1==-1)
 {
  printf("\nQueue is empty\n");
  return -1;
 }
 
 else
 {
  return s1[top1--];
 }
 
}

int pop2()
{
 if(top2==-1)
 {
  printf("\nQueue is empty\n");
  return -1;
 }
 
 else
 {
  return s2[top2--];
 }
 
}

void display()
{
 int i;
 
 if(top1==-1)
 {
  printf("\nQueue is empty\n");
  return;
 }
 
 else{ 
 printf("\nDisplaying the queue\t");
 
 for(i=top1;i>=0;i--)
 {
  printf("%d\t",s1[i]);
 }
 
 }
}

           
    
