#include <stdio.h>
#include <stdlib.h>

int main()
{
	int m,n,number;
	printf("�п�J�@���ܼ�:");
	scanf("%d", &number);
	for(m=1;m<=number;m=m+1)
	{
		for(n=1;n<=number;n=n+1)
		{
			if(m==1||m==number||n==1||n==number)//�ήy�Ъ����� 
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
