/*____The Siruseri Sports Club organises an annual billiards game where the top two players of Siruseri play against each other.
The Manager of Siruseri Sports Club decided to add his own twist to the game by changing the rules for determining the winner.
In his version, at the end of each round, the cumulative score for each player is calculated, and the leader and her current lead are found.
Once all the rounds are over the player who had the maximum lead at the end of any round in the game is declared the winner.
Your task is to help the Manager find the winner and the winning lead. You may assume that the scores will be such that there will always be a single winner.
That is, there are no ties.                          ___________________*/


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

    
