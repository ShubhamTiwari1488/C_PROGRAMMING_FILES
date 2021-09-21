
//WAP TO READ A NUMBER AND DELETE THE EVEN LOCATION DIGIT OF THAT NUMBER.

#include<stdio.h>

long int reverse(long int);

int main()
{
 int i=1,rem;
 long int num,modify_num=0;
 
 printf("\nEnter the number\n");
 scanf("%ld",&num);
 
 num=reverse(num);
 
 while(num>0)
 {
  rem=num%10;
  
  if(i%2!=0){
  modify_num=modify_num*10+rem;
 }
 
 num=num/10;
 i++;
}

 printf("\nThe number after deleting even position is : %ld\n\n",modify_num);
 
 return 0;
}

long int reverse(long int n)
{
 int rem;
 long int reverse_num=0;
 
 
 while(n>0)
 {
  rem=n%10;
  reverse_num=reverse_num*10+rem;
  
  n=n/10;
 }
 
 return reverse_num;
}
      
  
