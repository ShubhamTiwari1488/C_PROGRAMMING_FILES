#include<stdio.h>

void insertionSort(int arr[],int lb,int ub)
{
 int temp,i,j;
 
 for(i=lb+1;i<=ub;i++)
 {
  temp = arr[i];
  
  for(j=i-1;j>=0;j--)
  {
   if(arr[j] > temp)
   {
    arr[j+1] = arr[j];
   }
   
   else
   {
     break;
   }
   
  }
  
  arr[j+1] = temp;
 }
} 

int main()
{
 int arr[5] = {12,54,5,33,29};
 
 int n = sizeof(arr)/sizeof(arr[0]);
 
 insertionSort(arr,0,n-1);
 
 for(int i=0;i<n;i++)
 	printf("%d ",arr[i]);
 	
 printf("\n");
 
 return 0;
} 
