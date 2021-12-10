
//CHECK WHETHER THE LINKED LIST IS PALINDROMIC OR NOT

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL,*tail=NULL;
int size=0;

void addNode(int data)
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    
    else{
        
        tail->next=newnode;
        tail=newnode;
    }
    
    size++;
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

void isPalindrome()
{
    struct node *current=head;
    struct node *revHead;
    bool flag=true;
    
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

void display()
{
    struct node *current=head;
    
    if(head==NULL)
    {
        printf("List is empty\n");
        return;
    }
    
    printf("Displaying the data of the linked list\n");
    
    while(current!=NULL)
    {
        printf("%d",current->data);
        current=current->next;
    }
    
    printf("\n");
}

int main()
{
   int option,choice;
   int data;
   
   choice=1;
   
   printf("\n1.INSERT INTO LINKED LIST\n2.DISPLAY\n3.CHECK FOR PALINDROMIC\n");
   
   while(choice)
   {
    printf("Enter your option\n");
    scanf("%d",&option);
    
    switch(option)
    {
     case 1: 
            printf("\nEnter the data\n");
            scanf("%d",&data);
            addNode(data);
            
            break;
            
    case 2:
           display();
           break;
           
           
    case 3:
           printf("\nChecking for palindromic nature\n");
           isPalindrome();        
           break;
           
    }
    
    printf("\nDo you want to continue 1 for yes and 0 for no\n");
    scanf("%d",&choice);
  }
  
  return 0;         
}



