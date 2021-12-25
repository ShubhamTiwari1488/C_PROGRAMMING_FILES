
//MOVE ALL THE NEGATIVE NUMBERS TO THE LEFT SIDE

#include<stdio.h>

void Rearrange(int arr[],int n)
{
 int i,j,temp,flag;
 
 for(i=0;i<n;i++)
 {
  flag=1;
  
  for(j=0;j<n-1;j++)
  {
   if(arr[j]>=0 && arr[j+1]<0)
   {
    temp=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=temp;
    flag=0;
   }
   
  }
  
  if(flag)
    break;
 }
 
}

int main()
{
 int arr[10];
 int n,i;
 
 printf("\nEnter the number of elements ");
 scanf("%d",&n);
 
 for(i=0;i<n;i++)
 {
  printf("\nEnter the element no %d ",i+1);
  scanf("%d",&arr[i]);
 }
 
 printf("\nDisplaying the array :: ");
 
 for(i=0;i<n;i++)
  printf("%d ",arr[i]);
  
 Rearrange(arr,n);
 
 printf("\n\nDisplaying the rearranged array :: ");
 
 for(i=0;i<n;i++)
  printf("%d ",arr[i]);      
    
 printf("\n");
 
 return 0;
}
 
