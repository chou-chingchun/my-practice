#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,m=0,cont=0;
	printf("�п�J�@���ܼ�:");
	scanf("%d",&n);
	for(cont=1;cont<=n;cont=cont+1)
	{
		for(m=1;m<=n;m=m+1)
		{
			printf("*");
		}
		printf("\n");
	}
	
	
	return 0;
} 
