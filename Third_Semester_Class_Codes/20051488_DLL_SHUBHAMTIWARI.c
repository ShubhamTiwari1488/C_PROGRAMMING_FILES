
/*_______OPERATIONS IN DOUBLY LINKED LIST
1.Inserting at the beginning
2.Inserting at the end
3.Deleting from beginning
4.Deleting from end
5.Printing the number of odd and even numbers
                                                    __________________*/
                                                    
#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node *next;
 struct node *prev;
};

void CreateList(struct node **start,struct node **tail,int num)
{
 struct node *newnode;
 
 newnode=(struct node *)malloc(sizeof(struct node));
 
 newnode->data=num;
 newnode->next=NULL;
 newnode->prev=NULL;
 
 if(*start==NULL)
 {
  *start=newnode;
  *tail=newnode;
 }
 
 else
 {
  (*tail)->next=newnode;
  newnode->prev=*tail;
  *tail=newnode;
 }
}

void Display(struct node *start)
{
  struct node *temp;
  
  temp=start;
  
  printf("\nPrinting the doubly linked list:\t");
  
  while(temp!=NULL)
  {
   printf("%d\t",temp->data);
   temp=temp->next;
  }
  
  printf("\n");
}

void InsertAtBeg(struct node **start,int num)
{
 struct node *newnode;
 
 newnode=(struct node *)malloc(sizeof(struct node));
 
 newnode->data=num;
 
 newnode->next=*start;
 (*start)->prev=newnode;
 
 newnode->prev=NULL;
 
 *start=newnode;
}

void InsertAtLast(struct node **tail,int num)
{
 struct node *newnode;
 
 newnode=(struct node *)malloc(sizeof(struct node));
 
 newnode->data=num;
 
 (*tail)->next=newnode;
 newnode->prev=*tail;
 newnode->next=NULL;
 *tail=newnode;
}

void DeleteFromBeg(struct node **start)
{
 struct node *temp;
 temp=*start;
 
 *start=temp->next;
 (*start)->prev=NULL;
 
 free(temp);
}

void DeleteFromLast(struct node **tail)
{
 struct node *temp;
 
 temp=*tail;
 
 *tail=temp->prev;
 
 (*tail)->next=NULL;
 
 free(temp);
}

void OddEven(struct node *start)
{
 struct node *temp;
 int ecount=0,ocount=0;
 
 temp=start; 
 
 while(temp!=NULL)
 {
  if(temp->data%2==0)
    ecount++;
    
  else
    ocount++;
    
  temp=temp->next;  
 }
 
 printf("\nNumber of odd elements is %d\n",ocount);
 printf("\nNumber of even elements is %d\n",ecount);
}
         
int main()
{
 struct node *start,*tail;
 
 int n,num,option;
 
 
 start=NULL;
 tail=NULL;
 
 n=1;
 
 while(n)
 {
  printf("\nEnter the data\n");
  scanf("%d",&num);
  
  CreateList(&start,&tail,num);
  
  printf("Do you want to continue 1 for yes and 0 for no");
  scanf("%d",&n);
 } 
 
 Display(start);
 
 n=1;
 
 
 while(n)
 {
  
  printf("\n1.Inserting at the beginning\n2.Inserting at the end\n3.Deleting from beginning\n4.Deleting from end\n5.Printing the number of odd and even numbers\n");
  
  printf("\nEnter option\n");
  scanf("%d",&option);
  
  switch(option)
 {
  case 1:
         printf("\nEnter the number");
         scanf("%d",&num);
         
         InsertAtBeg(&start,num);
         
         Display(start);
         break;
 
 case 2:
         printf("\nEnter the number");
         scanf("%d",&num);
         
         InsertAtLast(&tail,num);
         
         Display(start);
         break;
         
 case 3:
         DeleteFromBeg(&start);
         Display(start);
         break;
         
 case 4:
         DeleteFromLast(&tail);
         Display(start);
         break;
 
 case 5:
         OddEven(start);
         break;
                         
 default:
         printf("\nInvalid option\n");    
 }
         
 printf("Do you want to continue\n");
 scanf("%d",&n);
 }            
 return 0;
}
    
