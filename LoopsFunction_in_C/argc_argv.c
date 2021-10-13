
/*_____What does int argc , char *argv[] mean in C/C++ ?  


     >   argc stands for argument count and argv stands for argument values.
     >   These are variables passed to the main function when it starts execution.
     
                                                               _____________________*/
                                                               
#include<stdio.h>

int main(int argc,char *argv[])
{
 
 int i;
 
 printf("\nThis program has %d arguments\n",argc);
 
 for(i=0;i<argc;i++)
 {
  printf("%s",argv[i]);
  printf("\n");
 }
 
 return 0;
}  

