
//WAP TO PRINT THE NEXT GREATER ELEMENT FOR EVERY ELEMENT ...

#include<stdio.h>
#include<stdlib.h>

int main()
{
 int *a;
 int n,i,nge;
 
 printf("\nEnter the number of elements of the array\n");
 scanf("%d",&n);
 
 a=(int *)malloc(n*sizeof(int));
 
 if(!a)
 {
  printf("Memory not allocated\n");
  exit(1);
 }
 
 for(i=0;i<n;i++)
 {
  printf("Enter %d element : ",(i+1));
  scanf("%d",a+i);
 }
 
 printf("\nElement\tNGE\n");
 
 for(i=0;i<n-1;i++)
 {
  nge=-1;
  if(a[i]<a[i+1])
  {
   nge=a[i+1];
  }
  
  printf("%d\t%d\n",a[i],nge);
 }
 
 nge=-1;
 printf("%d\t%d\n",a[i],nge);
 
 printf("\n");
 
 return 0;
 
}
   
