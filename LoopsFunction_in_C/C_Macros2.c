
#include<stdio.h>

#define SWAP(x,temp,y) temp=x;x=y;y=temp;

int main()
{
 int a,b,temp;
 
 printf("\nEnter a and b\n");
 scanf("%d %d",&a,&b);
 
 printf("\nBefore swapping a = %d and b=%d\n",a,b);
 
 SWAP(a,temp,b);
 
 printf("\nAfter swapping a= %d and b=%d\n",a,b);
 
 return 0;
}

 
