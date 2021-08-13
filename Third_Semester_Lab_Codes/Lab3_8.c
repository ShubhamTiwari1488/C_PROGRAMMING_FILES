
//WAP TO FIND THE LARGEST NUMBER AND COUNTS THE OCCURENCE OF THE LARGEST NUMBER


#include<stdio.h>
#include<stdlib.h>

int main()
{
 int *arr;
 int n,i,j,large,count;
 
 printf("\nEnter the number of elements\n");
 scanf("%d",&n);
 
 arr=(int *)malloc(n*sizeof(int));
 
 if(!arr)
 {
  printf("Memory not allocated\n");
  exit(0);
 }
 
 printf("\nEnter the elements \n");
 
 for(i=0;i<n;i++)
 {
  scanf("%d",arr+i);
 }
 
 large=arr[0];
 count=0;
 
 for(i=0;i<n;i++)
 {
  if(large<arr[i])
  {
   large=arr[i];
   count=0;
  }
  
  else if(large==arr[i])
    count++; 
    
 }
 
 printf("\nThe number of occurence of largest number is : %d\n",count+1);
 
 return 0;
}
 
    
