// FINDING SQUARE ROOT OF THE INPUT DATA BY USER.

#include<stdio.h>
#include<math.h>

int main()
{
   int root,n;
   double a;
   
   scanf("%d",&n);
   
   while(n--)
   {
       scanf("%lf",&a);
       
       root=(int)(sqrt(a));
       
       printf("%d\n",root);
   }
   
   return 0;
}
