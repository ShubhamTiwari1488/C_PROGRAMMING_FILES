    #include<stdio.h>
    #include<string.h>
    typedef struct stack
    {
    	char A[1000];
    	int top;
    }stack;
    
    void arranging(char *s, int n, stack *p)
    {
    	int i,j,k;
    	char temp[1000];
    	for(i=0; i<n; ++i)
    	{
    		if(s[i] == '\\')
    		{
    			k = 0;
    			while(p->A[p->top] != '/')
    				temp[k++] = p->A[p->top--];
    			--p->top;
    			j=0;
    			while(j<k)
    				p->A[++p->top] = temp[j++];
    		}
    		else
    			p->A[++p->top] = s[i];
    	}
    	for(i=0;i<=p->top;i++)
    	{
    		printf("%c",p->A[i]);
    	}
    }
    int main(void)
    {
    	stack s1;
    	s1.top = -1;
    	char S[1000];
    	printf("\nEnter the input ");
    	scanf("%s", S);
    	printf("\nAfter rearranging the library :\t");
    	arranging(S,strlen(S),&s1);
    	printf("\n");
    	return 0;
    }
