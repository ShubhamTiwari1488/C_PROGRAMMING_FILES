//BINARY SEARCH ALGORTITHM

#include<stdio.h>
#include<stdlib.h>

int binarySearch(int *arr,int n,int x)
{
 int mid;
 int index = -1;	//-1 signifies that the element is not found
 int top = n-1;
 int bottom = 0;
 
 do
 {
  mid = (top + bottom)/2;
  
  if(arr[mid] > x)
  	top = mid - 1;
  	
  else if(arr[mid] < x)
  	bottom = mid + 1;
  	
  else
  	index = mid;
  	
 }while(arr[mid] != x && bottom <= top);
 
 return index;
}

int main()
{
 int *arr;
 int n , x;
 
 printf("\nEnter the length of the array : ");
 scanf("%d",&n);
 
 arr = (int *)calloc(n,sizeof(int));
 
 if(!arr)
 	exit(1);
 	
 for(int i=0;i<n;i++)
 {
  printf("\nEnter the element %d : ",i);
  scanf("%d",arr+i);
  
 }
 
 printf("\nEnter the element to be searched : ");
 scanf("%d",&x);
 
 int index = binarySearch(arr,n,x);
 
 if(index != -1)
 	printf("\nThe element was found at index %d\n",index);
 	
 else
 	printf("\nThe element was NOT found\n");
 	
 return 0;
} 
  
 
 
