#include<stdio.h>
#include<stdlib.h>

int getMax(int arr[],int n)
{
 int max = arr[0];
 
 for(int i=1;i<n;i++)
 { 
  if(arr[i] > max)
  	max = arr[i];
  
 }
 
 return max;
}
 
void countingSort(int a[],int n,int range)
{
 int *count = (int *)calloc(range,sizeof(int));
 
 int *b = (int *)malloc(n*sizeof(int));
 
 
 //Incrementing the count
 for(int i = 0;i<n;i++)
 	count[a[i]]++;
 	
 	
 //Updating the count
 for(int i=1;i<=range;i++)
 	count[i] = count[i] + count[i-1];
 	
 
 //Sorting Occurs
 for(int i=n-1;i>=0;i--)
 	b[--count[a[i]]] = a[i];
 
 
 for(int i=0;i<n;i++)
 	a[i] = b[i];
 
}

int main()
{
 int arr[] = {54,2,2,4,3,3,5,9,1,1,7,1,1,0,99,21,0};
 
 int n = sizeof(arr)/sizeof(arr[0]);
 
 int range = getMax(arr,n);
 
 countingSort(arr,n,range);
 
 for(int i=0;i<n;i++)
 	printf("%d ",arr[i]);
 	
 printf("\n");
 
 return 0;
}  
 	
 
