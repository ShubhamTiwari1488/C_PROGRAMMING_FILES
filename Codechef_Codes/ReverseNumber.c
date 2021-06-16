// REVERSING THE NUMBER ENTERED BY THE USER.

#include<stdio.h>

int main()
{
    long int num,rev_num=0;
    int t;
    
    scanf("%d",&t);
    
    while(t>0)
    {
        scanf("%ld",&num);
        
        while(num>0)
        {  
            rev_num=rev_num*10 + num%10;
            num=num/10;
        }
        
        printf("%ld\n",rev_num);
        rev_num=0;
        t--;
    }
    return 0;
}
