
/*______WAP TO FIND OUT THE SMALLEST AND LARGEST ELEMENT STORED IN AN ARRAY OF N INTEGERS_______*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
 int *arr;
 int n,i,small,large;
 
 printf("\nEnter the number of elements \n");
 scanf("%d",&n);
 
 arr=(int *)malloc(n*sizeof(int));
 
 if(arr==NULL)
   {
     printf("\nMemory not allocated\n");
     exit(1);
   }
     
 
 for(i=0;i<n;i++)
 {
  printf("\nEnter the element no %d : ",(i+1));
  scanf("%d",arr+i);
 }
 
 small=arr[0];
 large=arr[0];
 
 for(i=0;i<n;i++)
 {
  if(small>arr[i])
     small=arr[i];
     
  if(large<arr[i])
     large=arr[i];
     
 }
 
 printf("\nThe largest number in the array is %d\n",large);
 printf("The smallest number in the array is %d\n",small);
 
 return 0;
}
         
