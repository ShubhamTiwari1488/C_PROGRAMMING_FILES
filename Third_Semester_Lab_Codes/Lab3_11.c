
/*__________WAP TO ARRANGE THE ELEMENTS OF A DYNAMIC ARRAY SUCH THAT ALL EVEN NUMBERS ARE FOLLOWED BY ALL ODD NUMBERS USING A SINGLE LOOP._____________*/

#include <stdio.h>
#include<stdlib.h>
 
// Function to rearrange the array in given way.
void rearrangeEvenAndOdd(int *arr, int n)
{
    int j = -1,i,temp;
 
    // Quick sort method
    for (i = 0; i < n; i++) {
 
        // If array of element
        // is odd then swap
        if (arr[i] % 2 == 0) {
 
            j++;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
 
int main()
{
    int *arr;
    int n,i;
    
    printf("\nEnter the number of elements of the array\n");
    scanf("%d",&n);
    
    arr=(int *)malloc(n*sizeof(int));
    
    if(!arr)
    {
     printf("\nMemory not allocated\n");
     exit(0);
    }
    
    printf("\nEnter the elements of the array\n");
    
    for(i=0;i<n;i++)
    {
     scanf("%d",arr+i);
    }  
 
    rearrangeEvenAndOdd(arr, n);
 
    for (int i = 0; i < n; i++)
       printf("%d\t",arr[i]);
       
    printf("\n");
    
    return 0;   
}
