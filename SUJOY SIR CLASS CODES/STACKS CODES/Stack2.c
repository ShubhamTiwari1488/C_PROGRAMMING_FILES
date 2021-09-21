
//PERFORMING SOME MORE OPERATION IN STACKS SUCH AS REVERSE 


#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int top,MAX;
int *stack;
int n;

void create(int);
int isFull();
int isEmpty();
void push(int);
int pop();
void peek();
void display();
void insertend(int);
void reverse();

void main()
{
 int val,option,size;
 printf("Enter the size of the stack:\n");
 scanf("%d",&size);
 create(size);
 do
 {
        printf("\n***MAIN MENU***");
        printf("\n 1. PUSH");
        printf("\n 2. POP");
        printf("\n 3. PEEK");
        printf("\n 4. DISPLAY");
        printf("\n 5. REVERSE");
        printf("\n 6. EXIT");
        printf("\n Enter your option");
        scanf("%d",&option);

        switch(option)
        {

           case 1:
               printf("\n Enter the number to be pushed in stack :");
               scanf("%d",&val);
               push(val);
               break;
           case 2:
               val=pop();
               if(val==0)
               {
               		printf("Stack Underflow\n");
			   }
			   else
			   {
			   	 	//printf("\n The deleted element from stack is : %d",val);
			   }
               break;
           case 3:
               peek();
               break;

           case 4:
               display();
               break;
           case 5:
           	   reverse();
           	   printf("The stack has been reversed...\n");
           	   break;
        }
    
}while(option !=6);

}

void create(int n)
{
	stack=(int*)calloc(n,sizeof(int));
	top=-1;
	MAX=n;
}
int isFull()
{
	if(top==MAX-1)
		return 1;
	else
		return 0;
}

int isEmpty()
{
	if(top==-1)
		return 1;
	else
		return 0;
}

void push(int val)
{
  if(isFull())
   printf("\nStack overflow");
   
   else
   {
    top++;
    stack[top]=val;
    //printf("%d pushed into the stack\n",val);
   }
}

int pop()
{
	if(isEmpty())
		return 0;
	else
  	{
   		return(stack[top--]);
  	}
}

void peek()
{
  if(isEmpty())
  {
   printf("Stack is Empty\n");
  }  
  else
  {
   printf("Peek element is %d\n",stack[top]);
  }
}

void display()
{
    int i;
    if(isEmpty())
    {
     printf("\nStack is empty");
    }  
  else
  {
  	printf("Stack elements are:\n");
    for(i=top;i>=0;i--)
      printf("\n%d",stack[i]);
  }
}
void insertend(int item)
{  
    if (isEmpty()) 
	{  
        push(item);  
    } 
	else
	{  
       	int temp = pop();  
        insertend(item);  
        push(temp);  
    }  
}   
void reverse()
{  
    if (!isEmpty()) 
	{  
        int temp = pop();  
        reverse();  
        insertend(temp);  
    }  
}
