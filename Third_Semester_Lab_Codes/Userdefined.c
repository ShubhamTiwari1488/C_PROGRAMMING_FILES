
/*_____________________

  Let A be nXn square dynamic matrix. WAP by using appropriate user defined functions for the following:
  a) Find the number of nonzero elements in A
  b) Find the sum of the elements above the leading diagonal.
  c) Display the elements below the minor diagonal.
  d) Find the product of the diagonal elements.
   
                                                      ___________________________*/
                                                      
#include<stdio.h>
#include<stdlib.h>

int nonzero(int **,int ,int);
long int LeadDiagonal(int **,int ,int);
void MinorDiagonal(int **,int ,int);
long int ProdDiagonal(int **,int ,int);

int main()
{
 int **arr;
 int n,i,j,count;
 
 long int sum,prod;
 
 printf("\nEnter the dimension of the square matrix\n");
 scanf("%d",&n);
 
 arr=(int **)malloc(n*sizeof(int *));
 
 if(!arr)
 {
  printf("\nMemory not allocated\n");
  exit(1);
 }
 
 for(i=0;i<n;i++)
   arr[i]=(int *)malloc(n*sizeof(int));
   
 if(!arr)
 {
  printf("\nMemory not allocated\n");
  exit(1);
 }
 
 for(i=0;i<n;i++)
   for(j=0;j<n;j++)
   {
    printf("Enter the element of the row %d and column %d : ",(i+1),(j+1));
    scanf("%d",*(arr+i)+j);
   }
 
 printf("\nThe matrix that you have entered is : \n");
 
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   printf("%d\t",arr[i][j]);
  }
  printf("\n");
 }
      
 count=nonzero(arr,n,n);
 
 printf("\n\nThe number of non zero elements in the array is %d\n",count);
 
 //Leading diagonal's question
 
 sum=LeadDiagonal(arr,n,n);
 
 printf("\nThe sum of the elements above leading diagonal is %ld \n",sum);
 
 printf("\n");
 
 
 MinorDiagonal(arr,n,n);
 
 
 //Product of diagonals of matrix
 
 prod=ProdDiagonal(arr,n,n);
 
 printf("\nThe product of the diagonal elements is %ld \n",prod);
 
 printf("\n");
 
 return 0;
}

int nonzero(int **a,int n,int m)
{
 int i,j,count=0;
 
 for(i=0;i<n;i++)
   for(j=0;j<n;j++)
     if(a[i][j])
       count++;
       
 return count;
}

long int LeadDiagonal(int **a,int n,int m)
{
 int i,j;
 long int sum=0;  
 
 for(i=0;i<n;i++)
   for(j=0;j<n;j++)
   {
    if(i<j)
     sum+=a[i][j];
     
   }  
   
 return sum;
}

void MinorDiagonal(int **a,int n,int m)
{
 int i,j;
 
 printf("\nThe elements below minor diagonal are ::\n");
 
 for(i=0;i<n;i++){
   for(j=0;j<n;j++)
    { 
      if(j>(n-1-i))
      {
       printf("%d\t",a[i][j]);
      }
      else
       printf("\t");
       
    }
     printf("\n");
 }
 
}

long int ProdDiagonal(int **a,int n,int m)
{
 int i,j;
 long int prod=1;
 
 //for Major diagonal
 
 for(i=0;i<n;i++)
 {
  prod*=a[i][i];
 }
 
 //for Minor diagonal
 
 for(i=0;i<n;i++)
 {
  prod*=a[i][n-1-i];
 }
 
 return prod;
}
  
  
    
