
// WAP TO CALCULATE X^Y BY WRITING A FUNCTIION FOR IT

#include<stdio.h>
#include<math.h>

double Power(double,double);

int main()
{
 double x,y,power;
 
 printf("\nEnter the numbers ,i.e x and y\n");
 scanf("%lf %lf",&x,&y);
 
 power=Power(x,y);
 
 printf("\nThe x power y is = %.2lf\n\n",power);
 
 return 0;
}

double Power(double a,double b)
{
 return(pow(a,b));
}
  
