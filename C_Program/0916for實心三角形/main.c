//��ߤT���� 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int m,n,number;
	printf("�п�Jnumber=");
	scanf("%d",&number);
	for(m=1;m<=number;m=m+1)
	{
		for(n=1;n<=m;n=n+1)
		{
			printf("*");
		}
		printf("\n");
	}
	
	
	return 0;
} 
