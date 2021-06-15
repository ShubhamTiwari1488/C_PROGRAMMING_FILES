
/*______________________PRINTING 0-1 PATTERN :=
                       
                            1
                            0 1
                            1 0 1
                            0 1 0 1
                            
                                                                                         */
#include<stdio.h>                                                                                         
                                                                                         
int main()
{
 int i,j,num;
 printf("\nEnter the size of the pattern to be printed\n");
 scanf("%d",&num);
 
 printf("\n\n");
 for(i=0;i<num;i++)
 {
  for(j=0;j<=i;j++)
   {
     if((i+j)%2==0)
         printf("1");
         
     else
         printf("0");
         
   }
   
  printf("\n");
 }
 
 printf("\n");
 
 return 0;
}
             
