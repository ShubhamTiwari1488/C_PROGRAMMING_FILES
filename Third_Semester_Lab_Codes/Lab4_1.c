
/*___WAP TO STORE N EMPLOYEE'S DATA SUCH AS EMPLOYEE NAME,GENDER,DESIGNATION,DEPARTMENT,BASIC PAY.CALCULATE GROSS PAY OF EACH EMPLOYEE___*/

#include<stdio.h>
#include<stdlib.h>

struct employee
{
 char name[50];
 char sex;
 double basic_pay;
 char designation[50];
 char department[50];
 double gross_pay;
};

int main()
{
 struct employee *e;
 double da,hr;
 int n,i;
 char garbage;
 
 printf("\nEnter the number of employees\n");
 scanf("%d",&n);
 
 e=(struct employee *)malloc(n*sizeof(struct employee));
 
 if(e==NULL)
 {
  printf("\nMemory not allocated\n");
  exit(0);
 }
 
 scanf("%c",&garbage);
 
 for(i=0;i<n;i++)
 {
  printf("\nEnter the name : ");
  scanf("%[^\n]s",e[i].name);
  scanf("%c",&garbage);
  
  printf("\nEnter designation : ");
  //fgets(e[i].designation,50,stdin);
  scanf("%[^\n]s",e[i].designation);
  scanf("%c",&garbage);
  
  printf("\nEnter department : ");
  //fgets(e[i].department,50,stdin);
  scanf("%[^\n]s",e[i].department);
  scanf("%c",&garbage);
  
  printf("\nEnter gender : ");
  scanf("%c",&e[i].sex);
  
  printf("\nEnter basic pay : ");
  scanf("%lf",&e[i].basic_pay);
  scanf("%c",&garbage);
  
  printf("\n");
 }
 
 printf("\n========================================================\n");
 
 for(i=0;i<n;i++)
 {
  hr=0;
  da=0;
  
  hr=0.25*e[i].basic_pay;
  da=0.75*e[i].basic_pay;
  
  e[i].gross_pay=e[i].basic_pay+hr+da;
  
  printf("\nThe gross pay of %s Mr/Mrs.%s is : Rs %.2lf\n",e[i].designation,e[i].name,e[i].gross_pay);
 }
 
 return 0;
}
 
