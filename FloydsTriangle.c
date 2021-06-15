
/*________________________PRINT THE FLOYD'S TRIANGLE_________________________________________

           1
           2 3
           4 5 6
           7 8 9 10
           11 12 13 14 15                                                                     */
           
#include<stdio.h>

int main()
{
 int i,j,k,num;
 
 k=1;
 
 printf("\nPlease Enter the dimension of the triangle\n");
 scanf("%d",&num);
 
 printf("\n");
 printf("Here the Floyd's Triangle pattern :=\n");
 printf("\n");
 
 for(i=0;i<num;i++)
 {
  for(j=0;j<=i;j++)
       printf("%d\t",k++);
       
  printf("\n"); 
                  
  /* for(j=0;j<=(num-1-i);j++)
       printf(" "); */
       
  printf("\n");
 }
 
 printf("\n");
 
 return 0;
}
  
                       
