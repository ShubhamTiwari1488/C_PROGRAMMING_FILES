#include<stdio.h>
#include<stdlib.h>

typedef struct {

	int coeff;
	int x_pow;
	int y_pow;
	
} Polynomial;

int main()
{ 
 Polynomial *poly1 , *poly2 , *polySum;
 
 int term1 , term2 , i ,j, flag = 0 , signal;
 
 printf("\nEnter the number of terms in both the polynomials :: \n");
 scanf("%d %d",&term1,&term2);
 
 poly1 = (Polynomial *)calloc(term1,sizeof(Polynomial));
 
 poly2 = (Polynomial *)calloc(term2,sizeof(Polynomial));
 
 printf("\nEnter the data for Polynomial1\n");
 
 for(i=0;i<term1;i++)
 {
  printf("\nEnter the coeff value : ");
  scanf("%d",&((poly1 + i)->coeff));
  
  printf("\nEnter the x_pow and y_pow respectively : \n");
  scanf("%d %d",&((poly1 + i)->x_pow) , &((poly1 + i)->y_pow));
  
 }
 
 printf("\nEnter the data for Polynomial2\n");
 
 for(i=0;i<term2;i++)
 {
  printf("\nEnter the coeff value : ");
  scanf("%d",&((poly2 + i)->coeff));
  
  printf("\nEnter the x_pow and y_pow respectively : \n");
  scanf("%d %d",&((poly2 + i)->x_pow),&((poly2 + i)->y_pow));
  
 } 
 
 
 printf("\nDisplaying Polynomial1 : ");
 
 for(i=term1-1;i>=0;i--)
 {
  if(i>0)
   printf("%dx^%dy^%d + ",poly1[i].coeff,poly1[i].x_pow,poly1[i].y_pow);
  
  else
   printf("%dx^%dy^%d \n",poly1[i].coeff,poly1[i].x_pow,poly1[i].y_pow);
 }  
 
 printf("\nDisplaying Polynomial2 : ");
 
 for(i=term2-1;i>=0;i--)
 {
  if(i>0)
   printf("%dx^%dy^%d + ",poly2[i].coeff,poly2[i].x_pow,poly2[i].y_pow);
  
  else
   printf("%dx^%dy^%d \n\n",poly2[i].coeff,poly2[i].x_pow,poly2[i].y_pow);
 }  
 
 
 //Adding the two polynomials
 
 for(i=0;i<term1;i++)
 {
  polySum[i].x_pow = poly1[i].x_pow;
  polySum[i].y_pow = poly1[i].y_pow;
  
  polySum[i].coeff = poly1[i].coeff;
 }
 
 for(i=0;i<term2;i++)
 {
  signal = 1;
  
  for(j=0;j<term1;j++)
  {
    if((polySum[j].x_pow == poly2[i].x_pow) && (polySum[j].y_pow == poly2[i].y_pow))
    {
     polySum[j].coeff += poly2[i].coeff;
     
     signal = 0;
          
     break;
    } 
  }  
   
   if(signal) {
   
   	flag++; //It will also help us to keep track of total terms in final polynomial.
   	
   	polySum[term1+flag-1].x_pow = poly2[i].x_pow;
   	polySum[term1+flag-1].y_pow = poly2[i].y_pow;
  
   	polySum[term1+flag-1].coeff = poly2[i].coeff;
 
     } 
 }
 
 printf("\nPolynomial Addition : ");
 
 for(i=0;i<(term1 + flag);i++)
 {
  if(polySum[i].coeff != 0)
  { 
    if(i != (term1 + flag -1))
    {
      printf("%dx^%dy^%d + ",polySum[i].coeff,polySum[i].x_pow,polySum[i].y_pow);
    }
    
    else
    {
     printf("%dx^%dy^%d \n\n",polySum[i].coeff,polySum[i].x_pow,polySum[i].y_pow);
    }
  } 
 }
 
 return 0;
} 
