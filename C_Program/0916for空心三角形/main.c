//�ŤߤT����
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int m,n,number;
	printf("�п�Jnumber=");
	scanf("%d",&number);
	for(n=1;n<=number;n=n+1)
	{
		for(m=1;m<=n;m=m+1)
		{
			if(m==1 || m==n || n==number)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	
	return 0;
} 
