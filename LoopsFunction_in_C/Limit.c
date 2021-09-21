

//DEMONSTRATING LIMITS LIBRARY IN C
 
#include<stdio.h>
#include<limits.h>

int main()
{
 short up;
 short low;
 
 int max;
 int min;
 
 long int upper;
 long int lower;
 
 up=SHRT_MAX;
 low=SHRT_MIN;
 
 max=INT_MAX;
 min=INT_MIN;
 
 upper=LONG_MAX;
 lower=LONG_MIN;
 
 printf("\nThe upper limit range of SHORT INT data type is : %hi\n",up);
 printf("\nThe lower limit range of SHORT INT data type is : %hi\n",low);
 
 printf("\nThe upper limit range of INT data type is : %d\n",max);
 printf("\nThe lower limit range of INT data type is : %d\n",min);
 
 printf("\nThe upper limit range of LONG INT data type is : %ld\n",upper);
 printf("\nThe lower limit range of LONG INT data type is : %ld\n",lower);
 
 return 0;
}

 
