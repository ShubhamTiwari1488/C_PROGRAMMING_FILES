
/*________________________PLOT THE GRAPH OF sinx__________________________________________*/

#include<stdio.h>
#include<math.h>

#define PI 3.142

int main()
{
 //double y;
 float x,rad;
 int y,i,j;
 
 //printf("\n%lf\n\n",sin(PI));
 
 printf(" Y-------------------------------------------------------------------------------->\n");
 
 for(i=0;i<=180;i+=15)
 {
  rad=(PI/180)*i;
  
  y=fabs(y);
  y=(int)(10*sin(rad));
 
  //printf("%lf\n",y); 
  
  if(i==90)
     printf("X|");
  else   
     printf(" |");
  
  for(j=0;j<y;j++)
  {
   printf("*");
  }
  printf("#\n");
   
 }
 
 return 0; 
} 
