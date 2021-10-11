
#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node *next;
};

void enqueue(struct node **front,struct node **rear)
{
 struct node *newnode=(struct node *)malloc(sizeof(struct node));
 
 printf("\nEnter  data ");
 scanf("%d",&newnode->data);
 
 newnode->next=NULL;
 
 if((*front)==NULL)
 {
  *front=newnode;
  *rear=newnode;
 }
 
 else
 {
  (*rear)->next=newnode;
  *rear=newnode;
 }  
 
}

void dequeue(struct node **front,struct node **rear)
{
 struct node *temp;
 
 if(front==NULL)
 {
  printf("Underflow");
  exit(0);
 }
  
 temp=*front;
 
 *front=temp->next;
 
 free(temp);
}

void display(struct node *front)
{
 struct node *temp;
 
 printf("\nDisplaying the details : \t");
 
 temp=front;
 while(temp!=NULL)
 {
  printf("%d\t",temp->data);
  
  temp=temp->next;
 }
 
 printf("\n");
}

void peek(struct node *front)
{

 if(front==NULL)
  printf("\nQueue is empty\n");
  
 else 
  printf("\nPeek operation : %d\n",front->data);
}
 
int main()
{
   struct node *front=NULL,*rear=NULL;
   
   int n=1,ch;
   
   while(n)
   {
    printf("\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.PEEK\n");
    printf("\nEnter the choice ");
    scanf("%d",&ch);
    
    switch(ch)
    {
     case 1: enqueue(&front,&rear);
             break;
             
     case 2: dequeue(&front,&rear);
             break;
             
     case 3: display(front);
     	     break;
     	     
     case 4:
            peek(front);
            break;
            	                     
    }
    
    printf("\nDo you want to continue ");
    scanf("%d",&n);
  }
    
   return 0;
}
