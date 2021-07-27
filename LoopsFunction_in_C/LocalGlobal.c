

//WAP TO DEMONSTRATE LOCAL AND GLOBAL VARIABLE

#include<stdio.h>
#include<stdlib.h>

int i=10;    //Global variable declaration

int val(void);
int val2(void);
int val3(void);

int main()
{
 int temp;
 
 i=20;  //assigning value inside main function...
 
 printf("\n THIS PROGRAM IS TO DEMONSTRATE LOCAL AND GLOBAL VARIABLE\n");
 
 printf("\nValue of variable in main function is %d\n",i);
 printf("\nValue of variable in val function is %d \n",val());
 printf("\nValue of variable in val2 function is %d\n",val2());
 printf("\nValue of variable in val3 function is %d\n",val3());
 
 return 0;
}

int val(void)
{
 int i;
 i=1;
 return i;
}

int val2(void)
{
 i=i+2;
 //return i;
}

int val3(void)
{
 i=i+3;
}
  
  
