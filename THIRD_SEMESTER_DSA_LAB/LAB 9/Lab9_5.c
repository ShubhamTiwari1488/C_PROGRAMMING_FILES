
#include<stdio.h>  
#include<stdlib.h>
 
struct node  
{  
    int data;  
    struct node *next;  
};  

struct node *front=NULL;  
struct node *rear=NULL;  

void enqueue(int x)  
{  
    struct node *newnode;  
    newnode=(struct node *)malloc(sizeof(struct node));  
    newnode->data=x;  
    newnode->next=0;  
    
    if(rear==NULL)  
    {  
        front=rear=newnode;  
        rear->next=front;  
    }  
    else  
    {  
        rear->next=newnode;  
        rear=newnode;  
        rear->next=front;  
    }  
}  
  

void dequeue()  
{  
    struct node *temp;   
    temp=front;  
    
    if((front==NULL)&&(rear==NULL))  
    {  
        printf("\nQueue is empty\n");  
    }  
    else if(front==rear) 
    {  
        front=NULL;
        rear=NULL;  
        free(temp);  
    }  
    else  
    {  
        front=front->next;  
        rear->next=front;  
        free(temp);  
    }  
}  
  

int peek()  
{  
    if((front==NULL) &&(rear==NULL))  
    {  
        printf("\nQueue is empty\n");  
    }  
    else  
    {  
        printf("\nThe front element is %d\n", front->data);  
    }  
}  
  

void display()  
{  
    struct node *temp;  
    temp=front;  
     
    if((front==NULL) && (rear==NULL))  
    {  
        printf("\nQueue is empty\n");  
    }  
  
    else   
    {  
        printf("\n The elements in the Queue are :\t"); 
        while(temp->next!=front)  
        {  
            printf("%d ", temp->data);  
            temp=temp->next;  
        }  
        printf("%d\n", temp->data);  
    }  
}  
  
int main()  
{  
    int choice=1,x;    
      
    while(choice<5 && choice!=0)   // while loop  
    {  
    printf("\n1: Insert an element");  
    printf("\n2: Delete an element");  
    printf("\n3: Display the element");
    printf("\n4. Peek Operation");  
    printf("\nEnter your choice");  
    scanf("%d", &choice);  
      
    switch(choice)  
    {  
          
        case 1:  
      
               printf("\nEnter the element which is to be inserted ");  
               scanf("%d", &x);  
               enqueue(x);  
               break;  
        
        case 2:  
              dequeue();  
              break;  
        
        case 3:  
              display();
              break;  
        
        case 4:
               peek();
               break;
  
    }
    
    } 
     
    return 0;  
}  
 

