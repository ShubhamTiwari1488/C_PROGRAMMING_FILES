#include<stdio.h>
#include<stdlib.h>

typedef struct
{
 int coeff;
 int power;

} Polynomial;

int main()
{
 Polynomial *poly1 , *poly2 , *polyMul; 
 
 int degree1 , degree2 , i ,j;
 
 printf("\n\nEnter the degree of the 1st and 2nd Polynomials : \n");
 scanf("%d %d",&degree1,&degree2);
 
 poly1 = (Polynomial *)malloc((degree1+1)*sizeof(Polynomial));
 
 poly2 = (Polynomial *)malloc((degree2+1)*sizeof(Polynomial));
 
 
 if(!poly1 || !poly2)
 {
  printf("\nError in allocating memory!!\n");
  exit(1);
 }
 
 
 polyMul = (Polynomial *)calloc((degree1 + degree2 + 1),sizeof(Polynomial));
 
 if(!polyMul)
 {
  printf("\nError in allocating memory!!\n");
  exit(1);
 }
 
 printf("\nEnter the Polynomial1 : \n");
 
 for(i=0;i<=degree1;i++)
 {
  (poly1 + i)->power = i;
  printf("\nEnter data for power %d ",(poly1 + i)->power);
  scanf("%d",&((poly1 + i)->coeff));
 } 
 
 printf("\nEnter the Polynomial2 : \n");
 
 for(i=0;i<=degree2;i++)
 {
  (poly2 + i)->power = i;
  printf("\nEnter data for power %d ",(poly2 + i)->power);
  scanf("%d",&((poly2 + i)->coeff));
 } 
 
 //Displaying the Polynomials
 
 printf("\nDisplaying Polynomial 1 :: ");
 
 for(i=degree1;i>=0;i--)
 {
  if(i > 0)
   printf("%dx^%d + ",(poly1 + i)->coeff,(poly1 + i)->power);
  
  else
   printf("%dx^%d \n\n",(poly1 + i)->coeff,(poly1 + i)->power);
 }
 
 
 printf("\nDisplaying Polynomial 2 :: ");
 
 for(i=degree2;i>=0;i--)
 {
  if(i > 0)
   printf("%dx^%d + ",(poly2 + i)->coeff,(poly2 + i)->power);
  
  else
   printf("%dx^%d \n\n",(poly2 + i)->coeff,(poly2 + i)->power);
 } 
 
 
 //Performing Multiplication 
 
 for(i=0;i<=degree1;i++)
 {
  for(j=0;j<=degree2;j++)
  {
   (polyMul + (i+j))->power = (i+j);
   polyMul[i+j].coeff = polyMul[i+j].coeff + poly1[i].coeff * poly2[j].coeff;
  }
 }
 
 
 printf("\nAfter Multiplication Polynomial is : ");
 
 for(i=(degree1 + degree2);i>=0;i--)
 {
  if(i>0)
   printf("%dx^%d +",(polyMul + i)->coeff,(polyMul + i)->power);
   
  else
   printf("%dx^%d \n\n",(polyMul + i)->coeff,(polyMul + i)->power);
 }
 
 return 0;
}    
