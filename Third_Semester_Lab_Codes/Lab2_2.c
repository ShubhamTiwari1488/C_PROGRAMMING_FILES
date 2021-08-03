
// WAP TO TEST WHETHER A NUMBER N IS PALINDROME NUMBER OR NOT USING FUNCTION

#include<stdio.h>

int Palindrome(long int);

int main()
{
 long int num;
 int flag;
 
 printf("\nEnter the number\n");
 
 scanf("%ld",&num);
 
 flag=Palindrome(num);
 
 if(flag==1)
   printf("\nThe number is a palindrome\n\n");
   
 else 
   printf("\nThe number is not a palindrome\n\n");
   
 return 0;
}
     
int Palindrome(long int n)
{
 int rem=0;
 long int rev_n=0,org_n;
 
 org_n=n;
 
 while(n>0)
 {
  rem=n%10;
  rev_n=rev_n*10+rem;
  
  n=n/10;
 }
 
 printf("\nThe number after reversing is %ld\n\n",rev_n);
 
 if(org_n==rev_n)
   return 1;
   
 else
   return 0;
   
}
         
