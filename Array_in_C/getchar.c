
/*_______________TAKING A STRING AS AN INPUT FROM THE USER AND PRINTING IT______________________*/

#include<stdio.h>
#include<string.h>

int main()
{
 int count=0,i=0,len;
 char str[80],ch;
 
 printf("\nEnter a string .Please enter <return> to exit\n");
 
 do{
  ch=getchar();
  str[i]=ch;
  count++;
  i++;
 }while(ch!='\n');
 
 str[i-1]='\0';
 
 len=strlen(str);
 
 printf("\nThe value of count is: %d\n",count);
 printf("\nThe value of strlen is : %d\n",len); 
 
 return 0;
}
 
