
/*___________TAKE POLYNOMIAL AS INPUT FROM USER AND PERFORM THE POLYNOMIAL MULTIPLICATION______________*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
 int *a,*b,*c;
 int n,m,i,j,size;
 
 printf("\nEnter the no of terms of the 1st polynomial\n");
 scanf("%d",&n);
 
 a=(int *)malloc(n*sizeof(int));
 
 printf("\nEnter the coefficients one by one \n");
 
 for(i=0;i<n;i++)
 {
  printf("\nEnter the coefficient of x^%d >>>",i);
  scanf("%d",(a+i));
 } 
 
 printf("\nEnter the no of terms of the 2nd polynomial\n");
 scanf("%d",&m);
 
 b=(int *)malloc(m*sizeof(int));
 
 printf("\nEnter the coefficient one by one\n");
 
 for(i=0;i<m;i++)
 {
  printf("\nEnter the coefficient of x^%d >>>",i);
  scanf("%d",(b+i));
 }
 
 //Dynamically allocating memory for array c;
 
 size=m+n-1;
 
 c=(int *)calloc(size,sizeof(int));
 
 for(i=0;i<n;i++)
   for(j=0;j<m;j++)
   {
    c[i+j]=c[i+j]+a[i]*b[j];
   }
 
 printf("\n\nThe polynomial after multiplication is := ");
   
 for(i=0;i<(m+n-2);i++)               //NOTE THE TOTAL TERMS IN C IS (M+N-1) ,,,A[0--(N-1)] AND B[0----(M-1)] 
    printf("%d x^%d + ",c[i],i);
 
 printf("%d x^%d ",c[i],(i));   
 printf("\n\n");
 
 return 0;
}
       
  
