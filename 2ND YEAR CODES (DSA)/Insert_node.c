
/*___________THIS PROGRAMME IS TO DEMONSTRATE INSERTION AT BEGINNING , AT END ,AND AT AFTER A SPECIFIC POSITION____*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node *next;
};

struct node *head,*newnode,*temp; 



void Display(struct node *);

//struct node *InsertAtBeg(struct node *);
void InsertAtBeg(struct node **);               // RETURN TYPE NOT REQUIRED IF WE USE DOUBLE POINTER........

void InsertAtEnd(struct node **);

void InsertAtPos(struct node **,int );

// MAIN STARTS FROM HERE.......

int main()
{
 int choice=1,pos;
 
 head=NULL;
 temp=NULL;
 
 printf("\nCreation of Linked List begins\n");
 
 while(choice)
 {
  newnode=(struct node *)malloc(sizeof(struct node));
  
  printf("\nEnter the data please\n");
  scanf("%d",&newnode->data);
  
  newnode->next=0;
  
  if(head==0)
  {
   head=newnode;
   temp=newnode;
  }
  
  else
  {
   temp->next=newnode;
   temp=newnode;
  }
  
  printf("Do you want to continue \\if yes then 1 else 0\\\n");
  scanf("%d",&choice);
  
 }
 
 Display(head);
 
 printf("\n----------------INSERTION OF DATA IN THE NODE------------------------------\n");
 
 printf("\nInsertion at beginning\n");
 
 //head=InsertAtBeg(head);           // THIS STATEMENT IF WE USE SINGLE POINTER 
 
 InsertAtBeg(&head);                // THIS STATEMENT IF WE USE DOUBLE POINTER
 
 
 Display(head);
 
 printf("\n\nInsertion at the end\n");
 
 InsertAtEnd(&head);
 
 Display(head);
 
 printf("\n\nInsertion after the position the user has asked for\n");
 
 printf("\nEnter the position after which you want to insert the element\n");
 scanf("%d",&pos);
 
 InsertAtPos(&head,pos);
 
 Display(head);
  
 return 0;
}
 
void Display(struct node *head)
{
 temp=head;
  
  printf("\n\nThe Linked List is being displayed :\t");
  while(temp!=0)
  {
   printf("%d ",temp->data);
   temp=temp->next;
  }
  
  printf("\n");
}
   
//struct node *InsertAtBeg(struct node *head)     
void InsertAtBeg(struct node **head)
{
 
 newnode=(struct node *)malloc(sizeof(struct node));
 
 printf("\nEnter data to be inserted at the beginning\n");
 scanf("%d",&newnode->data);
 
 newnode->next=NULL;
 
 if(*head==NULL)
 {
  printf("The list is empty\n");
  exit(0);
 }
 
 else{
  newnode->next=*head;
  *head=newnode;
 }
 
 //return head;
}

void InsertAtEnd(struct node **head)
{
 newnode=(struct node *)malloc(sizeof(struct node));
 
 printf("\nEnter the data to be inserted at the end\n");
 scanf("%d",&newnode->data);
 
 newnode->next=0;
 
 temp=*head;
 
 while(temp->next!=0)
 {
  temp=temp->next;
 }
 
 temp->next=newnode;
 
}  
 
 
void InsertAtPos(struct node **head,int pos)
{
 int i=1;
 
 newnode=(struct node *)malloc(sizeof(struct node));
 
 printf("\nEnter the data to be inserted after the %d position\n",pos);
 scanf("%d",&newnode->data);
 
 newnode->next=NULL;
 
 temp=*head;
 
 while(i<pos)
 {
  temp=temp->next;
  i++;
 }
 
 newnode->next=temp->next;
 temp->next=newnode;
  
}    
