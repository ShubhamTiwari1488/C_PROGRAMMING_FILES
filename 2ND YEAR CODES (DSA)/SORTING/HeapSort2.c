//Min Heap (Descending Order)

#include<stdio.h>

void swap(int *a,int *b);
void heapify(int arr[],int n,int i);
void heapSort(int arr[],int n);

int main()
{
 int arr[] = {5,4,3,1,2,2,9,21,-8,0};
 
 int n = sizeof(arr)/sizeof(arr[0]);
 
 heapSort(arr,n);
 
 for(int i=0;i<n;i++)
 	printf("%d ",arr[i]);
 	
 printf("\n");
 
 return 0;
}

void heapify(int arr[],int n,int i)
{
 int smallest = i; //Considering root node as the smallest
 
 int l = 2*i+1; //Left Child
 int r = 2*i+2; //Right Child
 
 if(l<n && arr[l] < arr[smallest])
 	smallest = l;
 	
 if(r<n && arr[r] < arr[smallest])
 	smallest = r;
 	
 if(smallest != i)
 {
  swap(&arr[i],&arr[smallest]);
  
  heapify(arr,n,smallest);//Again performing heapify unless the root node is actually smallest
 } 
 
}

void heapSort(int arr[],int n)
{
 
 //Build min heap
 for(int i = n/2-1;i>=0;i--)
 {
  heapify(arr,n,i);
 }
 
 //Deleting the elements( NOT ACTUALLY but just swapping it with the last position)
 
 //It will make the array SORTED
 for(int i = n-1;i>=0;i--)
 {
  swap(&arr[0],&arr[i]);
  
  heapify(arr,i,0); //Again heapify so that the root node is always smallest
 } 
}

void swap(int *a,int *b)
{
 int temp;
 
 temp = *a;
 
 *a = *b;
 
 *b = temp;
}  
