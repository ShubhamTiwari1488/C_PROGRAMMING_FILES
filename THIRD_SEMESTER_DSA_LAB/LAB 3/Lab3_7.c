

//WAP TO FIND OUT THE KTH SMALLEST AND KTH LARGEST ELEMENT STORED IN A DYNAMIC ARRAY OF N INTEGERS,WHERE K<N.

#include<stdio.h>
#include<stdlib.h>

void SORT(int *,int);

int main()
{
 int *arr;
 int n,i,k;
 
 printf("\nEnter the number of elements \n");
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
 
 SORT(arr,n);
 
 printf("\nEnter k to find the kth smallest and largest term\n");
 scanf("%d",&k);  
 
 printf("\nKth largest term is :: %d\nKth smallest term is :: %d\n",arr[n-k],arr[k-1]);
 
 return 0;
}

void SORT(int *a,int n)
{
 int i,j;
 int min;
 
 for(i=0;i<n;i++)
   for(j=i+1;j<n;j++)
   {
    if(a[i]>a[j])
    {
     min=a[i];
     a[i]=a[j];
     a[j]=min;
    }
   }
  
  //printf("\nThe array after being sorted is ::\t");
  
  //for(i=0;i<n;i++)
   // printf("%d\t",a[i]);     
}
      
