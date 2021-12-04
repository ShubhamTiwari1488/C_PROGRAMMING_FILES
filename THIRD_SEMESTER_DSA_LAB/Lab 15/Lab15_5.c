
//C Program
//Max heap to min heap conversion
#include <stdio.h>

//Swap two element in array
void swap(int arr[],int first,int second)
{
  int auxiliary=arr[first];
  arr[first]=arr[second];
  arr[second]=auxiliary;
}
//Compare the properties of min heap
int compare(int arr[],int left,int right,int root,int size)
{
  int location = -1;

  if(left < size &&  arr[left] < arr[root] )
  {

    if(right < size && arr[right] < arr[left])
    {
      swap(arr,right,root);
      location = right;
    }
    else
    {
      swap(arr,left,root);
      location = left;
    }
  }
  else if(right < size && arr[right] < arr[root])
  {
    swap(arr,right,root);
    location = right;
  }
  return location;
}
void heap(int arr[],int size,int root)
{
  int left  = 2*root+1;
  int right = 2*root+2;
 
  int next_in = compare(arr, left, right, root, size);
 
  if(next_in != -1)
  {
    heap(arr,size,next_in);
  }
}
//Display array elements
void print_data(int arr[],int size)
{
  
  for(int i = 0; i < size; i++)
  {
    printf("%3d",arr[i] );
  }
  printf("\n");
}

void min_heap(int arr[],int size)
{
  for (int i = (size/2)-1; i >= 0; i--)
  {
    heap(arr,size,i);
  }
}
int main()
{

  /*
         10
       /    \
      9       8
     / \     / \
    5   7   1   6
   /
  4
  */
  //Collection of max heap elements
  int heap[] = { 10,  9,  8,  5,  7,  1,  6, 4}; 

  //Get the size of elements
  int n = sizeof(heap) / sizeof(heap[0]); 

  printf("  Max heap : \n");
  print_data(heap,n);
  /*
         1
       /    \
      4       6
     / \     / \
    5   7   8   10
   /
  9
  */
  min_heap(heap,n);
  printf("  Min heap : \n");
  print_data(heap,n);
  return 0;
}
