
#include<stdio.h>
#include<stdlib.h>

#define N 5

int stack[N];
int top=-1;


void Push()
{
 int x;
 printf("\nEnter the data ");
 scanf("%d",&x);
 
 if(top==N-1)
 {
  printf("\nOverflow");
 }
 
 else
 {
  top++;
  stack[top]=x;
 }
}

void Pop()
{
 int item;
 
 if(top==-1)
 {
  printf("\nUnderflow ");
 }
 
 else
 {
  item=stack[top];
  top--;
 }
 
 printf("\n%d Popped out ",item);
}

void display()
{
 int i;
 
 printf("\nDisplaying the contents : ");
 
 for(i=top;i>=0;i--)
 {
  printf("%d ",stack[i]);
 }
}   

void Check()
{
 if(top==-1)
 {
  printf("\nStack is empty ");
 }
 
 else
 {
  printf("\nThe stack is not empty ");
 }
}

int main()
{
 int ch,n=1;
 
 while(n)
 {
  printf("\nMENU ::::\n1.Check\n2.Push\n3.Pop\n4.Display\n");
  printf("\nEnter your choice ");
  scanf("%d",&ch);
  
  switch(ch)
  {
   case 1:
          Check();
          break;
          
   case 2: 
           Push();
           break;
           
   case 3:
           Pop();
           break;
           
   case 4:
           display();
           break;
           
   default:
           printf("\nInvalid option");
           
  }
  
  printf("\nDo you want to continue ");
  scanf("%d",&n);
 } 
 
 return 0;
}
          
                                                  
