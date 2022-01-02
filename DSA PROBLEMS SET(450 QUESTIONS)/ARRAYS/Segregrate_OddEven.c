
//SEPERATE ODD AND EVEN NUMBERS

#include<stdio.h>

void Swap(int *a,int *b)
{
 int temp;
 
 temp=*a;
 
 *a=*b;
 
 *b=temp;
}

 
void Segregrate(int arr[],int n)
{
 int i=0,j=0;
 
 while(i<n)
 {
  if(arr[i]%2==0)
  {
   if(i!=j)
   {
    Swap(&arr[i],&arr[j]);
   }
   
   j++;
  }
  
  i++;
 }
 
}

int main()
{
 int arr[10];
 int n,i;
 
 printf("\nEnter the no.of elements ");
 scanf("%d",&n);
 
 printf("\nEnter the elements\n");
 
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 
 printf("\nBefore rearrangement the array is ");
 
 for(i=0;i<n;i++)
   printf("%d ",arr[i]);
   
 printf("\nAfter rearrangement the array is ");
 
 Segregrate(arr,n);
 
 for(i=0;i<n;i++)
   printf("%d ",arr[i]);
   
 printf("\n");
 
 return 0;
}
       
