
/*______________________________PRINTING THE BUTTERFLY PATTERN := ___________________________

                *    *
                **  ** 
                ******
                ******
                **  **
                *    *
                                                                                            */
                                                                                            
#include<stdio.h>

int main()
{
 int i,j,num;
 
 printf("\nEnter the size of the pattern\n");
 scanf("%d",&num);
 
 printf("\n");
 printf("\n");
 
 for(i=0;i<num;i++)
 {
  for(j=0;j<(i+1);j++)
       printf("*");
       
  for(j=0;j<(num-1-i);j++)
       printf(" ");
       
  for(j=0;j<(num-1-i);j++)
       printf(" ");
       
  for(j=0;j<(i+1);j++)
       printf("*");                                                                           
       
  printf("\n");
  
 }
 
 for(i=0;i<num;i++)
 {
  for(j=0;j<(num-i);j++)
       printf("*");
        
  for(j=0;j<i;j++)
       printf(" ");
             
  for(j=0;j<i;j++)
       printf(" ");
       
  for(j=0;j<(num-i);j++)
       printf("*");
       
  printf("\n");
  
 }
 printf("\n");
 return 0;
}
                       
