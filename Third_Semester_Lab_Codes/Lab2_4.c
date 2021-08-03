
//WAP TO FING THE FIRST DIGIT OF A NUMBER USING FUNCTION

#include<stdio.h>

int first_num(long int);

int main()
{
 long int num;
 int first;
 
 printf("\nEnter the number\n");
 scanf("%ld",&num);
 
 first=first_num(num);
 
 printf("\nThe first digit of the number is %d\n\n",first);
 
 return 0;
}

int first_num(long int n)
{
 
 while(n>10)
 {
  n=n/10;
 }
 
 return n;
}
   
