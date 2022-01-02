
//WAP TO REVERSE A STRING AND CHECK FOR PALINDROME 

#include<stdio.h>
#include<string.h>

int Reverse_Palindrome(char *str)
{
 int len,i,j,flag=1;
 
 char ch;
 
 len=strlen(str);
 
 i=0; j=len-1;
 
 while(i<=j)
 {
  ch=*(str+i);
  
  *(str+i)=*(str+j);
  
  *(str+j)=ch;
  
  if(*(str+i)!=*(str+j))
    flag=0;
    
  i++;
  j--;
 }
 
 return flag;
}

int main()
{
 char str[100];
 
 int flag;
 
 printf("\nEnter the string ");
 scanf("%[^\n]s",str);
 
 printf("\nThe string is : %s\n",str); 
 
 flag=Reverse_Palindrome(str);
 
 printf("\nAfter reversing the string : %s\n",str);
 
 if(flag)
   printf("\nThe string is palindromic in nature\n");
   
 else
   printf("\nIt is not a palindrome\n");
   
 return 0;
}
 
