

//WAP TO FING THE FACTORIAL OF A NUMBER N BY WRITING A RECURSIVE FUNCTION FOR IT

#include<stdio.h>

long int factorial(int);

int main()
{
 int num;
 long int fact;
 
 printf("\nEnter the number\n");
 scanf("%d",&num);
 
 fact=factorial(num);
 
 printf("\nThe factorial of the number is -- %ld\n\n",fact);
 
 return 0;
}

long int factorial(int n)
{
 
 if(n==1)
 {
  return 1;
 }
 
 else{
   return n*factorial(n-1);
 }
 
}
     
