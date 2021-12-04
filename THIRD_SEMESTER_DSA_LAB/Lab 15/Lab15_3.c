
#include <stdio.h>

void swap(int *x,int *y)
{
   int temp=*x;
   *x=*y;
   *y=temp;
}

void selectionSort(int arr[], int n)
{
  int i, j, min_idx;

  for (i = 0; i < n-1; i++)
  {
    min_idx = i;
    for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
	   min_idx = j;

    swap(&arr[min_idx], &arr[i]);
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
	
    selectionSort(arr, n);

    printf("\nSorted array: \t");

    display(arr,n);

    return 0;
}

