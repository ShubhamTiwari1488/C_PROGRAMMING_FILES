
/*_____________FIND THE SUM OF N ELEMENTS ENTERED BY THE USER______________________________*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
 int n,i,*ptr,sum=0;
 
 printf("\nEnter no of elements\n");
 scanf("%d",&n);
 
 ptr=(int *)malloc(n*sizeof(int));
 
 if(ptr==NULL)
 {
  printf("\nError!memory not allocated\n");
  exit(0);
 }
 
 printf("\nEnter the elements of the array :\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",ptr+i);
  sum+=*(ptr+i);
 }
 
 printf("\nSum=%d\n",sum);
 
 printf("\n");
 return 0;
} 
     
     
     
