
#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node *link;
};

struct node *top=0;

void Push(int x)
{
 struct node *newnode=(struct node *)malloc(sizeof(struct node));
 
 newnode->data=x;
 newnode->link=top;
 top=newnode;
 
}

void Pop()
{
 struct node *temp;
 temp=top;
 
 if(top==0)
 {
  printf("\nUnderflow ");
 }
 
 else
 {
  printf("\n%d Popped out ",top->data);
  
  top=top->link;
 } 
 
 free(temp);
}

void display()
{
 struct node *temp;
 
 temp=top;
 
 if(top==0)
 {
  printf("\nList is empty ");
 }
 
 else
 {
  printf("\nDisplaying the contents : ");
  
  while(temp!=0)
  {
   printf("%d ",temp->data);
   temp=temp->link;
  }
 }
}

void Check() 
{
 if(top==0)
  printf("\nList is empty ");
  
 else
   printf("\nList is not empty ");
   
}

int main()
{
 int ch,n=1,x;
 
 while(n)
 {
  printf("\nMENU :::\n1.Check\n2.Push\n3.Pop\n4.Display\n");
  printf("\nEnter your choice ");
  scanf("%d",&ch);
  
  switch(ch)
  {
   case 1:
          Check();
          break;
          
   case 2: 
           printf("\nEnter the data ");
           scanf("%d",&x);
           Push(x);
           break;
           
   case 3:
           Pop();
           break;
           
   case 4:
           display();
           break;
           
   default:
           printf("\nInvalid option");
           
  }
  
  printf("\nDo you want to continue ");
  scanf("%d",&n);
 } 
 
 return 0;
}
                  
