#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int i,n[5]={0};
	int q,max;
	printf("�п�J10�Ӿ��:");
	for(i=1;i<=5;i=i+1)
	{		
		scanf("%d",&n[i-1]);
	}
	do
	{
		int max=-1;//����q�p��W��d��̤p�� 
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
	    	printf("�p��d��A�Э��s��J\n");
		}
		if(max!=-1 && q!=0)
		{
			printf("%d \n",max);
		}	    
	}while(q!=0);
	
	return 0;
}
