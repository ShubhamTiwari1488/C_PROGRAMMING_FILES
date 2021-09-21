
// WAP TO FIND OUT THE SUM OF N ELEMENTS OF AN INTEGER ARRAY A[] BY USING RECURSION

#include<stdio.h>
#include<stdlib.h>

long int recursion(int *,int);

int main()
{
 int *a;
 int n,i;
 long int sum;
 printf("\nEnter number of elements \n");
 scanf("%d",&n);
 
 a=(int *)malloc(n*sizeof(int));
 
 if(a==NULL)
 {
  printf("\nThe memory is not been allocated\n");
  exit(0);
 }
 
 printf("\nEnter the elements of the array ::\n");
 
 for(i=0;i<n;i++)
 {
  scanf("%d",a+i);
 }
 
 sum=recursion(a,n);  
 
 printf("\nThe sum of the elements of the array is : %ld\n\n",sum);
 
 return 0;
}

long int recursion(int *a,int n)
{
 
 if(n==0)
   return a[n];
   
 else{
   return(a[n]+recursion(a,n-1));
 }
 
}
   
     
