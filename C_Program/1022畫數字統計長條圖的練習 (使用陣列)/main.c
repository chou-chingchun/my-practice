#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j;//璸计
	int n;//块计
	int b[10]={0};//璸计皚
	printf("叫块10俱计:");
	for(i=1;i<=10;i=i+1)
	{
		scanf("%d",&n);
		b[(n-1)/10]++;
	}
	for(i=1;i<=10;i=i+1)
	{
		printf("%3d:",i*10);
		for(j=1;j<=b[i-1];j=j+1)
		{
			 printf("*");
		}
		printf("\n");
	} 
	
	
	return 0;
} 
