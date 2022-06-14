#include<stdio.h>
#include<stdlib.h>

int getMax(int arr[],int n)
{
 int max = arr[0];
 
 for(int i=1;i<n;i++)
 {
  if(arr[i] > max)
  {
   max = arr[i];
  }
 }
 
 return max;
}

void countSort(int arr[],int n,int exp)
{
 int *b = (int *)malloc(sizeof(int)*n);   
 
 int i,count[10] = {0};
 
 for(int i = 0;i<n;i++)
 {
  count[(arr[i]/exp)%10]++;
 }
 
 for(int i=1;i<10;i++)
 	count[i]+=count[i-1];
 	
 for(int i=n-1;i>=0;i--)
 {
  b[--count[(arr[i]/exp)%10]] = arr[i];
 }
 
 for(int i=0;i<n;i++)
 	arr[i] = b[i];
 	
}

void radixSort(int arr[],int n)
{
 int m = getMax(arr,n);
 
 for(int exp = 1; m/exp > 0;exp *=10)
 	countSort(arr,n,exp);
 	
}

int main()
{
 int arr[] = {12,54,5,33,29};
 
 int n = sizeof(arr)/sizeof(arr[0]);
 
 radixSort(arr,n);
 
 for(int i=0;i<n;i++)
 {
  printf("%d ",arr[i]);
 }
 
 printf("\n");

 return 0;
}     
