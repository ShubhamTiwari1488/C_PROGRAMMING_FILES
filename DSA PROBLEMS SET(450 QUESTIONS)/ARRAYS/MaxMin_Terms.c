//FINDING THE MAXIMUM AND MINIMUM TERMS OF THE ARRAY

#include<stdio.h>
#include<stdlib.h>

int Max(int *,int);
int Min(int *,int );

int main()
{
 int *arr;
 int n,i;
 
 int max,min;
 
 printf("\nEnter the number of elements ");
 scanf("%d",&n);
 
 arr=(int *)malloc(n*sizeof(int));
 
 if(!arr)
 {
  printf("\nMemory not allocated \n");
  exit(0);
 }
 
 for(i=0;i<n;i++)
 {
  printf("\nEnter the element no %d ",i+1);
  scanf("%d",arr+i);
 }
 
 printf("\nDisplaying the array \n");
 
 for(i=0;i<n;i++)
 {
  printf("%d\t",*(arr+i));
 }
 
 max=Max(arr,n);
 min=Min(arr,n);
 
 printf("\nThe maximum term is %d\n",max);
 
 printf("\nThe minimum term is %d\n",min);  
 
 return 0;
}

int Max(int *arr,int n)
{
 int max;
 int i;
 
 max=*(arr+0);
 
 for(i=1;i<n;i++)
 {
   if(max<*(arr+i))
     max=*(arr+i);
     
 }
 
 return max;
}

int Min(int *arr,int n)
{
 int min;
 int i;
 
 min=*(arr+0);
 
 for(i=1;i<n;i++)
    if(min>*(arr+i))
      min=*(arr+i);
      
 return min;
}
  
