#include<stdio.h>
#include<stdlib.h>

int *b;	//Global Pointer

void mergeSort(int *arr,int lb,int ub);
void Merge(int *arr,int lb,int mid,int ub);

int main()
{
 int *arr;
 int n;
 
 printf("\nEnter the number of elements to enter : ");
 scanf("%d",&n);
 
 arr = (int *)malloc(n*sizeof(int));
 
 b = (int *)malloc(sizeof(int)*n);
 
 if(!arr && !b)
 	exit(1);
 
 printf("\nEnter the elements in the array::\n");
 
 for(int i=0;i<n;i++)
 {
  printf("\nEnter the element %d : ",i);
  scanf("%d",(arr+i));
 }
 
 
 printf("\nBefore Sorting the array is : ");
 
 for(int i=0;i<n;i++)
 	printf("%d ",*(arr+i));
 	
 printf("\n");
 	
 mergeSort(arr,0,n-1);
 
 printf("\nAfter Sorting the array is : ");
 for(int i=0;i<n;i++)
 	printf("%d ",*(arr+i));
 
 printf("\n");
 
 return 0;
}

void mergeSort(int *arr,int lb,int ub)
{
 int mid;
 
 if(lb < ub)
 {
  mid = (lb+ub)/2;
  
  mergeSort(arr,lb,mid);
  mergeSort(arr,mid+1,ub);
  
  Merge(arr,lb,mid,ub);
 }
 
 else
  return;
}


void Merge(int *arr,int lb,int mid,int ub)
{
 int i,j,k;
 
 for(i=lb,j=mid+1,k=lb;i<=mid && j<=ub;k++)
 {
  if(arr[i] <= arr[j])
  {
   b[k] = arr[i++];
  }
  
  else
  {
   b[k] = arr[j++];
  }
 }
 
 while(i<=mid)
 {
  b[k++] = arr[i++];
 }
 
 while(j<=ub)
 {
  b[k++] = arr[j++];
 }
 
 
 for(int num = lb;num<=ub;num++)
 {
  arr[num] = b[num];
 }

}         
