
/*__________________________DMA FOR 2D ARRAY_________________________*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
 int i,j,row,col;
 int **list;
 
 printf("\nEnter the no.of rows and col of the 2D Array\n");
 scanf("%d %d",&row,&col);
 
 if(row<1 || col<1){
     printf("Invalid entry\n");
     exit(0);
 }
 
 list=(int **)malloc(row*sizeof(int *));
 
 if(!list)
 {
  printf("\nInsufficient memory\n");
  exit(0);
 }
 
 for(i=0;i<row;i++)
 {
  list[i]=(int *)malloc(col*sizeof(int));
 }
 
 if(!list)
 {
  printf("\nInsufficient memory\n");
  exit(0);
 }
 
 for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
  {
   printf("\nEnter the element %d %d \n",i+1,j+1);
   //scanf("%d",&list[i][j]);
   scanf("%d",*(list+i)+j);
  }
 }
 
 printf("\n------------------DISPLAY OF THE 2D ARRAY-----------------------------\n");
 
 for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
  {
   printf("%d\t",*(*(list+i)+j));
   
   //printf("%d\t",list[i][j]);
 
  }
  printf("\n");
 }    
 
 free(list);
 
 return 0;
}
 
