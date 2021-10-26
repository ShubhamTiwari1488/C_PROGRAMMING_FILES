
#include <stdio.h>
#include <stdlib.h>

struct node 
{
 int data;
 int priority;

 struct node* next;

};

struct node* newNode(int data, int p)
{
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->data = data;
	temp->priority = p;
	temp->next = NULL;

	return temp;
}

int peek(struct node** head)
{
  return (*head)->data;
}

void pop(struct node** head)
{
	struct node* temp = *head;
	(*head) = (*head)->next;
	free(temp);
}

// Function to push according to priority
void push(struct node** head, int data, int p)
{
	struct node* start = (*head);
	struct node* temp = newNode(data, p);

	if ((*head)->priority > p) {

		temp->next = *head;
		(*head) = temp;
	}
	else 
	{

		while (start->next != NULL && start->next->priority < p) 
		{
			start = start->next;
		}

		
		temp->next = start->next;
		start->next = temp;
	}
}

int isEmpty(struct node** head)
{
	return (*head) == NULL;
}


int main()
{
  int data,p,n;
  
  struct node* head;
  
  printf("\nEnter the data ");
  scanf("%d",&data);
  
  printf("\nEnter the priority ");
  scanf("%d",&p);
  
  head=newNode(data,p);
  
  do
  {
   printf("\nEnter the data ");
   scanf("%d",&data);
   
   printf("\nEnter the priority ");
   scanf("%d",&p);
   
   printf("\nDo you want to continue ");
   scanf("%d",&n);
   
   push(&head,data,p);
   
  }while(n); 

  printf("\nDisplaying the priority queue\t");
  
  while (!isEmpty(&head)) 
  {
    printf("%d ", peek(&head));
    pop(&head);
  }
  
  printf("\n");
  
  return 0;
}


