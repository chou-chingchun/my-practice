//�D�@��3��3�x�}�﨤�u�������M�C�q��L��J�x�}�������Ȩÿ�X�M����.
#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int i=1,j,number,sum=0;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("�п�J�ƭ�:");
			scanf("%d",&number);
			if(i==j)
			{
				sum=sum+number;
			}
		}
	}
	printf("�`�X��%d",sum);
	return 0;
}





