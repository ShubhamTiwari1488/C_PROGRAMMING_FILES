// TAKING INPUT FROM USER AND FINDING OUT HOW MANY TIMES FOUR HAS APPEARED IN IT.

#include<stdio.h>

int main()
{
    long int num;
    int count=0,tmp=0,i;
    
    scanf("%d",&i);
    
    while(i>0)
    {
        scanf("%ld",&num);
        
        while(num>0)
        {
            tmp=num%10;
            if(tmp==4)
               count+=1;
               
            num=num/10;
        }
        printf("%d\n",count);
        count=0;
        
        i--;
    }
    return 0;
}
