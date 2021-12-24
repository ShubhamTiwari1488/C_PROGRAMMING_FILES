//REVERSE THE ARRAY

#include<stdio.h>
#include<stdlib.h>

void Reverse(int *,int );

int main()
{
 int *arr;
 int n,i;
 
 printf("\nEnter the number of elements ");
 scanf("%d",&n);
 
 arr=(int *)malloc(n*sizeof(int));
 
 if(!arr)
 {
  printf("\nMemory not allocated\n");
  exit(0);
 }
 
 for(i=0;i<n;i++)
 {
  printf("\nEnter the element no %d ",i+1);
  scanf("%d",arr+i);
 }
 
 printf("\nBefore reversing \n");
 
 for(i=0;i<n;i++)
 {
  printf("%d\t",*(arr+i));
 }
 
 Reverse(arr,n);
 
 printf("\nAfter reversing \n");
 
 for(i=0;i<n;i++)
 {
  printf("%d\t",*(arr+i));
 }
 
 printf("\n");
 
 return 0;
}

void Reverse(int *arr,int n)
{
 int i,j;
 
 int temp;
 
 i=0;
 j=n-1;
 
 while(i<=j)
 {
 
  temp=*(arr+i);
  
  *(arr+i)=*(arr+j);
  
  *(arr+j)=temp;
  
  i++;
  j--;
  
 }
 
} 
  
