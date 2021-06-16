// TAKE INPUT FROM USER AND FIND THE SUM OF FIRST AND LAST DIGIT.

#include <stdio.h>

int main()
{
    long int num;
    int f,l,n,i;
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%ld",&num);
        
        l=num%10;
        
        while(num>0)
        {
            if(num<10)
               f=num;
               
            num=num/10;   
        }
        
        printf("%d\n",(f+l));
    }
    
    return 0;
}

