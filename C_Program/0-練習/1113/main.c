/*�w�q�@��5��3�C���}�C�A�q��L��J�U�}�C�������ȡA�p��U�}�C�������M�C*/ 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j,sum=0;	
	int n[5][3]={0};
	for(i=0;i<5;i=i+1)
	{
		for(j=0;j<3;j=j+1)
		{
			scanf("%d",&n[i][j]);
			sum = sum + n[i][j];
		}
	}
	printf("%d",sum);
	
	return 0;
}

