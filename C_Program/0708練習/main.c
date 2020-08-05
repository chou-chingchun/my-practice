#include <stdio.h>
#include <stdlib.h>

int main()
{
	int v[5],i,j,t;
	for(i=0;i<5;i=i+1)
	{
		scanf("%d",&v[i]);
	}
	for(j=0;j<4;j=j+1)
	{
		if(v[j]>v[j+1])
		{
			t=v[j]; v[j]=v[j+1]; v[j+1]=t;			
		}
	}
		
	for(i=0;i<5;i=i+1)
	{
		printf("%d ",v[i]);
	}
	return 0;
} 
