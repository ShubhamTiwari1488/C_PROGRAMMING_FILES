
#include<stdio.h>

#define SWAP(x,y)(x ^=y ^=x)

int main()
{
 int a,b;
 
 printf("\nEnter a and b ");
 scanf("%d %d",&a,&b);
 
 printf("\nBefore swapping a = %d and b= %d\n",a,b);
 
 SWAP(a,b);
 
 printf("\nAfter swapping a= %d and b= %d\n",a,b);
 
 return 0;
}
 
