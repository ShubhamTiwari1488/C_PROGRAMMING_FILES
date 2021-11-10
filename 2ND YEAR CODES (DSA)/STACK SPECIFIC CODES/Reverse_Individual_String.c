
//REVERSE INDIVIDUAL STRINGS

#include<stdio.h>
#include<string.h>

#define N 100

int top=-1;

void push(char [],char);
int pop(char []);
//void display(char []);
char ReverseIndividualStrings(char []);


int main()
{
 char str[100];
 char *reverse;
  
 printf("\nEnter a string ");
 scanf("%[^\n]s",str);
 
 printf("\nThe string you entered is : %s\n",str);
 
 ReverseIndividualStrings(str);
 
 printf("\nAfter reversing each individual strings the string becomes : %s\n",str);
 
 return 0;
}

void push(char str[N],char ch)
{
 if(top==N-1)
 {
  return;
 }
 
 else
 {
  str[++top]= ch;
 }
 
}

int pop(char str[N])
{
 if(top==-1)
  return -1;
  
 else
 {
  return str[top--];
 }
 
}

char ReverseIndividualStrings(char str[N])
{
 int len,i,j;
 
 char stack[N];
 char temp;
 
 len=strlen(str);
 j=0;
 
 for(i=0;str[i]!='\0';i++)
 {
  if(str[i]!=' ')
  {
   push(stack,str[i]);
  }
  
  else
  {
    for(;top!=-1;j++)
    {
     temp=pop(stack);
     
     str[j]=temp;
    }
    
    str[j]=' ';
    j++;
  }   
 }
 
 for(;top!=-1;j++)
 {
  temp=pop(stack);
  
  str[j]=temp;
 }
 
}
   
     
