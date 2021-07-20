
/*______________________________POINTERS AND STRUCTURES__________________________________*/

#include<stdio.h>

int main()
{

 struct inventory
 {
  char name[30];
  int number;
  float price;
 }
 product[2],*ptr;
 
 ptr=product;
 
 for(;ptr<(product+2);ptr++)
 {
  scanf("%s %d %f",ptr->name,&ptr->number,&ptr->price);
 }
 
 for(ptr=product;ptr<(product+2);ptr++)
 {
  printf("%s %d %f\n",ptr->name,ptr->number,ptr->price);
 }
 
 return 0;
}
    
