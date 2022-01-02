
//FINDING THE DUPLICATES IN A STRING( USING HASHING).

#include<stdio.h>
#include<stdlib.h>

#define CHARS 256

void Character_Records(char *str,int *count)
{
 int i,len;
 
 for(i=0;str[i]!='\0';i++)
 {
  count[*(str+i)]++;
 }
 
}

void Print_Duplicates(char *str)
{
 int *count;
 
 int i,flag=0;
 
 count=(int *)calloc(256,sizeof(int));
 
 Character_Records(str,count);
 
 printf("\nThe duplicates characters are :: ");
 
 for(i=0;i<CHARS;i++)
 {
  if(count[i]>1)
  {
   printf("%c :%d\t",i,count[i]);
   flag=1;
  }
  
 }
 
 if(flag==0)
 {
  printf("NO duplicates found");
 }
  
 printf("\n");
}

int main()
{
 char str[100];
 
 printf("\nEnter the string ");
 scanf("%[^\n]s",str);
 
 printf("\nThe string is : %s\n",str);
 
 Print_Duplicates(str);
 
 return 0;
}
    
 
