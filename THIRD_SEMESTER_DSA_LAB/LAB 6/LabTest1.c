
//LAB TEST 

#include<stdio.h>
#include<stdlib.h>

struct node 
{
 int data;
 struct node *prev;
 struct node *next;
};

void CREATE(struct node **start,struct node **end,int data)
{
 struct node *newnode,*temp;
 
 newnode=(struct node *)malloc(sizeof(struct node));
 
 newnode->data=data;
 
 newnode->next=NULL;
 newnode->prev=NULL;
 
 if((*start)==NULL)
 {
  *start=newnode;
  temp=newnode;
 }
 
 else
 {
  temp->next=newnode;
  newnode->prev=temp;
  *end=newnode;
  newnode->next=*start;
 }
}

void Display(struct node *start)
{
 struct node *temp;
 
 temp=start;
 
 while(temp->next!=start)
 {
  printf("%d\t",temp->data);
  temp=temp->next;
 }
 
 printf("%d\n",temp->data);
 
 printf("\n");
}

int main()
{
 struct node *head1,*head2,*head3,*tail1,*tail2,*tail3,*head4,*tail4,*temp1,*temp2;
 
 int roll,rem,data,num;
 
 head1=NULL;
 head2=NULL;
 head3=NULL;
 tail1=NULL;
 tail2=NULL;
 tail3=NULL;   
 
 int i=0;
 
 printf("\n===========Linked List 1 Input==============\n");
 
 while(i<12)    //Since we have to read 12 number of elements
 {
   printf("\nEnter the data ");
   scanf("%d",&data);
   
   CREATE(&head1,&tail1,data);
   
   i++;
 }
 
 i=0;
 
 printf("=============Linked List 2 Input===============\n");
 
 while(i<12)
 {
   printf("\nEnter the data ");
   scanf("%d",&data);
   
   CREATE(&head2,&tail2,data);
   
   i++;
 }
 
 i=0;
 
 printf("\n===========Linked List 3 Input=================\n");
 
 while(i<12)
 {
   printf("\nEnter the data ");
   scanf("%d",&data);
   
   CREATE(&head3,&tail3,data);
   
   i++;
 }
 
 i=0;
 
 temp1=head2;
 temp2=head3;
 
 while(i<12)
 {
  num=((temp1->data)*(temp2->data));
  
  CREATE(&head4,&tail4,num);
  
  temp1=temp1->next;
  temp2=temp2->next;
  
  i++;
 }
 
 printf("\nAfter multiplying 2nd and 3rd linked list :\t");
 
 Display(head4);
 
 i=0;
 
 temp1=head4;
 temp2=tail2;
 
 temp2->next=head4;    //POINTING THE TAIL OF LINKED LIST 2 TO THE LINKED LIST 4 WHICH IS PRODUCT LINKED LIST
 
 tail2=tail4;        // POINTING THE TAIL OF LINKED LIST OF 2 TO THE TAIL OF THE LINKED LIST 4
 
 
 printf("\nEnter your roll number ");
 scanf("%d",&roll);
 
 rem=roll%10;
 
 temp1=head2;
 i=1;
 
 while(i<rem)
 {
  temp1=temp1->next;
 }
 
 temp2=temp1->next;
 
 tail2->next=head2;
 
 head2=temp1;
  
 return 0;
}
   
    
