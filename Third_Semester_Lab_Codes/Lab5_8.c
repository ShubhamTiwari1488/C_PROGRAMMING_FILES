
//WAP TO CHECK WHETHER A DOUBLY LINKED LIST IS PALINDROME OR NOT

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
 
// Structure of node
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
 
/* Given a reference (pointer to pointer) to
   the head of a list and an int, inserts a
   new node on the front of the list. */
void push(struct Node** head, int data)
{
   struct Node *newnode,*temp;
   
   newnode=(struct Node *)malloc(sizeof(struct Node));
   
   newnode->data=data;
   newnode->next=NULL;
   newnode->prev=NULL;
   
   if((*head)==NULL)
   {
    *head=newnode;
    temp=newnode;
   }
   
   else
   {
    temp->next=newnode;
    newnode->prev=temp;
    
    temp=temp->next;
   }  
}
 
// Function to check if list is palindrome or not
bool isPalindrome(struct Node *left)
{
    if (left == NULL)
       return true;
 
    // Find rightmost node
    struct Node *right = left;
    while (right->next != NULL)
        right = right->next;
 
    while (left != right)
    {
        if (left->data != right->data)
            return false;
 
        left = left->next;
        right = right->prev;
    }
 
    return true;
}
 
// Driver program
int main()
{
    struct Node* head = NULL;
    
    int num,n;
    
    do{
     printf("\nEnter the data ");
     scanf("%d",&num);
     
     push(&head,num);
     
     printf("\nDo you want to continue ");
     scanf("%d",&n);
     
    }while(n); 
 
    if (isPalindrome(head))
        printf("\nIt is a Palindrome\n");
    else
        printf("\nIt is not Palindrome\n");
 
    return 0;
}
