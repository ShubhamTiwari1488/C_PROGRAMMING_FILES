
#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node *next;
 struct node *prev;
};

void CREATE(struct node **head,struct node **tail,int n)
{
 struct node *newnode,*temp;
 
 while(n)
 {
  newnode=(struct node *)malloc(sizeof(struct node));
  
  newnode->next=NULL;
  newnode->prev=NULL;
  
  printf("\nEnter the data ");
  scanf("%d",&newnode->data);
  
  if((*head)==NULL)
  {
   *head=newnode;
   temp=newnode;
  }
  
  else{
  
   temp->next=newnode;
   newnode->prev=temp;
   
   temp=newnode;
  }
  
  *tail=temp;
  
  n--;
 }
}

void Traverse1(struct node *head)
{
 struct node *temp;
 
 printf("\nTraversing in the forward direction :\t");
 
 temp=head;
 
 while(temp!=NULL)
 {
  printf("%d\t",temp->data);
  temp=temp->next;
 }
 
 printf("\n");
}

void Traverse2(struct node *tail)
{
 struct node *temp;
 printf("\nTraversing in the backwards direction :\t");
 
 temp=tail;
 
 while(temp!=NULL)
 {
  printf("%d\t",temp->data);
  temp=temp->prev;
 }
 
 printf("\n");
}
  
void Check(struct node *head)
{
 
 if(head==NULL)
 {
  printf("\nThe List is empty\n");
 }
 
 else
  printf("\nThe list is not empty\n");
}

void Insert(struct node **head,struct node **tail,int pos)
{
 struct node *temp,*newnode,*prevnode;
 
 int i=1,n;
 
 n=4;
 
 newnode=(struct node *)malloc(sizeof(struct node));
 
 printf("\nEnter data ");
 scanf("%d",&newnode->data);
 
 newnode->prev=NULL;
 newnode->next=NULL;
 
 if(pos==1)
 {
   newnode->next=*head;
   
   //(*tail)->next=newnode;
   
   (*head)->prev=newnode;
   
   *head=newnode;
 }
 
 if(pos==n)
 {
  
  newnode->prev=*tail;  
  (*tail)->next=newnode;
  
  *tail=newnode;
 }
 
 else
 {
  i=1;
  
  temp=*head;
  
  while(i<pos)
  {
   prevnode=temp;
   temp=temp->next;
   i++;
  }
  
  newnode->next=temp;
  newnode->prev=prevnode;
  
  prevnode->next=newnode;
  
  temp->prev=newnode;
  
 }
}

int Search(struct node *head,int num)
{
 struct node *temp;   
 int i;
 
 temp=head;
 
 i=1;
 
 while(temp!=NULL)
 {
  if(temp->data==num)
  {
   printf("\nThe number is found at the position %d\n",i); //Skip this during writing the lab record.
   break;
  }
  
  i++;
  temp=temp->next;
 }  
 
 printf("\n");
 
 return i;
}

void Count(struct node *head)
{
 struct node *temp;
 int count=0;
 
 temp=head;
 
 while(temp!=NULL)
 {
  count++;
  temp=temp->next;
 }
 
 printf("\nTotal no of nodes are := %d\n",count);
 
// return count;
}

void DelAtPos(struct node **head,struct node **tail,int pos)
{
 struct node *prevnode,*nextnode,*temp;
 
 int i=1;
 
 prevnode=NULL;
 nextnode=*head;
 temp=*head; 
 
 while(i<pos)
 {
   prevnode=temp;
   temp=temp->next;
   nextnode=temp->next;
   
   i++;
 }
 
 if(prevnode==NULL){
 //prevnode->next=nextnode;    
 nextnode->prev=prevnode;
 (*head)=nextnode;
}

 else if(nextnode==NULL){
 
 prevnode->next=nextnode;
 (*tail)=prevnode;
 
 }
 
 else{
 
 prevnode->next=nextnode;
 nextnode->prev=prevnode;
}

free(temp);
}

void DelAtKey(struct node **head,struct node **tail,int pos)
{
  struct node *prevnode,*nextnode,*temp;
 
 int i=1;
 
 prevnode=NULL;
 nextnode=*head;
 temp=*head; 
 
 while(i<pos)
 {
   prevnode=temp;
   temp=temp->next;
   nextnode=temp->next;
   
   i++;
 }
 
 if(prevnode==NULL){
 //prevnode->next=nextnode;    
 nextnode->prev=prevnode;
 (*head)=nextnode;
}

 else if(nextnode==NULL){
 
 prevnode->next=nextnode;
 (*tail)=prevnode;
 
 }
 
 else{
 
 prevnode->next=nextnode;
 nextnode->prev=prevnode;
}

free(temp);
}
     
int main()
{
 struct node *head,*tail;
 head=NULL;
 tail=NULL;
 
 int n,pos,num,ch;
 
 printf("\nEnter the no of node ");
 scanf("%d",&n);
 
 CREATE(&head,&tail,n);
 
 n=1;
 while(n)
{ 
 
 printf("\nMENU DRIVEN:=\n\n1. Traverse Forward\n2. Traverse Backwards\n3. Check List\n4. Insert node\n5. Delete node\n6. Delete Key\n7. Count nodes\n8. Search element\n\n");

printf("\nEnter your choice\n");
scanf("%d",&ch);

switch(ch)
{
 case 1: 
        Traverse1(head);
        break;
        
 case 2:
        
        Traverse2(tail);
        break;   
        
 case 3:
        Check(head);
        break;    
        
 case 4:
        printf("\nEnter the pos to insert ");
        scanf("%d",&pos);
        
       // n=Count(head);
        
        Insert(&head,&tail,pos);
        
        break; 
        
        
  case 5:
        printf("\nEnter the pos to delete ");
        scanf("%d",&pos);
        
        DelAtPos(&head,&tail,pos);
        break;
        
  case 6:
        printf("\nEnter the key ");
        scanf("%d",&num);
        
        pos=Search(head,num);
        
        DelAtKey(&head,&tail,pos);
        
        break;    
        
  case 7:
         Count(head);
         
         //printf("\nThe no of nodes are %d\n",n);
         
         break; 
  
  case 8:
         printf("\nEnter the num ");
         scanf("%d",&num);
         
         //n=Count(head);
         
         pos=Search(head,num);
         
         //if(pos<=n)
           //printf("\nElement found at %d position \n",pos);
           
         //else 
          // printf("\nElement not found\n");
             
         break; 
         
  
  }
 
  printf("\nDo you want to continue ");
  scanf("%d",&n);
  
 }          
 
 return 0;
}
        
        
        
