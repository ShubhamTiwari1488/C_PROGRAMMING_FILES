
/*__________________________WAP TO SORT A LIST OF NAMES IN ALPHABETIC ORDER_____________________________*/

#include<stdio.h>
#include<string.h>

#define ITEM 5
#define MAXCHAR 20

int main()
{
 char string[ITEM][MAXCHAR],dumny[MAXCHAR];
 int i=0,j=0;
 
 printf("\nEnter names of %d items below\n",ITEM);
 
 while(i<ITEM)
 {
  scanf("%s",string[i]);
  i++;
 }
 
 /*______SORTING BEGINS FROM HERE_________________*/
 
 for(i=1;i<ITEM;i++)
   for(j=1;j<=ITEM-i;j++)
   {
    if(strcmp(string[j-1],string[j])>0)
    {
     strcpy(dumny,string[j-1]);
     strcpy(string[j-1],string[j]); 
     strcpy(string[j],dumny);
    }
   }
   
 printf("\nAfter sorting the list is as follows :=\n\n");
 
 i=0;
 
 while(i<ITEM)
 {
  printf("%s\n",string[i]);
  i++;
 }
 
 printf("\n");
   
 return 0;
}    
