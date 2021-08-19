/*_____Write a program to perform the following operations in a single linked list by using suitable user defined functions for each case separately.
a) create a link list
b) Traversal of the list.

c) Check if the list is empty.
d) insert a new node at the beginning.
e) delete a node at the beginning.
f) insert a new node at the end.
g)delete a node at the end.
h) count the total number of elements in a single linked list.
i) count total number of odd and even elements.

j) count how many primes are there in the linked list
k) check the linked list is palindrome or not.
_______*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
 int data;
 struct node *next;
};

struct node *head;

struct node *CREATE(struct node *);
struct node *InsertAtBeg(struct node *);
struct node *DelAtBeg(struct node *);
void Traverse(struct node *);
int Count(struct node *);
struct node *InsertAtLast(struct node *);
struct node *DelAtLast(struct node *);
void OddEven(struct node *);
void CheckList(struct node *);
void Prime(struct node *);
void isPalindrome(struct node *);
struct node *reverse(struct node *);

int main()
{
 int option;
 int n,size;
 
 n=1;
 
 while(n)
 {
  printf("\n1.create a link list\n2.Traversal of the list\n3.Check if the list is empty\n4.insert a new node at the beginning\n5.delete a node at the beginning\n6.insert a new node at the end\n7.delete a node at the end\n8.count the total number of elements in a single linked list\n9.count total number of odd and even elements\n10.count how many primes are there in the linked list\n11.check the linked list is palindrome or not\n");
  
  printf("Enter your choice\n");
  scanf("%d",&option);
  
  switch(option)
  {
   case 1:
          head=CREATE(head);
          break;
          
   case 2:
          Traverse(head);
          break;
          
   case 3:
          CheckList(head);
          break;
          
   case 4:
          head=InsertAtBeg(head);
          break;
          
   case 5:
          head=DelAtBeg(head);
          break;
          
   case 6:
          head=InsertAtLast(head);
          break;
          
   case 7:
          head=DelAtLast(head);
          break;
          
   case 8:
          size=Count(head);
          printf("The size of the linked list is : %d\n",size);
          break;
          
   case 9:
          OddEven(head);
          break;
          
   case 10:
           Prime(head);
           break;
           
   case 11:
           isPalindrome(head);
           break;
           
   default:
           printf("\nEnter a valid choice\n");
  }
  
  printf("Do you want to continue");
  scanf("%d",&n);
 }                                                        
    
 return 0;
}

struct node *CREATE(struct node *head)
{
 struct node *newnode,*temp;
 int choice;
 
 while(choice)
 {
 newnode=(struct node *)malloc(sizeof(struct node));
 
 printf("\nEnter the data\n");
 scanf("%d",&newnode->data);
 
 newnode->next=NULL;
 
 if(!head)
 {
  head=newnode; 
  temp=newnode;
 }
 
 else
 {
  temp->next=newnode;
  temp=newnode;
 }
 
 printf("\nEnter the choice ,i.e 0 for NO and 1 for YES\n");
 scanf("%d",&choice);
 } 
 return head;
}

void Traverse(struct node *head)
{
 struct node *temp;
 
 temp=head;
 
 CheckList(head);
 
 printf("\n=========================================================\n");
 printf("\nPrinting the data in the linked list:=\t");
 
 while(temp!=NULL)
 {
  printf("%d\t",temp->data);
  temp=temp->next;
 }
 
 printf("\n");
}

struct node *InsertAtBeg(struct node *head)
{
 struct node *newnode;
 
 newnode=(struct node *)malloc(sizeof(struct node));
 
 printf("\nEnter the data\n");
 scanf("%d",&newnode->data);
 
 newnode->next=head;
 head=newnode;
      
return head;
}

struct node *DelAtBeg(struct node *head)
{
 struct node *temp;
 
 temp=head;
 
 CheckList(head);
 
 head=head->next;
 
 free(temp);
 
 return head;
}

int Count(struct node *head)
{
 struct node *temp;
 int count=0;
 
 temp=head;
 
 CheckList(head);
 
 while(temp!=NULL)
 {
  count++;
  temp=temp->next;
 }
 
 //printf("\nNumber of elements in the linked list is %d\n",count);
 
 return count;
}   

struct node *InsertAtLast(struct node *head)
{
 struct node *temp,*newnode;
 
 newnode=(struct node *)malloc(sizeof(struct node));
 
 printf("\nEnter the data\n");
 scanf("%d",&newnode->data);
 newnode->next=NULL;
 
 temp=head;
 
 while(temp->next!=NULL)
 {
  temp=temp->next;
 }
 
 temp->next=newnode;
 
 return head;
}
 
struct node *DelAtLast(struct node *head)
{
 struct node *temp,*prev;
 
 temp=head;
 
 CheckList(head);
 
 while(temp->next!=NULL) 
 {
  prev=temp;
  temp=temp->next;
 }
 
 prev->next=NULL;
 
 free(temp);
 
 return head;
}

void OddEven(struct node *head)
{
 struct node *temp;
 int odd=0,even=0;
 
 temp=head;
 
 CheckList(head);
 
 while(temp!=NULL)
 {
  if(temp->data%2==0)
  {
   even++;
  }
  
  else if(temp->data%2!=0)
  {
    odd++;
  }
  
  temp=temp->next;
 }
 
 printf("\nNumber of even numbers is %d\n",even);
 printf("\nNumber of odd numbers is %d\n",odd);
 
}  

void CheckList(struct node *head)
{

 if(!head)
 {
  printf("\nThe list is empty\n");
  exit(0);
 }
 
}

void Prime(struct node *head)
{
 struct node *temp;
 int flag=0,prime=0,i;
 
for(temp=head;temp!=NULL;temp=temp->next)
{
 for(i=2;i<=(temp->data);i++)
 {
  if((temp->data)%i==0)
      flag=1;
      
 }             
 
 if(flag==0)
   prime++;
   
} 

printf("\nNumber of prime numbers are := %d\n",prime); 
}

void isPalindrome(struct node *head)
{
    struct node *current=head;
    struct node *revHead;
    bool flag=true;
    int size;
    
    size=Count(head);
    
    int mid=(size%2==0)?(size/2):((size+1)/2);
    
    for(int i=1;i<mid;i++)
    {
        current=current->next;
    }
    
    revHead=reverse(current->next);
    
    while(head!=NULL && revHead!=NULL)
    {
        if(head->data!=revHead->data)
        {
            flag=false;
            break;
        }
        
        head=head->next;
        revHead=revHead->next;
    }
    
    if(flag)
      printf("Given singly linked list is a palindrome\n");
    
    else
      printf("Given singly linked list is not a palindrome\n");
      
      
}



struct node *reverse(struct node *temp)
{
    struct node *current=temp;
    struct node *prevnode=NULL,*nextnode=NULL;
    
    while(current!=NULL)
    {
        nextnode=current->next;
        current->next=prevnode;
        prevnode=current;
        current=nextnode;
    }
    
    return prevnode;
}

