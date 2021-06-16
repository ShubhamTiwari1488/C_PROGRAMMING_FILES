
/*______________CHECK WHETHER THE STRING IS PALINDROME OR NOT________________________________*/

#include<stdio.h>
#include<string.h>

int main()
{
 char str[100],copy[100];
 int i,j,len;
 
 printf("\nEnter a string which you want to check for palindrome test\n");
 scanf("%[^\n]s",str);
 
 len=strlen(str);
 
 for(i=(len-1),j=0;i>=0;i--,j++)
 {
  copy[j]=str[i];
 }
 
 if(strcmp(str,copy)==0)
   {
    printf("\nThe string is palindromic in nature\n");
    printf("\nThe string in the reverse order is :%s\n",copy);
   }
 else
    printf("\nThe string is not palindromic in nature\n");
      
 return 0;
}
