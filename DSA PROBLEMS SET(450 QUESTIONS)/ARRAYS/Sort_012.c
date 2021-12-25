
//GIVEN AN ARRAY WITH 0,1,2 . SORT IT WITHOUT USING ANY SORTING ALGORITHM

#include<stdio.h>

void SORT_012(int arr[],int n)
{
 int i,c0=0,c1=0,c2=0;
 
 for(i=0;i<n;i++)
 {
  if(arr[i]==0)
   c0++;
   
  else if(arr[i]==1)
   c1++;
   
  else
   c2++;
 }
 
 
 int ar1=c0,ar2=c1;
 
 while(c0--)
  arr[c0]=0;
  
 while(c1--)
  arr[ar1+c1]=1;
  
 while(c2--)
  arr[ar1+ar2+c2]=2;
  
}  

 
int main()
{
 int arr[10]={0,1,2,2,2,2,1,0,0,1};
 
 int i;
 
 printf("\nThe array is :: ");
 
 for(i=0;i<10;i++)
   printf("%d ",arr[i]);
   
 printf("\n\nAfter sorting the array becomes :: ");
 
 SORT_012(arr,10);
 
 for(i=0;i<10;i++)
   printf("%d ",arr[i]);
   
 printf("\n");
 
 return 0;
}
 
 
 
