// WE APPLY HERE THE PARTITION PROCESS OF QUICKSORT

#include<stdio.h>

void swap(int *a,int *b)
{ 
    int temp;
    
    temp=*a;
    
    *a=*b;
    
    *b=temp;
}

void rearrange(int arr[],int n)
{
    int i=0,j=0;
    
    while(i<n)
    {
        if(arr[i]<0)
        {
            if(i!=j)
            {
                swap(&arr[i],&arr[j]);
            }
            
            j++;
        }
        
        i++;
    }
}

int main()
{
    
    int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
    
    int i;
    
    rearrange(arr, 9);
    
    printf("\nAfter rearrangement we get ");
    
    for(i=0;i<9;i++)
       printf("%d ",arr[i]);
    
    printf("\n"); 
    
    return 0;

}
