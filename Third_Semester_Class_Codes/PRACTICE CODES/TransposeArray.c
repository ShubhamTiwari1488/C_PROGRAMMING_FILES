#include<stdio.h>
#include<stdlib.h>

int main()
{
 int rows , cols , i , j;
 
 int matrix[100][100];
 int **arr;
 
 printf("\nEnter the number of rows : ");
 scanf("%d",&rows);
 
 printf("\nEnter the number of cols : ");
 scanf("%d",&cols);
 
 printf("\nEnter the data in the matrix :: \n");
 
 for(i = 0;i < rows;i++)
 {
  for(j=0;j<cols;j++)
  {
   printf("\nRow : %d and Col : %d ",i+1,j+1);
   scanf("%d",&matrix[i][j]);
  }
 }
 
 arr = (int **)malloc(cols*sizeof(int *));
 
 if(!arr)
 {
  printf("\nError in allocating memory\n");
  exit(1);
 }
 
  
 for(i=0;i<cols;i++)
 {
  for(j=0;j<rows;j++)
  {
   *(arr+i) = (int *)malloc(rows*sizeof(int));   
  }
 }  
 
 //Transposing the array
 
 for(i=0;i<rows;i++)
 {
  for(j=0;j<cols;j++)
  {
   *(*(arr+j) + i) = matrix[i][j];
  } 
 }
 
 printf("\nDisplaying the matrix : \n");
 
 for(i=0;i<rows;i++)
 {
  for(j=0;j<cols;j++)
  {
   printf("%d ",*(*(matrix + i)+j));
  }
  
  printf("\n");
 }
 
 printf("\nDisplaying the Transpose Matrix : \n");
 
 for(i=0;i<cols;i++)
 {
  for(j=0;j<rows;j++)
  {
   printf("%d ",*(*(arr + i)+j));
  }
  
  printf("\n");
 }
 
 return 0;
}   
