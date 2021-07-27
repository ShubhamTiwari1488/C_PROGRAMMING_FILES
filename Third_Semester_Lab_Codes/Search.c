
//WAP TO SEARCH AN ELEMENT OF AN ARRAY

#include<stdio.h>
#include<stdlib.h>

int main()
{
 int *arr;
 int n,i,pos=-1,num;
 
 printf("\nEnter the number of elements of array\n");
 scanf("%d",&n);
 
 arr=(int *)malloc(n*sizeof(int));
 
 if(!arr)
 {
  printf("Memory allocated\n");
  exit(1);
 }
  
 for(i=0;i<n;i++)
 {
  printf("\nEnter element number %d : ",(i+1));
  scanf("%d",arr+i);
 }
 
 printf("\nEnter the number to be searched\n");
 scanf("%d",&num);
 
 for(i=0;i<n;i++)
 {
  if(num==arr[i])
  {
   pos=i;
   break;
  }
 }
 
 if(pos==-1)
 {
  printf("\nThe number you searched for is not found\n");
 }
 
 else
 {
  printf("\nThe element was found at the position %d \n",(pos+1));
 }
 
 return 0;
}
     
  
