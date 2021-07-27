
/*________________STATIC VARIABLES ILLUSTRATION__________________________-*/

#include<stdio.h>

void stat(void);

int main()
{
 int i;
 
 printf("\n");
 
 for(i=1;i<=3;i++)
 {
  stat();
 }
 
 return 0;
}

void stat(void)
{
 static int x=0;
 x=x+1;
 printf("x=%d\n",x);
}
   
