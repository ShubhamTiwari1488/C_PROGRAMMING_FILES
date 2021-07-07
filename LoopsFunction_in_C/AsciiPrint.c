
/*________________PRINT THE ALPHABET SET a TO z AND A TO Z IN DECIMAL AND CHARACTER FORM_____________________*/

#include<stdio.h>

int main()
{
 char ch,a=90,b='r';
 
 printf("\n\n");
 
 for(ch=65;ch<=122;ch++)
 {
  if(ch>90 && ch<97)
       continue;
       
  printf("|%d ----> %c|\n",ch,ch);
 }
 
 printf("\n");
 
 //printf("%c\n",a);
 //printf("%d\n",b);
 return 0;
}
        
