
#include<stdio.h>

int main()
{
 char *name;
 int len,i=0;
 
 name="Namaste everyone";
 
 char *cptr;
 
 cptr=name;      //So now both the pointers point to the same string 
 
 printf("%s\n",name);
 printf("%s\n",cptr);
 
 while(*(cptr+i)!='\0')
 {
  printf("Character '%c' is stored in the address %u\n",*(cptr+i),(cptr+i));
  i++;
 }
 
 len=(cptr+i)-name;
 
 printf("\nLength of the string is %d\n",len);
 
 return 0;
}
 
