/*���{��ϥΪ̵L�믲�O�A�ܶO�C����0.6���A
���y�q�ϥΪ̤믲�O50���A�ܶO�C����0. 4���C
��J�@�Ӥ몺�q�ܮɶ��A���O�p��X��ؤ覡���O�ΡA�P�_���@�ئX�A�C*/
#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int a,b,c;//���{.���y.�ɶ�
	printf("�п�J�q�ܮɶ�:");
	scanf("%d",&c);
	a=c*0.6;
	b=c*0.4+50;
	printf("���{��ʶO�άO:%d\n",a);
	printf("���y�q��̶O�άO:%d\n",b);
	if(a>b)
	{
		printf("���y��ʪ̤���A�X\n");
    }
    else if(a<b)
    {
    	printf("���{��ʤ���A�X\n");
	}
	else
	{
		printf("���i�H");
	}
	
	return 0;
}
