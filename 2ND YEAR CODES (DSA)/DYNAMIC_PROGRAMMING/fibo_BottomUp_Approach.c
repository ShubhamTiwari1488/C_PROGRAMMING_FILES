
#include<stdio.h>

int dp[100]={0};

int fibo(int n)
{
 int i;
 
 dp[0]=0;
 dp[1]=1;
 
 for(i=2;i<=n;i++)
   dp[i]=dp[i-1]+dp[i-2];
 
 return dp[n];
}

int main()
{
 int n;
 
 scanf("%d",&n);
 
 printf("\nThe fibonacci number is : %d\n",fibo(n));
 
 return 0;
}
    
