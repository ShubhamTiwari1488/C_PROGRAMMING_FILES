//Linear Search using recursion

#include<stdio.h>

int recursionLinearSearch(int arr[],int l,int r,int x)
{
 if(r<1)
 	return -1;
 
 if(l == r+1)
  	return -1;
  		
 if(arr[l] == x)
 	return l;
 	
 return recursionLinearSearch(arr,l+1,r,x);
}
 
int main()
{
 int arr[] = {12,34,54,2,3},i;
 
 int n = sizeof(arr)/sizeof(arr[0]);
 
 int x;
 
 printf("\nEnter the element of the array to be searched : ");
 
 scanf("%d",&x);
 
 int index = recursionLinearSearch(arr,0,n-1,x);
 
 if(index != -1)
 { 
  printf("\nFound at %d\n",index);
 }
 
 else
 {
  printf("\nNot Found\n"); 
 }
 
 return 0;
}  
