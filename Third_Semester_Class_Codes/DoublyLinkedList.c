
/*_______OPERATIONS IN DOUBLY LINKED LIST
1.Inserting at the beginning
2.Inserting at the end
3.Inserting at a particular position
4.Deleting from beginning
5.Deleting from end
6.Deleting from a particular position
7.Printing the number of odd and even numbers
8.Reversing the linked list
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

void InsertBefPos(struct node **start,int num,int pos_num)
{
 struct node *newnode,*prev,*temp;
 
 newnode=(struct node *)malloc(sizeof(struct node));
 
 newnode->data=num;
 
 temp=*start;
 
 while(temp->data!=pos_num)
 {
  prev=temp;
  temp=temp->next;
 } 
 
 prev->next=newnode;
 newnode->prev=prev;
 
 newnode->next=temp;
 temp->prev=newnode;
 
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

void DelFromPos(struct node **start)
{
 struct node *current,*prevnode;
 
 int pos,i;
 
 printf("\nEnter the position ");
 scanf("%d",&pos);
 
 i=1;
 
 current=*start;
 
 while(i<pos)
 {
  prevnode=current;
  current=current->next;
  i++;
 }
 
 prevnode->next=current->next;
 current->next->prev=prevnode;
 
 free(current);
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

void Reverse(struct node **start,struct node **tail)
{
 struct node *current,*nextnode;
 
 current=*start;
 
 while(current!=NULL)
 {
  nextnode=current->next;
  
  current->next=current->prev;
  current->prev=nextnode;
  
  current=nextnode;
 }
 
 current=*start;
 
 *start=*tail;
 
 *tail=current;
 
}
  

int main()
{
 struct node *start,*tail;
 
 int n,num,option,pos_num;
 
 
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
  printf("1.Inserting at the beginning\n2.Inserting at the end\n3.Inserting at a particular position\n4.Deleting from beginning\n5.Deleting from end\n6.Deleting from a particular position\n7.Printing the number of odd and even numbers\n8.Reversing the linked list\n");
  
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
        printf("\nEnter the number ");
        scanf("%d",&num);
        
        InsertAtLast(&tail,num);
        
        Display(start);
        break;
        
  case 3:
         printf("\nEnter the number");
         scanf("%d",&num);
         
         printf("\nEnter the pos_num after which you want to insert ");
         scanf("%d",&pos_num);
         
         InsertBefPos(&start,num,pos_num);
         
         Display(start);
         
         break;       
        
  case 4:
         DeleteFromBeg(&start);
         
         Display(start);
         
         break;
         
  case 5:
         DeleteFromLast(&tail);
         
         Display(start);
         
         break;
         
  case 6:
	 DelFromPos(&start);
	 
	 Display(start);
	 
	 break;
	 
  case 7:
         OddEven(start);
         
         break;
  
  case 8:
  	 Reverse(&start,&tail);
  	 
  	 Display(start);
  	 
  	 break;
  	                             
 default:
         printf("\nInvalid option\n");    
 }
         
 printf("Do you want to continue\n");
 scanf("%d",&n);
 }            
 return 0;
}
    
    
    
    
