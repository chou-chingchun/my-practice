//�D�@��3��3�x�}�﨤�u�������M�C�q��L��J�x�}�������Ȩÿ�X�M����. 
#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int i,j,a,cont,sum=0;
	for(i=1;i<=3;i=i+1)
	{
		for(j=1;j<=3;j=j+1)
		{
			printf("�п�Ja=");
			scanf("%d",&a);
			if(i==j)
			{
				sum=sum+a;
			}
		}
	}
	printf("%d",sum);
	return 0;
}
