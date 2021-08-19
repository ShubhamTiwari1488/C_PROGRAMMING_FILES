
//WAP TO ADD TWO DISTANCES BY PASSING STRUCTURE TO A FUNCTION

#include<stdio.h>

struct distance
{
 float d1;
 float d2;
};

float add(struct distance);

int main()
{
 struct distance d;
 float sum;
 
 printf("\nEnter two distances \n");
 scanf("%f %f",&d.d1,&d.d2);
 
 sum=add(d);
 
 printf("\nAfter adding the two distances we get : %.2f KM.\n",sum);
 
 return 0;
}

float add(struct distance d)
{
 float sum;
 
 sum=d.d1+d.d2;
 
 return sum;
}
   
