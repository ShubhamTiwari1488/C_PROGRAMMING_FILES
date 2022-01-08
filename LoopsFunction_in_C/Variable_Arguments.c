
//FUNCTIONS WITH VARIABLE NUMBER OF ARGUMENTS

#include<stdio.h>
#include<stdarg.h>

float avg(int argc,...)
{
 va_list args;  //It will contain all information about the variable arguments
 
 int i,sum=0;
 
 va_start(args,argc);
 
 for(i=0;i<argc;i++)
 {
  sum+=va_arg(args,int);
 } 
 
 va_end(args);
 
 return((float)sum/argc);
}
 
int main()
{
 float result;
 
 result=avg(7,8,9,10,11,12,13,14,15,16,17,18,19,20);
 
 printf("\nAverage = %.2f\n",result);
 
 return 0;
}
 
