
/*_________________________CONVERTING BINARY TO 2'S COMPLEMENT______________________________________*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void input(char []);
void display(char []);

int main()
{
 int i,j,len;
 char str[30];
 
 input(str);
 
 for(i=0;str[i]!='\0' /*&& str[i]!='\n'&& str[i]!='\r')*/ ;i++)    
                                                                 /*FGETS TAKES ENTER ALSO AS AN INPUT 
                                                 HENCE THAT PARTICULAR PROBLEM WAS CREATED.*/
 {
  if(str[i]!='1' && str[i]!='0')
   {     printf("\nPlease enter binary sequence and not any other one.\n");
         exit(0);
   }
   
  else
     continue;
  
 }
 
 len=strlen(str);
 
 printf("\nThe length of the string that you have entered is %d\n",len);    
 for(i=len-2;i>=0;i--)
 {
  if(str[i]=='0')
      str[i]='1';
      
  else
      str[i]='0';
      
 }
 
 printf("\nThe 2's complement of the binary sequence you have entered is :=\n");
 
 display(str);
 printf("\n");
 return 0;
}

void input(char A[])
{
 int i;
 
 printf("\nEnter a binary sequence that you want to convert to 2's complement\n");
 
 scanf("%[^\n]s",A);           //fgets(A,50,stdin);
 
}

void display(char A[])
{
 int i,len;
 len=strlen(A);
 for(i=0;i<len;i++)
 {
  printf("%c ",A[i]);
 }
 
 printf("\n");
 
}
        
                 
         
