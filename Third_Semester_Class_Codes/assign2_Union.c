

#include<stdio.h>

union stud
{
 int rollno;
 char name[50];
 int totalmarks;
};

int main()
{
 union stud b1;
 
 printf("Enter rollno , name, and totalmarks\n");
 scanf("%d %s %d",&b1.rollno,b1.name,&b1.totalmarks);
 
 printf("%d %s %d",b1.rollno,b1.name,b1.totalmarks);
 
 return 0;
}
  
