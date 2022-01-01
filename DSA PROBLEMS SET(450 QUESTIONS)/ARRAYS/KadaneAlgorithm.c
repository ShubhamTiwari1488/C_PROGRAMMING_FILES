
// FINDING LARGEST CONTIGUOUS SUBARRAY SUM ( HERE WE USE KADANE'S ALGORITHM).

#include<stdio.h>
#include<limits.h>

int SubArray(int arr[],int n)
{
 int max_here=0,max_soFar=INT_MIN;
 
 int i=0;
 
 while(i<n)
 {
  max_here+=arr[i];
  
  if(max_soFar<max_here)
  {
   max_soFar=max_here;
  }
  
  if(max_here<0)
    max_here=0;
  
  i++;
 }
 
 return max_soFar;
}

int main()
{
 int arr[]={-2,-3,4,-1,-2,1,5,-3};
 
 int max;
 
 max=SubArray(arr,8);
 
 printf("\nThe largest sum of the contiguous sub array is : %d\n",max);
 
 return 0;
}
        
 
