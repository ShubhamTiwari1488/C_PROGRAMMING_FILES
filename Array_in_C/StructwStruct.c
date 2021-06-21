
/*______________DEMONSTRATION OF STRUCTURES WITHIN STRUCTURES___________________________*/

#include<stdio.h>

struct salary
{
 char name[80];
 char department[80];
 
 struct record
 {
  int house_rent;
  char city[80];
 
 } allowance;
 
}employee; 
  
int main()
{
 char tmp;
 printf("\nEnter your name please \n");
 scanf("%[^\n]s",employee.name);
 
 scanf("%c",&tmp);
 printf("\nEnter your department please\n");
 //scanf("%[^\n]s",employee.department);
 fgets(employee.department,80,stdin);
 
 printf("\nEnter the house rent that you are paying\n");
 scanf("%d",&employee.allowance.house_rent);
 
 scanf("%c",&tmp);                // So that the enter key is stored in it and we donot get any garbage value (enable
                                   // to enter the city ).
 
 printf("\nEnter the city in which you live\n");
 scanf("%[^\n]s",employee.allowance.city);
 
 printf("\n------------------------------------------------------------\n");
 
 printf("\nName = %s",employee.name);
 printf("\nDepartment =%s",employee.department);
 printf("\nHouse Rent =%d",employee.allowance.house_rent);
 printf("\nCity =%s\n",employee.allowance.city);
 
 return 0;
}
 
 
