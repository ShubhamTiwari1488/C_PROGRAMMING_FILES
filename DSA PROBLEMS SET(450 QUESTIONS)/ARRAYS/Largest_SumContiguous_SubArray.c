
//LARGEST SUM CONTIGUOUS SUBARRAY

#include<stdio.h>
#include<limits.h>

void LargestContiguous(int arr[],int n)
{
 int i,j,k;
 
 int max,sum=0;
 
 int LR=-1,UR=-1;
 
 max=INT_MIN;
 
 for(i=0;i<n;i++)
 {  
  for(j=n-1;j>=i;j--)
  {  
   sum=0;
    
   for(k=i;k<=j;k++)
   {
    sum+=arr[k];
   }
   
   if(max<sum)
    {
     max=sum;
    
     LR=i;
     UR=j;
    }
  
  }//End of the loop
  
 } //End of the outermost loop
 
 printf("\nThe Contiguous Sub Array that has largest sum is :\t ");
 
 for(i=LR;i<=UR;i++)
 {
  printf("%d ",arr[i]);
 } 
 
 printf("\nAnd the sum is %d\n",max);
}

int main()
{
 int arr[]={-2,-3,4,-1,-2,1,5,-3};
 
 LargestContiguous(arr,8);
 
 return 0;
}
    
