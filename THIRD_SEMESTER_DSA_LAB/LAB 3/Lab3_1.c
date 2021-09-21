
//GIVEN AN UNSORTED DYNAMIC ARRAY AND TWO NUMBERS . FIND THE MINIMUM DISTANCE BETWEEN THEM.

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int main()
{
 int *arr;
 int i,currmin,min,n,posx=-1,posy=-1,x,y;
 
 currmin=INT_MIN;
 min=INT_MAX;
 
 printf("\nEnter the number of elements\n");
 scanf("%d",&n);
 
 arr=(int *)malloc(n*sizeof(int));
 
 if(!arr)
 {
  printf("\nMemory not allocated\n");
  exit(0);
 }
  
 printf("\nEnter the elements\n");
 
 for(i=0;i<n;i++)
 {
  scanf("%d",arr+i);
 }
 
 printf("\nEnter the two numbers\n");
 scanf("%d %d",&x,&y);
 
 for(i=0;i<n;i++) 
 {
  if(arr[i]==x)
    posx=i;
    
  if(arr[i]==y)
    posy=i;
    
  if(posx!=-1 && posy!=-1)
  {
   currmin=abs(posx-posy);
   
   if(currmin<=min)
   {
    min=currmin;
   }
  }
 }
 
 printf("\nThe minimum distance between x and y in the array is : %d\n",min);
 
 return 0;
}
      
  
