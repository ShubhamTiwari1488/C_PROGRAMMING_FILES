#include<stdio.h>
#include<ctype.h>
#include<string.h>

#define MAX 10
float st[MAX];
int top=-1;

float pop(float st[]);
void push(float st[],float val);
float evaluateprefixexp(char exp[]);

int main()
{
 float val;
 char exp[100];
 

 printf("\n Enter any prefix expression: ");
   gets(exp);
   val=evaluateprefixexp(exp);
 
   printf("\n The corresponding value of prefix expression is: %0.2f\n",val);
   
   return 0;
}


float evaluateprefixexp(char exp[])
{
     int i;
     float op1,op2,value;
     int l=strlen(exp);i=l-1;


     while(i>=0)
     {

           if(isdigit(exp[i]))
           
              push(st,(float)(exp[i]-'0'));
            
           else
           {
              op2=pop(st);
              op1=pop(st);
               

              switch(exp[i])
              {

                 case '+':

                          value=op1+op2;
                          break;

                 case '-':

                          value=op2-op1;
                          break;

                 case '/':

                          value=op1/op2;
                          break;

                 case '*':

                          value=op1*op2;
                          break;

                 case '%':

                          value=(int)op1%(int)op2;
                          break;

             }  
              push(st,value);
        
          }
           i--;
     }
      return(pop(st));
}



void push(float st[],float val)
{
  if(top==(MAX-1))
   printf("\nStack overflow");

   else
   {
    top++;
    st[top]=val;
   }
}

float pop(float st[])
{
  float val=-1;
  if(top==-1)
   printf("\nStack underflow");
  
  else
  {
    val=st[top];
    top--;
  }

   return val;
}



