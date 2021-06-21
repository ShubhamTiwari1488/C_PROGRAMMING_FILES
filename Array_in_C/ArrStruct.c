
/*____________________________DEMONSTRATION OF ARRAYS OF STRUCTURES__________________________*/

#include<stdio.h>

struct marks
{
 int sub1;
 int sub2;
 int sub3;
 int total;
};

int main()
{
 int i;
 struct marks student[3];
 
 for(i=0;i<3;i++)
 {
  printf("\nEnter the sub1 marks of student[%d] :",(i+1));
  scanf("%d",&student[i].sub1);
  
  printf("\nEnter the sub2 marks of student[%d] :",(i+1));
  scanf("%d",&student[i].sub2);
  
  printf("\nEnter the sub3 marks of the student[%d] :",(i+1));
  scanf("%d",&student[i].sub3);
  
  printf("\n");
 }
 
 printf("\n-----------------------------------------------------------------------------\n");
 
 for(i=0;i<3;i++)
 {
  student[i].total=student[i].sub1 + student[i].sub2 + student[i].sub3;
  
  printf("\nThe Grand Total of student%d is : %d\n",(i+1),student[i].total);  
 }
 
 return 0;
}
  
