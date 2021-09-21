

//WAP TO RETURN AN ARRAY OF STRUCTURE USING POINTER.

#include<stdio.h>
#include<stdlib.h>

struct person
{
 char name[50];
 char gender;
 int age;
};

struct person *INPUT(void);

int main()
{
 struct person *p;
 int i;
 
 p=INPUT();
 
 for(i=0;i<3;i++,p++)
 {
  printf("\nThe name of the person is : %s",p->name);
  printf("The gender of the person is : %c\n",p->gender);
  printf("The age of the person is : %d\n",p->age);
 }
 
 return 0;
}

struct person *INPUT(void)
{
 struct person *p1;
 int i;
 char garbage;
 
 p1=(struct person *)malloc(3*sizeof(struct person));
 
 for(i=0;i<3;i++)
 {
  printf("\nEnter the name \n");
  fgets(p1[i].name,50,stdin);
  printf("\nEnter the gender\n");
  scanf("%c",&p1[i].gender);
  printf("\nEnter the age\n");
  scanf("%d",&p1[i].age);
  scanf("%c",&garbage);
 }
 
 return p1;
}
  
   
   
