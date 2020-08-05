#include <stdio.h>
#include <stdlib.h>


int main()
{
	int i,n[5]={0};
	int q;
	printf("請輸入10個整數:");
	for(i=1;i<=5;i=i+1)
	{		
		scanf("%d",&n[i-1]);
	}
	while(1)
	{
		printf("Q:");
		scanf("%d",&q);
		int near_n=n[0];
		if(q==0)
		{
			break;
		}
		for(i=1;i<5;i=i+1)
		{
			if(abs(q-n[i])<abs(q-near_n) || (abs(q-n[i])==abs(q-near_n) && n[i]<near_n))
		    {
		    	near_n=n[i];
			}
			
		}
		printf("%d\n",near_n);
	}
	return 0;
}
