
//Time Conversion


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int hh,mm,ss;
    char ch[3];
    
    scanf("%d:%d:%d",&hh,&mm,&ss);
    scanf("%s",ch);
    
    if(strcmp(ch,"AM")==0)
    {
        if(hh==12)
        {
            hh=hh-12;
        }
    }
    
    if(strcmp(ch,"PM")==0)
    {
        if(hh<12)
        {
            hh=hh+12;
        }
        
        else  {
        hh=hh;
        }
    }
    
    printf("%02d:%02d:%02d\n",hh,mm,ss);
    
    return 0;
}

