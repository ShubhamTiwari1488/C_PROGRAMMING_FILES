
/*_______________________PRINT THE FOLLOWING STAR PATTERN :-
                              
                                                1
                                               222
                                              33333
                                             4444444
                                            555555555
                                             4444444
                                              33333
                                               222
                                                1                                                    */
                                                

#include<stdio.h>                                                
                                                
int main()
{
 int i,j,n;
 
 printf("Enter the size of pyramid,i.e example:-5units or 3units\n");
 scanf("%d",&n);
 
 printf("\n");
 
 for(i=0;i<n;i++) 
 { 
   for(j=0;j<=(n-1-i);j++)
       printf(" ");
   
   for(j=0;j<(2*i+1);j++)
       printf("%d",(i+1));
       
   for(j=0;j<=(n-1-i);j++)
       printf(" ");
       
   printf("\n");
 }                                                                 
 
 for(i=0;i<(n-1);i++)
 { 
   for(j=0;j<=(i+1);j++)
      printf(" ");
      
   for(j=0;j<(2*n-3-2*i);j++)
      printf("%d",(n-1-i));
      
   for(j=0;j<=(i+1);j++)
      printf(" ");
      
   printf("\n");
  }
           
 printf("\n");
 
 return 0;
}
 
