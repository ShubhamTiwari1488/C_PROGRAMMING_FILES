#include<stdio.h>

int main()
{
 int n = 011;
 
 printf("The value of n is : %d\n",n);		// 9 ( 1 X 2^0 + 1 X 2^1 + 0)
 
 n = 0x11;
 
 printf("The value of n is : %d\n",n);		// 17 ( 1 X 16^0 + 1 X 16^1)
 
 return 1;
} 
