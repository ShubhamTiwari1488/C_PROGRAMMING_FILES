
// PERFORMING SELECTION SORT

#include<stdio.h>

void SelectionSort(int arr[],int n)
{
 int i,j,min,temp;
 
 for(i=0;i<n;i++)
 {
  min=i;
  
  for(j=i+1;j<n;j++)
  {
   if(arr[j]<arr[min])
   {
    min=j;
   }
   
  }
  
  temp=arr[i];
  
  arr[i]=arr[min];
  
  arr[min]=temp;
 }
}

int main()
{
 int arr[10],n,i;
 
 printf("\nEnter the number of elements ");
 scanf("%d",&n);
 
 printf("\nEnter the elements \n");
 
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 
 SelectionSort(arr,n);
 
 printf("\nDisplaying the sorted array :: ");
 
 for(i=0;i<n;i++)
  printf("%d ",arr[i]);
  
 printf("\n");
 
 return 0;
}
  
