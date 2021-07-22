// Solving the Hackerrank Bitwise Operator Question.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int i,j,mand=0,mor=0,mxor=0;
  for(i=1;i<=n;i++){
      for(j=i+1;j<=n;j++){
       if(mand<=(i&j) && k>(i&j))
          mand=i&j;
          
       if(mor<=(i|j) && k>(i|j))
          mor=i|j;
          
       if(mxor<=(i^j) && k>(i^j) )
          mxor=i^j;         
      }
      
  }
   printf("%d\n%d\n%d\n",mand,mor,mxor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
