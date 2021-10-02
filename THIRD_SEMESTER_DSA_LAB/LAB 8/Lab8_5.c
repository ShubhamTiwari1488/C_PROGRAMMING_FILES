
#include<stdio.h>
#include<string.h>

#define MAX 100
int stk[MAX];
int top=-1;

char pop();
void push(char);

int main()
{
 char exp[MAX]; int temp,i,flag=1;
 

 printf("\nEnter an expression ");
 fgets(exp,100,stdin);


 for(i=0;i<strlen(exp);i++)
   {

      if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
       
        push(exp[i]);

      if(exp[i]==')' || exp[i]=='}' || exp[i]==']')
      {

         if(top==-1)
            flag=0;

         else
         {
             temp=pop();

             if(exp[i]==')' && (temp=='{' || temp=='['))
             flag=0;

             if(exp[i]=='}' && (temp=='(' || temp=='['))
             flag=0;

             if(exp[i]==']' && (temp=='(' || temp=='{'))
             flag=0;

         }

      }
   }


   if(top>=0)
    flag=0;

   if(flag==1)
    printf("\nIt is a Valid expression");

   else
   printf("\nIt is an Invalid expression"); 
 
   printf("\n");
   
   return 0;
}


void push(char c)
{
  if(top==(MAX-1))
   printf("\nStack overflow");

   else
   {
    top++;
    stk[top]=c;
   }
}

char pop()
{
  char c;
  if(top==-1)
   printf("\nStack underflow");
  
  else
  c=stk[top];
   top--; 
  return c;
}


