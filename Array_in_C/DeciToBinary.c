
/*_____________WAP TO TAKE INPUT (INTEGRAL VALUE) FROM USER AND CONVERT IT TO BINARY__________________*/

#include<stdio.h>

int main()
{
 int arr[100];
 int i,j,rem,num,len,temp;
 
 printf("\nEnter a decimal value \n");
 scanf("%d",&num);
 
 printf("\nThe decimal value that you have entered is %d\n",num);
 
 for(i=0;num>0;i++)
 {
  rem=num%2;
  
  arr[i]=rem;
  
  num=num/2;
 }
 
 len=i;
 
 i=0;
 j=len-1;
 
 while(i<j)
 {
  temp=arr[i];
  arr[i]=arr[j];
  arr[j]=temp;
  i++;
  j--;
 }
  
 printf("The binary code is :: ");
 
 for(j=0;j<len;j++)
 {
  printf("%d",arr[j]);
 }
 
 printf("\n");
 
 return 0;
}   
