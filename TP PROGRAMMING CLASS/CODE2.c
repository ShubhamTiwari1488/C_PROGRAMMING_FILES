#include<stdio.h>

int main()
{
 int intg = 5;
 
 float k = 3.4;
 
 double d = 15.5;
 
 printf("sizeof 3.4 is : %ld\n",sizeof(3.4));	// 8
 
 printf("sizeof k is : %ld\n",sizeof(k));		// 4
 
 
 printf("sizeof 15.5 is : %ld\n",sizeof(15.5));		// 8 
 
 printf("sizeof d is : %ld\n",sizeof(d));			// 8
 
 
 printf("sizeof 5 is : %ld\n",sizeof(5));		// 4
 
 printf("sizeof intg is : %ld\n",sizeof(intg));	// 4
 
 return 0;
} 
