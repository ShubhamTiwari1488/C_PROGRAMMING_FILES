
//HACKERRANK Grading Students

#include<stdio.h>
#include<stdlib.h>

int main()
{
     int *grade;
     int n,nextmul,i=0;
     
     scanf("%d",&n);
     
     grade=(int *)malloc(n*sizeof(int));
     
     while(i<n)
     {
       scanf("%d",&grade[i]);
       
       i++;
     }
     
     for(i=0;i<n;i++){
      if(grade[i]>=38)
      {
           nextmul=grade[i]/5*5+5;
           
           if(nextmul-grade[i]<3)
           {
               grade[i]=nextmul;
           }
       }
       
       printf("%d\n",grade[i]);
     }  
        
    return 0;
         
}
