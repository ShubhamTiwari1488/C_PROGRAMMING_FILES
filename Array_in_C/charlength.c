/*__________________________WAP TO DETERMINE THE LENGTH OF THE CHARACTER STRING_____________________________*/

#include<stdio.h>

int main()
{
 char *name,*cptr;
 int length;
 
 name="DELHI";
 cptr=name;
 
 printf("%s\n",name);
 
 while(*cptr!='\0')
 {
  printf("%c\n",*cptr);
  cptr++;
 }
 
 length=(cptr-name);
 printf("\nLength of the string =%d\n",length);
 
 return 0;
}
  
