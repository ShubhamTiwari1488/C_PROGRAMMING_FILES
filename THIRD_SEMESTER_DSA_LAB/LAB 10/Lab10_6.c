
#include<stdio.h>
#include<stdlib.h>

#define N 5

int stk[N];
int top=-1;

void push(int );
int pop();
int size();
int peekLowestElement();
int peekHighestElement();
int peekMiddleElement();
void display();

int main()
{
 int ch,x;
 
 while(1)
 { 
  printf("\n1.Push\n2.Pop\n3.peekLowestElement\n4.peekHighestElement\n5.peekMiddleElement\n6. Display\n7. Exit\n");
  printf("\nEnter choice ");
  scanf("%d",&ch);
  
  switch(ch)
  {
   case 1:
   	printf("\nEnter the data ");
   	scanf("%d",&x);
   	push(x);
   	break;
   	
   case 2:
   	x=pop();
   	if(x!=-1){
   	printf("\n%d Popped out",x);
   	}
   	break;
   	
   case 3:
   	x=peekLowestElement();
   	if(x!=-1)
   	printf("\nThe lowest element is %d",x);
   	break;
   	
   case 4:
   	x=peekHighestElement();
   	if(x!=-1)
   	printf("\nThe highest element is %d",x);
   	break;
   	
   case 5:
   	x=peekMiddleElement();
   	if(x!=-1)
   	printf("\nThe middle element is %d",x);
   	break;
   
   case 6:
   	display();
   	break;
   		
   default:
   	printf("\nExit\n");
   	exit(0);
   	
   }
  }
  
  return 0;
}
 
void push(int data)
{
  if(top==N-1)
  {
   printf("\nStack Overflow\n");
   return;
  }
  
  else
  {
   top++;
   stk[top]=data;
  }
  
}

int pop()
{
 if(top==-1)
 {
  printf("\nStack Underflow\n");
  return -1;
 }
 
 else
 {
  return stk[top--];
 }
 
}

int size()
{
 int i,size=0;
 
 i=0;
 
 while(i<=top)
 {
  size++;
  i++;
 }
 
 return size;
}

int peekLowestElement()
{
  if(top==-1)
  {
   printf("\nStack is empty\n");
   return -1;
  }
  
  else{
   
  return stk[0];
}
}

int peekHighestElement()
{
   if(top==-1)
  {
   printf("\nStack is empty\n");
   return -1;
  }
  
  else{
   
  return stk[top];
}
}

int peekMiddleElement()
{
 int mid,t;
 
 if(top==-1)
 {
  printf("\nStack is empty\n");
  return -1;
 }
 
 else
 {
   t=size();
   
   mid=t/2;
   
   return stk[mid];
   
 }
 
}

   
void display()
{
 int i;
 
 if(top==-1)
 {
  printf("\nStack is empty\n");
  return;
 }
 
 else
 {
  printf("\nDisplaying the stack\t");
  for(i=top;i>=0;i--)
   printf("%d\t",stk[i]);
 }
 
 printf("\n");
 
}             
 	
