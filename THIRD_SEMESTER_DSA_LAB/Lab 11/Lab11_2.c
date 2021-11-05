
//REVERSE A STACK USING RECURSION

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
   char data;
   struct sNode *next;
};

void push(struct node** top_ref,int data);
int pop(struct node** top_ref);
bool isEmpty(struct node* top);
void print(struct node* top);


void insertAtBottom(struct sNode** top_ref,int item)
{
   if (isEmpty(*top_ref))
	push(top_ref, item);

   else
   {

     int temp = pop(top_ref);
     insertAtBottom(top_ref, item);


     push(top_ref, temp);

   }
}

void reverse(struct sNode** top_ref)
{
	if (!isEmpty(*top_ref))
	{
		
	    int temp = pop(top_ref);
            reverse(top_ref);

		
	    insertAtBottom(top_ref, temp);
	}
}

int main()
{
	struct node *s = NULL;
	int n,data;
	
	printf("\nEnter no of elements to push ");
	scanf("%d",&n);
	
	while(n)
	{
	 printf("\nEnter the data ");
	 scanf("%d",&data);
	 
	 push(&s,data);
	 
	 n--;
	} 
	
	printf("\n Original Stack ");
	print(s);
	
	reverse(&s);
	
	printf("\n Reversed Stack ");
	print(s);
	
	printf("\n");
	
	return 0;
}


bool isEmpty(struct node* top)
{
	return (top == NULL)? 1 : 0;
}


void push(struct node** top_ref,int data)
{
	
	
	struct node* newnode =(struct node*) malloc(sizeof(struct node));

	if (newnode == NULL)
	{
		printf("Stack overflow \n");
		exit(0);
	}

	
	newnode->data = data;

	
	newnode->next = *top_ref;

	
	*top_ref = newnode;
}


int pop(struct node** top_ref)
{
	char res;
	struct node *top;

	
	if (*top_ref == NULL)
	{
		printf("Stack overflow \n");
		exit(0);
	}
	else
	{
		top = *top_ref;
		res = top->data;
		*top_ref = top->next;
		free(top);
		return res;
	}
}


void print(struct node* top)
{
	printf("\n");
	while (top != NULL)
	{
		printf(" %d ", top->data);
		top = top->next;
	}
}


