
//WAP TO ARRANGE THE ELEMENTS OF A DYNAMIC ARRAY SUCH THAT ALL EVEN NUMBERS ARE FOLLOWED BY ODD NUMBERS

#include<stdlib.h>
#include<stdio.h>

int main()
{
 int *arr,*b;
 int n,i,j=0;
 
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
 
 b=(int *)malloc(n*sizeof(int));
 
 if(!b)
 {
  printf("\nMemory not allocated\n");
  exit(0);
 }
 
 for(i=0;i<n;i++)
 {
  if(arr[i]%2==0)
  {
   b[j]=arr[i];
   j++;
  }
  
 }
 
 for(i=0;i<n;i++)
 {
  if(arr[i]%2!=0)
  {
   b[j]=arr[i];
   j++;
  }
 }
 
 printf("\nThe array now becomes ::\n");
 
 for(i=0;i<n;i++)
   printf("%d\t",b[i]);
 
 printf("\n");
   
 return 0;
 
}
      
