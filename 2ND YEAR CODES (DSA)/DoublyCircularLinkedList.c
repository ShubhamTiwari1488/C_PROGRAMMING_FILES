
//PERFORMING OPERATION ON DOUBLY CIRCULAR LINKED LIST

/*_______
1.CREATE DOUBLY CIRCULAR LINKED LIST
2.INSERT AT BEGINNING
3.INSERT AT END 
4.DELETE FROM BEGINNING 
5.DELETE FROM END
6.INSERT AT SPECIFIC POINT 
7.DELETE AT SPECIFIC POINT
8.REVERSING THE LINKED LIST

                                          ________*/
                                          
#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node *next;
 struct node *prev;
};

void Create(struct node **,struct node **);
void InsertAtBeg(struct node **,struct node **);
void InsertAtLast(struct node **,struct node **);
void DelAtBeg(struct node **,struct node **);
void DelAtLast(struct node **,struct node **);
void InsertAtPos(struct node **,struct node **);
void DelAtPos(struct node **,struct node **); 
void Reverse(struct node *);
void Display(struct node *);

int main()
{
 struct node *head,*tail;
 
 int n,option;
 
 head=NULL;
 tail=NULL;
 
 n=1;
 
 while(n)
 {
  printf("\n1.CREATE DOUBLY CIRCULAR LINKED LIST\n2.INSERT AT BEGINNING\n3.INSERT AT END\n4.DELETE FROM BEGINNING\n5.DELETE FROM END\n6.INSERT AT SPECIFIC POINT\n7.DELETE AT SPECIFIC POINT\n8.REVERSING THE LINKED LIST\n9.DISPLAY THE CIRCULAR LINKED LIST");
  
  printf("\nEnter the option");
  scanf("%d",&option);
  
  switch(option)
  {
   case 1: 
          Create(&head,&tail);
          break;

   case 2:
          InsertAtBeg(&head,&tail);
          break;
   
   case 3:
          InsertAtLast(&head,&tail);
          break;
   
   case 4:
          DelAtBeg(&head,&tail);
          break;
   
   
   case 5:
          DelAtLast(&head,&tail);
          break;
   
   
   case 6:
          InsertAtPos(&head,&tail);
          break;
          
          
   case 7:
          DelAtPos(&head,&tail);
          break;
          
                        
   case 8:
          Reverse(tail);
          break;
          
   case 9:
          Display(head);
          break;
                           
   default:
           printf("\nPlease choose valid option");
  }
  
  printf("\nDo you want to continue");
  scanf("%d",&n);
 }
  
 return 0;
}

void Create(struct node **head,struct node **tail)
{
 struct node *newnode,*temp;
 int n;
 
 n=1;
 
 while(n)
 {
  newnode=(struct node *)malloc(sizeof(struct node)); 
  
  printf("\nEnter the data ");
  scanf("%d",&newnode->data);
  
  newnode->next=NULL;
  
  if(*head==NULL)
  {
   *head=newnode;
   temp=newnode;
  }
  
  else
  {
   temp->next=newnode;
   newnode->prev=temp;
   temp=newnode;
  }
  
  printf("\nDo you want to continue");
  scanf("%d",&n);
 }
 
 *tail=temp;
 (*tail)->next=*head;
 (*head)->prev=*tail;
 
}

void Display(struct node *head)
{
 struct node *temp;
 
 temp=head;
 
 printf("\nPrinting the data in linked list ::\t");
 
 while(temp->next!=head)
 {
  printf("%d\t",temp->data);
  temp=temp->next;
 }
 
 printf("%d\n",temp->data);
 
}      
 
void Reverse(struct node *tail)
{
 struct node *temp;
 
 temp=tail;
 
 printf("\nReversing the linked list::\t");
 
 while(temp->prev!=tail)
 {
  printf("%d\t",temp->data);
  temp=temp->prev;
}
  
 printf("%d\n",temp->data); 

}

void InsertAtBeg(struct node **head,struct node **tail)
{
 struct node *newnode;
 
 newnode=(struct node *)malloc(sizeof(struct node));
 
 printf("\nEnter the data");
 scanf("%d",&newnode->data);
 
 newnode->next=*head;
 newnode->prev=*tail;
 (*head)->prev=newnode;
 *head=newnode;
 (*tail)->next=*head;
}

void InsertAtLast(struct node **head,struct node **tail)
{
 struct node *newnode;
 
 newnode=(struct node *)malloc(sizeof(struct node));
 
 printf("\nEnter the data");
 scanf("%d",&newnode->data);
 
 newnode->next=*head;
 newnode->prev=*tail;
 (*head)->prev=newnode;
 (*tail)->next=newnode;
 *tail=newnode;
}
 
void DelAtBeg(struct node **head,struct node **tail)
{
 
 struct node *temp;
 
 temp=*head;
 
 (*tail)->next=temp->next;
 
 temp->next->prev=(*tail);
 
 *head=temp->next;
 
 free(temp);
}
  
void DelAtLast(struct node **head,struct node **tail)
{
 struct node *temp;
 
 temp=*tail;
 
 temp->prev->next=(*head);
 
 (*head)->prev=temp->prev;
 
 (*tail)=temp->prev;
 
 free(temp);
}

void DelAtPos(struct node **head,struct node **tail)
{
 int pos;
 int count=0,i=1;
 
 struct node *temp;
 
 temp=(*head);
 
 printf("\nEnter the position to be deleted ");
 
 scanf("%d",&pos);
 
 while(temp->next!=(*head))
 {
  temp=temp->next;
  count++;
 }
 
 if(pos==1)
 {
  DelAtBeg(head,tail);
 }
 
 else if(pos==(count+1))
 {
  DelAtLast(head,tail);
 }
 
 else
 {
  temp=(*head);
  
  while(i<pos)
  {
   temp=temp->next;
   i++;
  }
  
  temp->prev->next=temp->next;
  
  temp->next->prev=temp->prev;
  
  free(temp);
 }
}

void InsertAtPos(struct node **head,struct node **tail)
{
 struct node *temp,*newnode;
 
 newnode=(struct node *)malloc(sizeof(struct node));
 
 int pos;
 int count=0,i=1;
 
 while(temp->next!=(*head))
 {
  temp=temp->next;
  count++;
 }
 
 printf("\nEnter the position ");
 scanf("%d",&pos);
 
 
 if(pos==1)
 {
  InsertAtBeg(head,tail);
 }
 
 else if(pos==(count+1))
 {
  InsertAtLast(head,tail);
 }
 
 
 else{
 
  printf("\nEnter the data ");
  scanf("%d",&newnode->data);
 
  newnode->next=NULL;
  newnode->prev=NULL;
  
  temp=(*head);
  
  while(i<pos)
  {
  
   temp=temp->next;
   i++;
  }
  
  newnode->next=temp;
  
  temp->prev->next=newnode;
  
  newnode->prev=temp->prev;
 }
 
}
  
          
   




 
