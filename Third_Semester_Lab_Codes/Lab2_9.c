
// WAP BY DESIGNING A RECURSION FUNCTION TO CALCULATE THE SUM OF ALL EVEN DIGITS OF ANY GIVEN INTEGER

#include<stdio.h>

long int recursion(long int);

int main()
{
 long int num,sum;
 
 printf("\nEnter the number\n");
 scanf("%ld",&num);
 
 sum=recursion(num);
 
 printf("\nThe sum of even digits in the number is : %ld\n",sum);
 
 return 0;
}

long int recursion(long int n)
{
 long int sum;
 int rem;
 
 if(n<10 && n%2==0)
   return n;
   
 else{
   
   rem=n%10;
   
   if(rem%2==0)
     return(n%10+recursion(n/10));
     
   else
     return(recursion(n/10));  
 }
}
     
