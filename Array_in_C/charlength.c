
// ERROR CORE SEGMENTATION FAULT

/*__________________________WAP TO DETERMINE THE LENGTH OF THE CHARACTER STRING_____________________________*/

#include<stdio.h>

int main()
{
 char *name,*cptr=name;
 int length;
 
 name="DELHI";
 
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
  
