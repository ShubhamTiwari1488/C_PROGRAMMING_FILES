
/*____________________FINDING Nth TERM OF THE ARITHMETIC SERIES USING RECURSIVE FUNCTION____________________*/

#include<stdio.h>

int arithterm(int,int,int);

int main()
{
 int fnum,d,t;
 
 printf("\nEnter the first term of the arithmetic series\n");
 scanf("%d",&fnum);
 
 printf("\nEnter the common difference of the arithmetic series\n");
 scanf("%d",&d);
 
 printf("\nEnter which term you want to find\n");
 scanf("%d",&t);
 
 printf("\nThe %d term of the arithmetic series is :%d\n\n",t,arithterm(fnum,d,t));
 
 return 0;
}

int arithterm(int num,int d,int n)
{
   if(n==1)
      return num;
      
   else
      return(d+arithterm(num,d,n-1));
}
         
