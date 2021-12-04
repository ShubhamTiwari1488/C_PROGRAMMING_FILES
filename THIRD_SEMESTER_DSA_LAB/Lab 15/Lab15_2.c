
#include <stdio.h>

void swap(int *x,int *y)
{
  int temp=*x;
  *x=*y;
  *y=temp;
}

void bubbleSort(int arr[],int n)
{
 int i, j;
 
 int flag;
 
 for (i = 0; i < n-1; i++)
 {
  flag=0;
  
  for (j = 0; j < n-i-1; j++)
  {
    if (arr[j] > arr[j+1])
    {
     swap(&arr[j], &arr[j+1]);
     flag=1;
    }
  }

  if (flag==0)
     break;
 }
}

void display(int arr[],int size)
{
  int i;
  for (i=0; i < size; i++)
    printf("%d ", arr[i]);
		
  printf("\n");
}

int main()
{
  int arr[10];
  int n,i;
    
  printf("\nEnter the number of elements ");
  scanf("%d",&n);
    
  for(i=0;i<n;i++)
  {
    printf("\nEnter element %d ",i+1);
    scanf("%d",&arr[i]);
  }
  
  bubbleSort(arr, n);

  printf("\nSorted array:\t");
  
  display(arr, n);

  return 0;
}

