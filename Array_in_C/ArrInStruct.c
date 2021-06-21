
/*__________________________DEMONSTRATION OF ARRAYS WITHIN STRUCTURES________________________*/

#include<stdio.h>

int main()
{
 
 struct marks
 {
  int sub[3];
  int total;
 }
 student[3];
 
 int i,j;
 
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   printf("\nEnter the sub%d marks of student[%d] :",(j+1),(i+1));
   scanf("%d",&student[i].sub[j]);
  }
  printf("\n");
 }
 
 printf("\n------------------------------------------------------------------------\n");
 
 for(i=0;i<3;i++)
 {
 
  student[i].total=0;
  
  for(j=0;j<3;j++)
  {
   student[i].total+=(student[i].sub[j]);
  }
  
  printf("\nThe Grand Total of student[%d] is : %d\n",(i+1),student[i].total);
 }
 
 return 0;
}
    
