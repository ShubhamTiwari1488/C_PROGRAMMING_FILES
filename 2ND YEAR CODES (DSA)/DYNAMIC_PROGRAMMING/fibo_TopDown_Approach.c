//DYNAMIC PROGRAMMING --TOP DOWN APPROACH---

#include<stdio.h>

int dp[100];

int initialize()
{
 int i;
 
 for(i=0;i<100;i++)
 {
  dp[i]=-1;
 }
 
}


int fibo(int n)
{
 if(dp[n]==-1)
 {
  if(n<=1)
   dp[n]=n;
   
  else
  {
   dp[n]=fibo(n-1)+fibo(n-2);
  }
 }
 
 return dp[n];
}

int main()
{
 int n;
 
 initialize();
 
 scanf("%d",&n);
 
 printf("\nThe fibonacci output is : %d\n",fibo(n));
 
 return 0;
}
      
