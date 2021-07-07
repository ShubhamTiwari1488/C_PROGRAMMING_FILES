
/*_________________TAKE A BINARY INPUT FROM USER AND PRINT THE 2'S COMPLEMENT___________________________*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
 char str[100];
 int i,j,len;
 
 printf("\nEnter a binary number\n");
 scanf("%[^\n]s",str);
 
 for(i=0;str[i]!='\0';i++)
 {
  if(str[i]!='0' && str[i]!='1')
  {
   printf("\nInvalid binary sequence entered..........the program is going to quit\n");
   exit(0);
  }
 }
 
 len=strlen(str);
 
 for(i=len-1;str[i]!='1';i--);
 
 /*_i=len-1;
 
 while((str[i]!='1')&&(i>=0))
 {
  i=i-1;
 }   _*/
  
 for(j=i-1;j>=0;j--)
 {
  if(str[j]=='1')
    str[j]='0';
    
  else
    str[j]='1';
 }
 
 printf("\nThe 2's complementary of the binary number is %s\n",str);
 
 return 0;
}
        
