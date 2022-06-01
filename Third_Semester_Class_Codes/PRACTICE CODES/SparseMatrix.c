#include<stdio.h>

int matrix[4][5] = {{0,0,3,0,4},{0,0,5,7,0},{0,0,0,0},{0,2,6,0,0}};

int size = 0;


void rowRepresentation(void);
void colRepresentation(void);

int main()
{
 int i,j;
 
 for(i=0;i<4;i++)
 {
  for(j=0;j<5;j++)
  {
   if(matrix[i][j] != 0)
   {
    size++;
   }
  }
 }
 
 printf("\nDisplaying the Original Matrix :-\n\n");
 
 for(i=0;i<4;i++)
 {
  for(j=0;j<5;j++)
  {
   printf("%d ",matrix[i][j]);
  }
  
  printf("\n");
 }
 
 printf("\nDisplaying the Sparse Matrix in Row Representation :-\n\n");   
 rowRepresentation();
 
 printf("\nDisplaying the Sparse Matrix in Column Representation :-\n\n");
 colRepresentation();
 
 return 0;
}    


void rowRepresentation(void)
{
 int rows = size + 1;
 int cols = 3;
 
 int sparseMatrix[rows][cols];
 
 int k = 1 , i, j;
 
 sparseMatrix[0][0] = 4;
 sparseMatrix[0][1] = 5;
 
 sparseMatrix[0][2] = size;
 
 for(i=0;i<4;i++)
 {
  for(j=0;j<5;j++)
  {
   if(matrix[i][j] != 0)
   {
    sparseMatrix[k][0] = i;
    sparseMatrix[k][1] = j;
    sparseMatrix[k][2] = matrix[i][j];
    
    k++;
   }
  }
 }
 
 //Displaying the Matrix
 
 printf("Row  Column  Values\n");
 for(i=0;i<(size+1);i++)
 {
   for(j=0;j<3;j++)
   {
    printf("%d\t",sparseMatrix[i][j]);
   }
   
   printf("\n");
 }
 
}


void colRepresentation(void)
{
 int rows = 3 , cols = size + 1;
 
 int sparseMatrix[rows][cols];
 
 sparseMatrix[0][0] = 4;
 sparseMatrix[1][0] = 5;
 sparseMatrix[2][0] = size;
 
 int k = 1 , i, j;
 
 for(i=0;i<4;i++)
 {
  for(j=0;j<5;j++)
  {
   if(matrix[i][j] != 0)
   {
    sparseMatrix[0][k] = i;
    sparseMatrix[1][k] = j;
    sparseMatrix[2][k] = matrix[i][j];
    
    k++;
   }
  }
 }
 
 //Displaying the matrix
 
 for(i=0;i<3;i++)
 {
  for(j=0;j<(size + 1);j++)
  {
   if(i==0 && j==0)
   {
    printf("Row\t%d\t",sparseMatrix[i][j]);
   }
   
   else if(i==1 && j==0)
   {
    printf("Column\t%d\t",sparseMatrix[i][j]);    
   }
   
   else if(i==2 && j==0)
   {
    printf("Values\t%d\t",sparseMatrix[i][j]);
   }
   
   else
   {
    printf("%d\t",sparseMatrix[i][j]);
   }
  }
  
  printf("\n");
 }
}     
    
