//�ΰ}�C��{�H�U�\��G��J5�Ӿǥͦ��Z�A�ӫ�D�X�o�Ǧ��Z�������Ȩ���ܥX�ӡC
#include <stdio.h>
#include <stdlib.h>



int main()
{
	int score,sum=0,average=0,cont=1;
	do
	{
		printf("�п�J���Z:");
		scanf("%d",&score);
		sum=sum+score;
		cont=cont+1;
	}while(cont<=5);
	average=sum/cont;
	printf("�`�M�O:%d\n",sum);
	printf("�����O:%d\n",average);
	
	return 0;
}
