
/*________________________________PLOTTING A GRAPH OF EXPONENTIAL FUNCTION_________________________________
___________________________________________________________________________________________________________
HERE, ____________Y1=50exp(-ax)+0.5  and  Y2=(50exp(-a*x*x/2)+0.5)_______________________________*/

#include<stdio.h>
#include<math.h>

#define A 0.4

int main()
{
 int i;
 float x,y1,y2;
 
 printf(" Y---------------------------------------------------------->\n");
 
 for(x=0;x<5;x=x+0.25)
 {
  // BEGINING OF THE LOOP
  
  y1=(int)(50*exp(-A*x)+0.5);
  y2=(int)(50*exp(-A*x*x/2)+0.5);
  
  // WHEN Y1==Y2
  
  if(y1==y2)
  {
    if(x==2.5)
       printf("X |");
       
    else
       printf("  |");
       
    for(i=1;i<y1-1;i++)
       printf(" ");
       
    printf("#\n");
    
    continue;
  }
  
  // WHEN Y1>Y2
  
  if(y1>y2)
  {
   if(x==2.5)
       printf("X |");
       
   else
       printf("  |");
       
   for(i=1;i<=y2-1;i++)
       printf(" ");
       
   printf("*");
   
   for(i=1;i<=y1-y2-1;i++)
       printf("_");
       
   printf("0\n");
   
   continue;
  }
  
  // WHEN Y2>Y1
  
  if(y2>y1)
  {
   if(x==2.5)
      printf("X |");
      
   else
      printf("  |");                              
      
   for(i=1;i<=(y1-1);++i)
      printf(" ");
      
   printf("0");
   
   for(i=1;i<=(y2-y1-1);i++)
      printf("_");
      
   printf("*\n");
   
   continue;
  }
  // END OF THE LOOP
  
  printf("\n");
 }
 printf("\n");
 printf("\n");
 return 0;
}
          
