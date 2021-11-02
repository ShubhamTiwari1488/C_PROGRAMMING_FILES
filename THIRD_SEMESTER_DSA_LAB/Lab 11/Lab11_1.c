
//SORT A STACK USING RECURSION

#include <stdio.h>
#include <stdlib.h>

struct stack 
{
  int data;
  struct stack* next;
};

int isEmpty(struct stack* s)
{
	if (s == NULL)
		return 1;
	return 0;
}


void push(struct stack** s, int x)
{
	struct stack* p = (struct stack*)malloc(sizeof(*p));

	if (p == NULL) 
	{
		fprintf(stderr, "Memory allocation failed.\n");
		return;
	}

	p->data = x;
	p->next = *s;
	*s = p;
}

int pop(struct stack** s)
{
	int x;
	struct stack* temp;

	x = (*s)->data;
	temp = *s;
	(*s) = (*s)->next;
	free(temp);

	return x;
}

int top(struct stack* s) 
{ 
  return (s->data); 
}

void sortedInsert(struct stack** s, int x)
{
  int temp;
  if (isEmpty(*s) || x > top(*s)) 
  {
	push(s, x);
	return;
  }

	
  temp = pop(s);
  sortedInsert(s, x);

	
  push(s, temp);
}

void sortStack(struct stack** s)
{
  int x;
  
  if (!isEmpty(*s)) 
  {
    x = pop(s);

    sortStack(s);

    sortedInsert(s, x);
  }
}


void printStack(struct stack* s)
{
  while (s) 
  {
	printf("%d ", s->data);
	s = s->next;
  }
  printf("\n");
}


int main(void)
{
	struct stack* top=NULL;
	int n,data;
	
	printf("\nEnter the no of elements ");
	scanf("%d",&n);
	
	while(n)
	{
	 printf("\nEnter the data ");
	 scanf("%d",&data);
	 
	 push(&top,data);
	 
	 n--;
	}
	 
	printf("Stack elements before sorting:\n");
	printStack(top);

	sortStack(&top);
	printf("\n\n");

	printf("Stack elements after sorting:\n");
	printStack(top);

	return 0;
}

