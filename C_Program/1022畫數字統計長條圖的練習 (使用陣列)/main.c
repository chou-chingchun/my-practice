#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j;//�p��
	int n;//��J���Ʀr
	int b[10]={0};//�p�ƪ��}�C
	printf("�п�J10�Ӿ��:");
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
