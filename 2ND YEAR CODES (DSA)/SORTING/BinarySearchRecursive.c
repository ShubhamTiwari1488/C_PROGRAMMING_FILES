#include<stdio.h>
#include<stdlib.h>

int binarySearch(int *arr , int l , int r , int x)
{
 if(r < 1 || l >= r)
 	return -1;
 	
 int mid = (l + r-1)/2;
 
 if(arr[mid] < x)
 	return binarySearch(arr,(mid+1),r-1,x);
 	
 else if(arr[mid] > x)
 	return binarySearch(arr,l,(mid-1),x);
 	
 else 
 	return mid;
 	
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
 
 int index = binarySearch(arr,0,n,x);
 
 if(index != -1)
 	printf("\nThe element was found at index %d\n",index);
 	
 else
 	printf("\nThe element was NOT found\n");
 	
 return 0;
} 
