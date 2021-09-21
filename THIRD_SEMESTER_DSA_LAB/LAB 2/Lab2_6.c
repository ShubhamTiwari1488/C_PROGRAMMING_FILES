
//WAP TO FIND WHETHER THE NUMBER IS A FIBONACCI NUMBER OR NOT 

#include <stdio.h>
#include <math.h>
 
// A utility function that returns true if x is perfect square
int isPerfectSquare(int x)
{
    int s = sqrt(x);
    if(s*s == x)
      return 1;
      
    else
      return 0;  
}
 
// Returns true if n is a Fibinacci Number, else false
int isFibonacci(int n)
{
    // n is Fibinacci if one of 5*n*n + 4 or 5*n*n - 4 or both
    // is a perferct square
   if(isPerfectSquare(5*n*n + 4) || isPerfectSquare(5*n*n - 4))
      return 1;
      
   else
      return 0;
         
}
 
// A utility function to test above functions
int main()
{
 int i;
 
 printf("\nEnter the number\n");
 scanf("%d",&i);
 
 isFibonacci(i)? printf("%d is a Fibonacci Number \n",i) : printf("%d is a not Fibonacci Number \n",i);
     
  return 0;
}
