#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int i,n[5]={0};
	int q,max;
	printf("請輸入10個整數:");
	for(i=1;i<=5;i=i+1)
	{		
		scanf("%d",&n[i-1]);
	}
	do
	{
		int max=-1;//防止q小於上方範圍最小值 
		printf("Q:");
	    scanf("%d",&q);
	    for(i=0;i<5;i=i+1)
	    {
		    if(n[i]<=q)
		    {
			max=n[i];
		    }
	    }
	    if(max==-1 && q!=0)
	    {
	    	printf("小於範圍，請重新輸入\n");
		}
		if(max!=-1 && q!=0)
		{
			printf("%d \n",max);
		}	    
	}while(q!=0);
	
	return 0;
}
