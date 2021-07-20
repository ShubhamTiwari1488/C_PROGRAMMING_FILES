
/*___________________ARRAY OF POINTERS__________________-*/

#include<stdio.h>

int main()
{
 char *name[3]={"New Zealand","Australia","India"};
 int i,j;
 
 for(i=0;i<=2;i++)
    for(j=0;*(name[i]+j)!='\0';j++)
         printf("%c\n",*(name[i]+j));
    
 return 0;
}
    
