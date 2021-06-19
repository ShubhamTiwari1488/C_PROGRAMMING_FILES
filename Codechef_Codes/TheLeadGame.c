 #include<stdio.h>

int main()
{
    int Si,Ti,s1=0,s2=0,N,W,L,i,m=0,n=0;
    
    scanf("%d",&N);
    
    for(i=0;i<N;i++){
        scanf("%d %d",&Si,&Ti);
        m+=Si;
        n+=Ti;
        if(m>n){
            if(s1<(m-n)){
                s1=(m-n);
            }
        }
        
        else{
            if(s2<(n-m)){
                s2=(n-m);
            }
        }
        
        
    }
    
    if(s1>s2){
       W=1;
       L=s1;
    }
    else{
        W=2;
        L=s2;
    }   
    
    printf("%d %d\n",W,L);
    return 0; 
}

    
