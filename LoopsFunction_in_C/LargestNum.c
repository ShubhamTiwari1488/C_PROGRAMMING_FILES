
/*_______TAKE INPUT FROM THE USER AND FIND OUT LARGEST NUMBER FROM IT_________*/

#include<stdio.h>

int Largest(int);

int main()
{
 int a,n;
 
 printf("\nEnter the number of numbers you want to enter here\n");
 scanf("%d",&n);
 
 a=Largest(n);
 
 printf("\nThe largest number from the group of numbers is :%d\n",a);
 
 printf("\nThe largest number from the group of 5 numbers is : %d\n",Largest(5));
 
 return 0;
}

int Largest(int n)
{
 int num,largest=-999999999,i;
 
 for(i=0;i<n;i++)
 {
  printf("\nEnter the number %d\n",(i+1));
  scanf("%d",&num);
  
  if(num>largest)
      largest=num;
      
 }
 
 return largest;
}
      
  
 
