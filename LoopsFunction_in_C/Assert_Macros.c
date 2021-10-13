
//DEMONSTRATING ASSERT MACROS

// Assert Macros checks the value of an expression that we expect to be true under normal circumstances.


#include<stdio.h>
#include<assert.h>

int main(int argc,const char*argv[])
{
 int exp=1;
 
 printf("\nExp is : %d\n",exp);
 
 assert(exp);    //Assert should not exit in this case as exp is not 0
 
 exp=0;
 
 printf("\nExp is : %d\n",exp);
 
 assert(exp);     //Assert should exit in this case as exp is 0 and it will display an error.
 
 return 0;
}
 
