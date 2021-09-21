
// WAP TO COUNT NUMBER OF DIGITS OF A POSTIVE INTEGER N BY USING RECURSION

#include<stdio.h>
#include<stdlib.h>

int recursion(long int);

int main()
{
 long int num;
 int count;
 
 printf("\nEnter the number\n");
 scanf("%ld",&num);
 
 if(num<1)
 { 
   printf("\nplease enter a positive number \n\n");
   exit(0);
 }  
 
 else{
  
  count=recursion(num);
 }
 
 printf("\nThe number of digits in the integer is %d\n\n",count);
 
 return 0;
}

int recursion(long int n)
{
 
 if(n<10){
   return 1;
 }
   
 else{
  return(1+recursion(n/10));
 } 
 
}

  
       
