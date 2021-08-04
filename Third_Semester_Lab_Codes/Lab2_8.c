
// WAP TO FIND THE LCM OF TWO NUMBERS


#include <stdio.h>  
  
int LCM( int a, int b); // function declaration   
  
int main()  
{  
    int n1, n2, lcm; // declaration of variables  
    printf (" \n Enter any two positive numbers to get the LCM of: \n");  
    scanf ("%d %d", &n1, &n2);  
    lcm = LCM( n1, n2); // function calling  
    printf ( " \n LCM of %d and %d is %d. \n", n1, n2, lcm);  
    return 0;  
}  
  
int LCM( int n1, int n2) // function definition   
{  
    /* static variabe is iniatialized only once for each function call */     
    static int max = 1;  
    if ( max % n1  == 0 && max % n2 == 0)  
    {  
        return max;  
    }  
    else  
    {  
        max++;  
        LCM( n1, n2);  
        return max;  
    }  
}  
