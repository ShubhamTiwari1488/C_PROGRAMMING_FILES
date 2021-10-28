
//SORTING THE ELEMENTS INSIDE A STACK USING ONLY PUSH AND POP OPERATION . ANY NUMBER OF ADDITIONAL STACKS MAY BE USED.

#include<stdio.h>

#define MAX 10

int top1=-1;

void push(int stack[MAX],int *top,int data)
{
 if(*top==(MAX-1))
   printf("\nStack Overflow");
   
 else
 {
  (*top)++;
  
  stack[(*top)]=data;
  
 }
 
}

int pop(int stack[MAX],int *top)
{
   int item;
   
   if(*top==-1)
    printf("\nStack Underflow");
    
   else
   {
    item=stack[(*top)];
    (*top)--;
   }
   
   return item;
}    

void sortStack(int input[],int size) 
{ 
  int tmpStack[size];
  int top=-1;
  while (size>=0) 
  { 
      int tmp = input[size]; 
      size--; 
      
      while (top>=0 && tmpStack[top] < tmp) 
      { 
          
          input[++size]=tmpStack[top]; 
          top--;
      } 
       
      tmpStack[++top]=(tmp); 
  } 
  while (top>=0) 
  { 
      printf("%d ",tmpStack[top]); 
      top--;
  } 
} 


void display(int stack[MAX],int top)
{
 int i;
 
 i=top;
 
 while(i!=-1)
 {
  printf("%d ",stack[i]);
  
  i--;
 }
 
 printf("\n");
}

int main()
{
 int stack[MAX];
 
 int n,i,data;
 
 printf("\nEnter the no of items in the stack ");
 scanf("%d",&n);
 
 printf("\nEnter the elements in the stack\n");
 
 for(i=0;i<n;i++)
 {
  scanf("%d",&data);
  
  push(stack,&top1,data);
  
 }
 
 printf("\nBefore sorting the stack we get :\t");
 display(stack,top1);
 
 printf("\nAfter sorting the stack we get :\t");
 sortStack(stack,top1);
 
 printf("\n");
 
 return 0;
}
 
 
 
