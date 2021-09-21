

//WAP TO REPACE EVERY DYNAMIC ARRAY ELEMENT BY MULTIPLICATION OF PREVIOUS AND NEXT OF AN N ELEMENT

#include<stdio.h>
#include<stdlib.h>

void modify(int arr[], int n)
{
    int prev,curr,i;
    
    // Nothing to do when array size is 1
    if (n <= 1)
      return;
 
    // store current value of arr[0] and update it
    prev = arr[0];
    arr[0] = arr[0] * arr[1];
 
    // Update rest of the array elements
    for (i=1; i<n-1; i++)
    {
        // Store current value of next interaction
        curr = arr[i];
 
        // Update current value using previous value
        arr[i] = prev * arr[i+1];
 
        // Update previous value
        prev = curr;
    }
 
    // Update last array element
    arr[n-1] = prev * arr[n-1];
}
 
// Main function

int main()
{
    int *arr;
    int n,i;
    
    printf("\nEnter the size of the array \n");
    scanf("%d",&n);
    
    arr=(int *)malloc(n*sizeof(int));
    
    if(!arr)
    {
     printf("\nMemory not allocated\n");
     exit(0);
    }
    
    printf("\nEnter the elements of the array \n");
    
    for(i=0;i<n;i++)
    {
     scanf("%d",arr+i);
    }
      
    modify(arr, n);
    
    for(i=0; i<n; i++)
      printf("%d\t",arr[i]);
    
    printf("\n");
      
    return 0;
}
