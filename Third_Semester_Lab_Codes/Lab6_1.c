
#include<stdio.h>
#include<stdlib.h>

struct node
{
int coeff;
int expo;
struct node *next;
};
struct pair
{
struct node *head;
struct node *tail;
};
struct node *input()
{
int x , y;
printf("\n Enter the coefficient and exponent :");
scanf("%d %d",&x,&y);
struct node *head=NULL;
struct node *tail=NULL;
while(y != -1)
{
struct node* new_node = (struct node*) malloc(sizeof(struct node));
new_node->next=NULL;
new_node->coeff=x;
new_node->expo=y;
if(head==NULL)
{
head=new_node;
tail=new_node;
}
else
{
tail->next=new_node;
tail=new_node;
}
printf("\n Enter the coefficient and exponent :");
scanf("%d %d",&x,&y);
}
return head;
}
void addpoly(struct node *start1,struct node *start2,struct node *start3)
{
while(start1 && start2)
{
if(start1->expo==start2->expo)
{
start3->expo=start1->expo;
start3->coeff=start1->coeff+start2->coeff;
start1=start1->next;
start2=start2->next;
}
else if(start1->expo>start2->expo)
{
start3->expo=start1->expo;
start3->coeff=start1->coeff;
start1=start1->next;
}
else
{
start3->expo=start2->expo;
start3->coeff=start2->coeff;
start2=start2->next;
}
start3->next= (struct node*)malloc(sizeof(struct node));
start3 = start3->next;
start3->next = NULL;
}
while (start1 || start2)
{
if (start1->next)
{
start3->expo = start1->expo;
start3->coeff = start1->coeff;
start1 = start1->next;
}
if (start2->next)
{
start3->expo = start2->expo;
start3->coeff = start2->coeff;
start2 = start2->next;
}
start3->next= (struct node*)malloc(sizeof(struct node));
start3 = start3->next;
start3->next = NULL;
}
}
void print(struct node *head)

{
struct node *ptr=head;
while(ptr != NULL)
{
printf("\t %d X %d ",ptr->coeff,ptr->expo);
ptr=ptr->next;
}
}
int main ()
{
struct node *start1=input();

printf("1st polynomial : \n");
print(start1);

printf("\n Enter the coefficient and exponent of 2nd linkedlist :");
struct node *start2=input();

printf("2nd polynomial : \n");
print(start2);

struct node *start3=(struct node*)malloc(sizeof(struct node));
addpoly(start1,start2,start3);

printf("\n added polynomial : \n");
print(start3);
printf("\n");

return 0;
}
