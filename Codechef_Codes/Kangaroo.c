
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x1,v1,x2,v2;
    int jump,quo;
    
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    
    if(v2!=v1)
    {
    jump=(x2-x1)%(v1-v2);
    quo=(x2-x1)/(v1-v2);
    
    if(jump==0 && quo>=0 )
        printf("YES");
        
    else {
        printf("NO");
    }
    }
    
    else if(x2==x1)
        printf("YES");
        
    else {
        printf("NO");
    }
    
    return 0;
    
    
}
