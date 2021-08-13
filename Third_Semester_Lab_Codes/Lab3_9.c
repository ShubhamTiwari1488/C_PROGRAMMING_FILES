
//WAP TO SEGREGRATE 0S ON LEFT SIDE AND 1S ON RIGHT SIDE OF THE ARRAY.TRAVERSE THE ARRAY ONLY ONCE.

#include<stdio.h>
#include<stdlib.h>

int main()
{
 int *arr;
 int n,i,count=0;
 
 printf("\nEnter the number of elements of the array\n");
 scanf("%d",&n);
 
 arr=(int *)calloc(n,sizeof(int));
 
 if(!arr)
 {
  printf("\nMemory not allocated\n");
  exit(0);
 }
 
 printf("\nEnter the elements of the array\n");
  
 for(i=0;i<n;i++)
 {
  scanf("%d",arr+i);
  
  if(arr[i]==0)
  {
   count++;
  }
   
 } 
 
 for(i=0;i<n;i++)
 {
  if(i<count)
  {
    arr[i]=0;
  }
  
  else
    arr[i]=1;  
 }
 
 printf("\nThe array after segregration is ::\t");
 
 for(i=0;i<n;i++)
 {
  printf("%d\t",arr[i]);
 } 
 printf("\n\n");
 
 return 0;
}

     
