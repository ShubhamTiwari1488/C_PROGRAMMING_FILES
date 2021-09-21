
//WAP TO SWAP KTH NODE FROM THE BEGINNING WITH KTH NODE FROM THE END IN THE LINKED LIST

#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node *next;
};

struct node *CREATE(struct node *);

int length(struct node *);

void Display(struct node *);

int main()
{
 struct node *head,*temp,*node1,*node2,*prev1,*prev2;
 
 int k;
 int i,j,total;
 
 head=NULL;
 
 node1=NULL;
 node2=NULL;
 prev1=NULL;
 prev2=NULL;
 
 head=CREATE(head);
 
 Display(head);
 
 total=length(head);
 
 printf("\n\nEnter k ");
 scanf("%d",&k);
 
 i=1;
 j=1;
 
 temp=head;
 
 while(i<k && temp!=NULL)
 {
  prev1=temp;
  node1=temp->next;
  
  temp=temp->next;
  i++;
 }
 
 temp=head;
 
 while(j<(total-k+1) && temp!=NULL)
 {
  prev2=temp;
  node2=temp->next;
  
  temp=temp->next;
  j++;
 }
 
 if(prev1!=NULL)
 {
  prev1->next=node2;
 }
 
 if(prev2!=NULL)
 {
  prev2->next=node1;
 }
 
 temp=node1->next;
 node1->next=node2->next;
 node2->next=temp;
 
 if(prev1==NULL)
 {
  head=node2;
 }
 
 else if(prev2==NULL)
 {
  head=node1;
 }
   
 Display(head);
 
 printf("\n");
 return 0;
}  

struct node *CREATE(struct node *head)
{
 struct node *newnode,*temp;
 int n;
 
 n=1;
 head=NULL;
 
 while(n)
 {
  newnode=(struct node *)malloc(sizeof(struct node));
  
  printf("\nEnter the data ");
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
  
  printf("\nDo you want to continue ");
  scanf("%d",&n);
 }
 
 return head;
} 

   
int length(struct node *head)
{
 struct node *temp;
 int c=0;
 
 temp=head;
 
 while(temp!=NULL)
 {
  temp=temp->next;
  c=c+1;
 }
 
 return c;
}
     
void Display(struct node *head)
{
 struct node *temp;
 
 temp=head;
 
 printf("\nPrinting the contents of the linked list ::\t");
 
 while(temp!=NULL)
 {
  printf("%d\t",temp->data);
  temp=temp->next;
 }
 
}          
