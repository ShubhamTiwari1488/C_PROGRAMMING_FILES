#include<stdio.h>

int main()
{
 char ch = 'A';
 
 printf("The sizeof 'A' is : %ld\n",sizeof('A'));	// 4
 
 printf("The sizeof ch is : %ld\n",sizeof(ch));		// 1
 
 return 0;
} 
