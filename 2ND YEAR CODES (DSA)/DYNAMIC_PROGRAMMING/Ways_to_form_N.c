// THE COMBINATIONS SET IS : {1,3,5};

#include<stdio.h>

int state(int n)
{
 //int dp[n]={-1};   Because we the states of n-1 ,n-3,n-5 . So maximum states used is n.
 
 if(n<0)
  return 0;
  
 else if(n==0)
  return 1;
  
 else
 {
  //This below approach is top down approach or memoization method in DP.
  
  /* if(dp[n]!=-1)
  	return dp[n];
     
     else
        dp[n]=state(n-1)+state(n-3)+state(n-5);
  */      
  
  return state(n-1)+state(n-3)+state(n-5);
 }
 
 //return dp[n];
}

int main()
{
 int n;
 
 scanf("%d",&n);
 
 printf("\nThe total number of combinations is : %d\n",state(n));
 
 return 0;
}
  
