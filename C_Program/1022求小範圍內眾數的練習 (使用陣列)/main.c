#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,n;//�p�ơA��J���Ʀr
	int b[10]={0};
	printf("�п�J10��0~9�������:");
	for(i=1;i<=10;i=i+1)
	{
		scanf("%d",&n);
		b[n]++;
	} 
	int max=0;
	for(i=1;i<10;i=i+1)
	{
		if(b[i]>=b[max])//���]b[0]�O�̤j�A�A�@�@��� 
		{
			max=i;
		}
	}
	printf("%d\n",max);
	
	return 0;
}
