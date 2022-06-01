#include<stdio.h>
#include<stdlib.h>

int main()
{
 int max , count = 0 , size ,i;
 
 int *arr;
 
 printf("\nEnter the size of the array : ");
 scanf("%d",&size);
 
 arr = (int *)calloc(size,sizeof(int));
 
 if(!arr)
 {
  printf("\nError in allocating memory\n");
  exit(1);
 }
  
 printf("\nEnter the data in the array : : \n");
 
 for(i=0;i<size;i++)
 {
  printf("\nRow : %d ",i+1);
  scanf("%d",arr+i);
 }
 
 max = *arr;
 
 for(i=0;i<size;i++)
 {
   if(max < *(arr+i))
   {
    max = *(arr+i);
    count = 1;
   }
   
   else if(max == *(arr+i))
   {
    count++;
   }
   
   else
   {
    continue;
   } 
 }
 
 printf("\nThe Largest Number is : %d and occurrence is : %d\n",max,count);
 
 return 0;
}     
 
