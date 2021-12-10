
//REVERSE A STACK USING RECURSION AND USING STACK OPERATIONS

#include<stdio.h>
#include<stdlib.h>

#define N 5

int top=-1;

void push(int [],int );
int pop(int []);
int isEmpty(int []);
void insertAtBottom(int [],int);
void recursiveReverse(int []);
void display(int []);

int main()
{
 int stack[N];
 int n=5;
 int data;
 
 printf("\nFirstly taking input in the stack\n");
 
 while(n--)
 {
  printf("\nEnter the data ");
  scanf("%d",&data);
  
  push(stack,data);
  
 } 
 
 printf("\nDisplaying the stack before reversing \t");
 display(stack);
 
 recursiveReverse(stack);
 
 printf("\nDisplaying the stack after reversing\t");
 display(stack);
 
 return 0;
}

void push(int stack[N],int data)
{
 if(top==N-1)
 {
   printf("\nStack is full\n");
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

int isEmpty(int stack[N])
{
 if(top==-1)
 {
  return 1;
 }
 
 else
 {
  return 0;
 }
 
}

void insertAtBottom(int stack[N],int item)
{
    int temp;
    
    if (isEmpty(stack)==1)
        push(stack,item);
        
    else
    {
        temp = pop(stack);
        insertAtBottom(stack,item);
        push(stack,temp);
    }
}

void recursiveReverse(int stack[N])
{

   int data;
   
   if(isEmpty(stack)==1)
   {
      return;
   } 
   
   else
   {
     data=pop(stack);
     
     recursiveReverse(stack);
     
     insertAtBottom(stack,data);
   }
}

void display(int stack[N])
{
 int i;
 
 if(top==-1)
 {
  printf("\nStack is empty\n");
  return;
 }
 
 else
 {
    for(i=top;i>=0;i--)
    {
     printf("%d\t",stack[i]);
    }
    
    printf("\n");
 }
 
}

         
       
