#include<stdio.h>

void selectionSort(int arr[],int lb,int ub)
{

 int min,temp;
 
 for(int i=lb;i<=ub;i++)
 {
  min = i;
  
  for(int j=i+1;j<=ub;j++)
  {
   if(arr[j] < arr[min])
   { 
    min = j;
   }
  } 
  
  if(min != i)
  {
   temp = arr[min];
   arr[min] = arr[i];
   arr[i] = temp;
  }
 }
} 

int main()
{
 int arr[5] = {12,54,5,33,29};
 
 int n = sizeof(arr)/sizeof(arr[0]);
 
 selectionSort(arr,0,n-1);
 
 for(int i=0;i<n;i++)
 {
  printf("%d ",arr[i]);
 }
 
 printf("\n");
 
 return 0;
}     
