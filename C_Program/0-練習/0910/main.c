//�{���]�p�ǹ�{�D1-1000�������Ҧ��_�ƪ��M�ÿ�X�C
#include <stdio.h>
#include <stdlib.h>



int main() 
{
	int a,sum;
	for(a=0;a<=1000;a=a+1)
	{
		if(a%2==1)
		{
			printf("%d\n",a);
			sum=sum+a;
		}
	}
	printf("�`�X��:%d",sum);
	
	return 0;
}
