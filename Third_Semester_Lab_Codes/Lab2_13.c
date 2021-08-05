
//MODIFY THE QUESTION NUMBER 12 TO RETURN A STRUCTURE POINTER

#include<stdio.h>
#include<stdlib.h>

struct distance
{
 float d1;
 float d2;
 float sum;
};

struct distance *add(struct distance *);
struct distance *input(void);

int main()
{
 struct distance *d;
 float total;
 
 d=input();
 
 d=add(d);
 
 printf("\n%f \t %f\n",d->d1,d->d2);
 
 printf("\nAfter adding the two distances we get : %.2f\n",d->sum);
 
 return 0;
}

struct distance *add(struct distance *d)
{
 float total;
 
 total=(d->d1)+(d->d2);
 
 d->sum=total;
 
 return d;
}

struct distance *input(void)
{
 struct distance *s1=(struct distance *)malloc(sizeof(struct distance));
 
 printf("\nEnter two distances \n");
 scanf("%f %f",&s1->d1,&s1->d2);   
 
 return s1;
}
 
 
