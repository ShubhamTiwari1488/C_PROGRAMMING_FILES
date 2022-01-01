// USING TWO POINTER APPROACH

/* The idea is to solve this problem with constant space and linear time is by using a two-pointer or two-variable approach 
where we simply take two variables like left and right which hold the 0 and N-1 indexes. 

Just need to check that :

1.Check If the left and right pointer elements are negative then simply increment the left pointer.

2.Otherwise, if the left element is positive and the right element is negative then simply swap the elements, 
and simultaneously increment and decrement the left and right pointers.

3.Else if the left element is positive and the right element is also positive then simply decrement the right pointer.

4.Repeat the above 3 steps until the left pointer ≤ right pointer.
                                                                                            ________________________________*/


/*    This is an in-place rearranging algorithm for arranging the positive and negative numbers where the order of elements is not maintained.  */

#include<stdio.h>

void Rearrange(int arr[],int n)
{
   int temp;
   int left=0,right=n-1;
  
   while (left<=right)
  {
    if (arr[left] < 0 && arr[right] < 0)
      left+=1;
 
    else if (arr[left]>0 && arr[right]<0)
    {
      temp=arr[left];
      arr[left]=arr[right];
      arr[right]=temp;
      left+=1;
      right-=1;
    }
     
    else if (arr[left]>0 && arr[right] >0)
      right-=1;
     
    else{
      left += 1;
      right -= 1;
    }
     
  }
  
}

int main()
{
    
    int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
    
    int i;
    
    Rearrange(arr, 9);
    
    printf("\nAfter rearrangement we get ");
    
    for(i=0;i<9;i++)
       printf("%d ",arr[i]);
    
    printf("\n"); 
    
    return 0;
}
