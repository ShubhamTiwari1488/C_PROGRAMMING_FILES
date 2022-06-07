#include<stdio.h>

void swap(int *a,int *b)
{
 int temp;
 
 temp = *a;
 *a = *b;
 *b = temp;
}
 
void bubbleSort(int arr[],int n)
{
 int i,j;
 
 int flag;
 
 for(i=0;i<n-1;i++)
 {
  flag = 0;
  
  for(j=0;j<n-1-i;j++)
  {
   if(arr[j] > arr[j+1])
   {
    swap(&arr[j],&arr[j+1]);
    flag = 1;
   }
  }
  
  if(!flag)
   break;
   
 }
}

int main()
{
 int arr[] = {12,54,5,33,29};
 
 int n = sizeof(arr)/sizeof(arr[0]);
 
 bubbleSort(arr,n);
 
 for(int i=0;i<n;i++)
 	printf("%d ",arr[i]);
 
 printf("\n");
 	
 return 0;
}    
