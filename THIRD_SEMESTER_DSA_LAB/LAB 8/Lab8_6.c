
//REVERSE A STACK USING ANOTHER STACK

#include<stdio.h>

#define MAX 10

int top1=-1,top2=-1;

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

void display(int stack[MAX],int top)
{
 int i;
 
 //printf("\nDisplaying the stack :\t");
 
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
 int stack1[MAX],stack2[MAX];
 
 //int *t1,*t2;
 
 int n,i,data;
 
 //t1=&top1;
 //t2=&top2;
 
 printf("\nEnter the no of items in the stack ");
 scanf("%d",&n);
 
 printf("\nEnter the elements in the stack\n");
 
 for(i=0;i<n;i++)
 {
  scanf("%d",&data);
  
  //top1++;
  
  push(stack1,&top1,data);
  
  
 }
 
 printf("\nThe stack you entered is :\t");
 display(stack1,top1);
 
 for(i=0;i<n;i++)
 {
  
  //top2++;
  data=pop(stack1,&top1);
  //top1--;
  push(stack2,&top2,data);
  
 }
 
 printf("\nAfter reversing the stack we get :\t");
 
 display(stack2,top2);
 
 return 0;
}
  
    
    
