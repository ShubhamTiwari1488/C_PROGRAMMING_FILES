
// PERFORMING INSERTION SORT

#include<stdio.h>

void InsertionSort(int arr[],int n)
{
 int i,j,key;
 
 for(i=1;i<n;i++)
 {
  key=arr[i];
  
  for(j=i-1;j>=0;j--)
  {
   if(key<arr[j])
   {
    arr[j+1]=arr[j];
   }
   
   else 
    break;
    
   
  }
  
  arr[j+1]=key;
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
 
 InsertionSort(arr,n);
 
 printf("\nDisplaying the sorted array :: ");
 
 for(i=0;i<n;i++)
  printf("%d ",arr[i]);
  
 printf("\n");
 
 return 0;
}
     
