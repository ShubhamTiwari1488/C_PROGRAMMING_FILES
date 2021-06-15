
/*_____________________PRINTING PALINDROMIC PATTERN :=

                                            1
                                          2 1 2 
                                        3 2 1 2 3
                                      4 3 2 1 2 3 4 
                                                                                   
                                                                                     
                                                                                                 */
                                                                                                 
#include<stdio.h>
#include<math.h>

int main()
{
 int i,j,num,outnum;
 //double outnum;
 
 printf("\nEnter the size of the array that is to be printed\n");
 scanf("%d",&num);
 
 printf("\n\n");
 
 for(i=0;i<num;i++)
 {
  for(j=0;j<(num-1-i);j++)
        printf(" ");
        
  for(j=0-i;j<(i+1);j++)
   {
     //outnum=(double)(fabs(i)+1);
     outnum=fabs(j)+1;
     printf("%d",outnum);
   }
   
  printf("\n");
 }
 
 printf("\n");
 
 return 0;
}
           
