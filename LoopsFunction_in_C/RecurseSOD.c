
/*____________________RECURSIVE FUNCTION TO FIND SUM OF DIGITS___________________________*/

#include<stdio.h>

long int SumDigits(long int);

int main()
{
 int n,i;
 long int num,sum;
 
 printf("\nEnter the times the loop will occur\n");
 scanf("%d",&n);
 
 for(i=0;i<n;i++)
 {
  printf("\nEnter the numbers whoes sum of digits you want to find\n");
  scanf("%ld",&num);
 
  sum=SumDigits(num);
 
  printf("\nThe sum of the digits of the entered number is :%ld\n",sum);
 }
 
 return 0;
}

long int SumDigits(long int num)
{
  
  if(num<10)
      return num;
      
  else
      return (num%10 + SumDigits(num/10));
 
 }
               
