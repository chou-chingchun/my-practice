//��J�@�Ӷ�b�|�]r�^��r>��0�ɡA�p��ÿ�X�ꪺ���n�M�P���A�_�h�A��X���ܸ�T
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int r,area,ln;
	printf("�п�J�b�|��:");
	scanf("%d", &r);
	if(r>0)
	{
		area=r*r;
		ln=2*r;
		printf("���n�O%dpi\n�P���O%dpi",area,ln);
	}
	else
	{
		printf("�п�J�����");
	}
	
	
	return 0;
}
