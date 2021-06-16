#include <stdio.h>

int main() 
{
	int wamt;
	float amt, ramt;
	scanf("%d %f", &wamt,&amt);

    //scanf("%f", &amt);

	if(wamt%5==0 && wamt<=(amt-0.50))
	{
	    ramt =  amt-wamt-0.5;
	    printf("%f", ramt);
	}
	else
	printf("%.2f", amt);
	return 0;
}
