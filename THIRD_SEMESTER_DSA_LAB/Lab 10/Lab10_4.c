
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

#define N 8

bool MATRIX[N][N] = {{0, 0, 1, 0},{0, 0, 1, 0},{0, 0, 0, 0},{0, 0, 1, 0}};

void push(int stack[N],int *top,int data)
{
 if(*top==N)
 {
  printf("\nOverflow");
  return;
 }
 
 else
 {
  (*top)++;
  stack[(*top)]=data;
 }
 
}

void pop(int stack[N],int *top)
{
 if(*top==-1)
 {
  printf("\nUnderflow");
  return;
 }
 
 else
 {
  (*top)--;
 }
 
}

int isempty(int stack[N],int top)
{
 if(top==-1)
   return 1;
   
 else
   return 0;
}
         
bool knows(int a, int b)
{
	return MATRIX[a][b];
}

int findCelebrity(int n)
{
	int s[N];
	int C,A,B,i;
       	int top=-1;

	for (i = 0; i < n; i++)
		push(s,&top,i);


	while (top>0)
	{ 
	  A = s[top];
		pop(s,&top);
		B = s[top];
		pop(s,&top);
		if (knows(A, B))
		{
		push(s,&top,B);
		}
		else
		{
		push(s,&top,A);
		}
	}
	
	if(isempty(s,top))
		return -1;


	
	C = s[top];
	pop(s,&top);

	for (i = 0; i < n; i++)
	{
		
		if ( (i != C) && (knows(C, i) || !knows(i, C)) )
			return -1;
	}

	return C;
}

int main()
{
	int n = 4;
	int id = findCelebrity(n);
			
	if(id==-1)
	  printf("\nNo stranger \n");
	  
  	else
  	  printf("\nStranger is %d\n",id);	  
	
	return 0;
}

