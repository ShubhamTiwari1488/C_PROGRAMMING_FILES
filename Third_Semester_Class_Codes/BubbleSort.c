
// PERFORMING BUBBLE SORT

#include<stdio.h>

void BubbleSort(int arr[],int n)
{
 int i,j,temp;
 
 for(i=0;i<n;i++)
 {
  for(j=0;j<n-i-1;j++)
  {
   if(arr[j]>arr[j+1])
   {
    temp=arr[j];
    
    arr[j]=arr[j+1];
    
    arr[j+1]=temp;
   }
   
  }
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
 
 BubbleSort(arr,n);
 
 printf("\nDisplaying the sorted array :: ");
 
 for(i=0;i<n;i++)
  printf("%d ",arr[i]);
  
 printf("\n");
 
 return 0;
}
  
