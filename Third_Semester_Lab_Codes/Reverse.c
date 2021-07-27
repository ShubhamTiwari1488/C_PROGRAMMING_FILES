
// REVERSE THE CONTENTS OF A DYNAMIC ARRAY OF N ELEMENTS...

#include<stdio.h>
#include<stdlib.h>

int main()
{
 int *arr;
 int n,i,j,temp;
 
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
  printf("\nEnter the element no %d : ",(i+1));
  scanf("%d",arr+i);
 }
 
 i=0;
 j=n-1;
 
 while(i<j)
 {
  temp=arr[i];
  arr[i]=arr[j];
  arr[j]=temp;
  i++;
  j--;
 }
 
 printf("\nAfter reversing the array we get ::\n");
 for(i=0;i<n;i++)
 {
  printf("%d ",arr[i]);
 }
 
 printf("\n");
 
 return 0;
}
  
    
