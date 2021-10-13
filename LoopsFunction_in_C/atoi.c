
// The "atoi" function converts the string (ex :- "1988") to its numeric equivalent ( 1988 ) and assigns it to the variable


#include<stdio.h>
#include<stdlib.h>

int main()
{
 
 char str[100];
 int num;
 
 printf("\nEnter the year \"Accepting the value as string \" ");
 scanf("%[^\n]s",str);
 
 num=atoi(str);
 
 printf("\nThe string value is %s\n",str);
 
 printf("\nThe numeric value is %d\n",num);
 
 printf("\nAdding plus 1 to the numeric value is %d\n",num+1);
 
 return 0;
}
  
