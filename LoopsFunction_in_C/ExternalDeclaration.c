

//DEMONSTRATING EXTERNAL DECLARATION 


#include<stdio.h>

int funt(void);

int main()
{
 extern int y;     //External Declaration
 
 y=-1;
 
 printf("%d ",y);
 printf("%d ",funt()); 
 return 0;
}

int funt(void)
{
 extern int y;      //External Declaration
 
 y=y+10;
 
 return y;
 
}

int y;        //Defination
  
