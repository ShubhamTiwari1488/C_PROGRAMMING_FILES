#include<stdio.h>
#include<stdlib.h>

int Partition(int *arr,int lb,int ub);
void quickSort(int *arr,int lb,int ub);
void swap(int *num1,int *num2);

int main()
{
 int *arr;
 
 int n;
 
 printf("\nEnter the number of elements : ");
 scanf("%d",&n);
 
 arr = (int *)malloc(n*sizeof(int));
 
 if(!arr)
 	exit(1);
 	
 for(int i=0;i<n;i++)
 {
  printf("\nEnter the element %d ",i);
  scanf("%d",arr+i);
 }
 
 quickSort(arr,0,n-1);
  
 for(int i=0;i<n;i++)
 {
  printf("%d ",*(arr+i));
 }
 
 printf("\n");
 
 return 0;
}


int Partition(int *arr,int lb,int ub)
{
 int pivot = ub;	//The Last element is taken as the pivot
 
 int start = lb - 1;
 
 for(int i=lb;i<=ub-1;i++)
 {
  if(arr[i] < arr[pivot])
  {
   start++;
   
   swap(&arr[start],&arr[i]);
  }
  
 }
 
 swap(&arr[start+1],&arr[pivot]); 
 
 printf("\n\n================CURRENT SCENARIO==================\n\n");
  
 for(int i=lb;i<=ub;i++)
 {
  printf("%d ",arr[i]);
 }
  
 printf("\n=====================================================\n\n");
  
 printf("\n==========Loc is : %d====================\n",arr[start+1]);
  
 return start+1;
}

void quickSort(int *arr,int lb,int ub)
{
 
 if(lb > ub)
 	return;
 	
 int loc = Partition(arr,lb,ub);
 
 quickSort(arr,lb,loc-1);
 quickSort(arr,loc+1,ub);
 
}

void swap(int *num1,int *num2)
{
 int temp;
 
 temp = *num1;
 
 *num1 = *num2;
 
 *num2 = temp;
}   
