
/*____________________PRINTING THE CHARACTERS AND STRINGS________________________________*/

#include<stdio.h>

int main()
{
 char name[50];

 
 printf("\n >>>Enter your name please.\n");
 
 scanf("%[^\n]",name);
 
 printf("\n");
 
 
 printf("%s \n",name);
 printf("%20s \n",name);
 printf("%20.10s \n",name);
 printf("%.5s \n",name);
 printf("%-20.10s \n",name);
 printf("%5s \n",name);
 
 return 0;
}

 
