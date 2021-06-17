
/*____________________PRINT THE FIBONACCI SERIES USING RECURSION FUNCTION______________________*/

#include<stdio.h>

int fibo(int);

int main()
{
 int i,n;
 
 printf("\nEnter the no of terms you want to print of this series\n");
 scanf("%d",&n);
 
 printf("\nThe Fibonacci Series of %d terms is :\n",n);
 
 for(i=0;i<n;i++)
 {
  printf("\nTerm %d of the series is %d\n",(i+1),fibo(i+1));
 } 
 
 return 0;
}

int fibo(int n)
{
 return(n==1||n==2 ? 1:(fibo(n-1)+fibo(n-2)));
}
 
