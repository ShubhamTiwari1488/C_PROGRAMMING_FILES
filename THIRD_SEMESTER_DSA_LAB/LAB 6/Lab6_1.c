//POLYNOMIAL ADDITION (2 VARIABLE POLYNOMIAL)

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int x_pow;
    int y_pow;
    int coeff;
    struct node *next;
};

struct node *CREATE(struct node *start,int t)
{
    struct node *temp,*newnode;
    int i;
    for(i=1;i<=t;i++){
    newnode=(struct node *)malloc(sizeof(struct node));
    
    printf("\nPower of x ");
    scanf("%d",&newnode->x_pow);
    
    printf("\nPower of y ");
    scanf("%d",&newnode->y_pow);
    
    printf("\nEnter the coeff ");
    scanf("%d",&newnode->coeff);
    
    newnode->next=NULL;
    
    if(!start)
    {
        start=newnode;
        temp=newnode;
    }
    
    else{
        
        temp->next=newnode;
        temp=newnode;
    }
  }
  
  return start;
}

void display(struct node *start)
{
    struct node *temp;
    
    temp=start;
    
    while(temp->next!=NULL)
    {
        printf("%d X x^%d y^%d ",temp->coeff,temp->x_pow,temp->y_pow);
        temp=temp->next;
        if(temp->next!=NULL)
          printf("+");
    }
    
    printf("\b");
    printf("\n");
}

void poly_add(struct node *start1,struct node *start2,struct node *add)
{
    while((start1!=NULL)&&(start2!=NULL))
    {
        if((start1->x_pow==start2->x_pow) && (start1->y_pow==start2->y_pow))
        {
            add->x_pow=start1->x_pow;
            add->y_pow=start1->y_pow;
            add->coeff=(start1->coeff)+(start2->coeff);
            start2=start2->next;
            start1=start1->next;
        }
        
        else if((start1->x_pow>start2->x_pow) || (start1->y_pow>start2->y_pow))
        {
            add->x_pow=start1->x_pow;
            add->y_pow=start1->y_pow;
            add->coeff=start1->coeff;
            start1=start1->next;
        }
        
        else if((start1->x_pow<start2->x_pow) || (start1->y_pow<start2->y_pow))
        {
            add->x_pow=start2->x_pow;
            add->y_pow=start2->y_pow;
            add->coeff=start2->coeff;
            start2=start2->next;
        }
        
        add->next=(struct node *)malloc(sizeof(struct node));
        
        add=add->next;
        
        add->next=NULL;

    }
    
    while((start1!=NULL)||(start2!=NULL))
    {
        if(start1->next)
        {
           add->x_pow=start1->x_pow;
           add->y_pow=start1->y_pow;
           add->coeff=start1->coeff;
           start1=start1->next;
        }
        
        if(start2->next)
        {
            add->x_pow=start2->x_pow;
            add->y_pow=start2->y_pow;
            add->coeff=start2->coeff;
            start2=start2->next;
        }
        
        add->next=(struct node *)malloc(sizeof(struct node));
        add=add->next;
        add->next=NULL;
    }
}

int main()
{
    struct node *head1=NULL,*head2=NULL,*add;
    int t;
    printf("\nEnter the no of terms of the polynomial ");
    scanf("%d",&t);
    head1=CREATE(head1,t);
    
    printf("\nEnter the no of terms of the polynomial ");
    scanf("%d",&t);
    head2=CREATE(head2,t);
    
    add=(struct node *)malloc(sizeof(struct node));
    
    poly_add(head1,head2,add);
    
    printf("\nAfter adding the two polynomial we get ::\n");
    display(add);
    
    return 0;
}

