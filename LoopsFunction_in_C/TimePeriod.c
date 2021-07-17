
/*_____________PRINT THE TIME PERIOD OF PENDULUM OF LENGTH RANGING FROM 10 TO 100 (EACH WITH GAP OF 10 UNITS)_____*/

#include<stdio.h>
#include<math.h>

#define G 9.8
#define PI 3.142

int main()
{
 int l;
 double i,r,t;
 
 l=10;
 
 putchar('\n');
 printf("The Time period of pendulum with various length have been calculated .......have a look\n");
 printf("_____________________________________________________________");
 
 for(;l<=100;l+=10)     // THIS WILL HAVE TIME COMPLEXITY OF O(n);
 {
  i=l/G;
  r=sqrt(i);
  
  t=2*PI*r;
  
  printf("\nTime period of %d length bar pendulum is %.4lf\n",l,t);
 }
 
 printf("\n");

 return 0;
}
   
