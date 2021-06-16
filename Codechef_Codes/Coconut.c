// COCONUT PROBLEM FROM CODECHEF.

#include <stdio.h>

int main()
{
    int xa,xb,Xa,Xb,na,nb,n,i;
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&xa);
        scanf("%d",&xb);
        scanf("%d",&Xa);
        scanf("%d",&Xb);
        
        na=Xa/xa;
        nb=Xb/xb;
        
        printf("%d\n",(na+nb));
    }
    
    return 0;
}
