
//WAP TO SORT A DYNAMIC ARRAY OF N NUMBERS

#include<stdio.h>
#include<stdlib.h>

int main()
{
 int *arr;
 int n,i,j,min;
 
 printf("\nEnter the number of elements of the array\n");
 scanf("%d",&n);
 
 arr=(int *)malloc(n*sizeof(int));
 
 if(!arr)
 {
  printf("Memory not allocated\n");
  exit(1);
 }
 
 for(i=0;i<n;i++)
 {
  printf("\nEnter the element number %d : ",(i+1));
  scanf("%d",arr+i);
 }
 
 //USING SELECTION SORT
 
 min=arr[0];
 
 for(i=0;i<n;i++)
   for(j=i+1;j<n;j++)
   {
    if(arr[i]>arr[j])
     {
       min=arr[i];
       arr[i]=arr[j];
       arr[j]=min;
     }
     
   }
   
 printf("\nAfter sorting we get the array as ::\n");
 
 for(i=0;i<n;i++)
  printf("%d ",arr[i]);
 
 printf("\n");
  
 return 0;
}

          
