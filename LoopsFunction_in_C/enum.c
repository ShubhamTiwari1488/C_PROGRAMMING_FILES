//USING ENUM FUNCTION IN C

#include<stdio.h>

typedef enum {f,t} boolean;

int main()
{
    boolean bool1,bool2,bool3;
    
    bool1=f;
    
    if(bool1==f)
        printf("Bool1 is false\n");
        
    else
        printf("Bool1 is true\n");
        
    
    bool2=2;
    
    if(bool2==f)
        printf("Bool2 is false\n");
        
    else
        printf("Bool2 is true\n");
        
        
    bool3=1;
    
    if(bool3==t)
        printf("Bool3 is true\n");
        
    else
        printf("Bool3 is false\n");
        
    return 0;
}
