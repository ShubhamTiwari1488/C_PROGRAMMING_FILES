#include<stdio.h>


void Segrating(int arr[],int lb,int ub)
{
 int start = lb-1;
 int temp;
 
 for(int i=lb;i<=ub;i++)
 {
  if(arr[i] == 0)
  {
   start++;
   
   temp = arr[i];
   arr[i] = arr[start];
   arr[start] = temp;
  }
 }
 
 printf("\nThe Start Value is : %d",start);
}

int main()
{
 int arr[10] = {0,1,1,0,0,1,0,1,1,0};
 
 int n = sizeof(arr)/sizeof(arr[0]);
 
 Segrating(arr,5,n-1); 
 
 printf("\nAfter Segrating : ");
 
 for(int i=0;i<n;i++)
 	printf("%d ",arr[i]);
 	
 printf("\n");
 
 return 0;
} 
   
