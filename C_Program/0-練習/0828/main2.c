/*9.�s�@�{���C�Ӥ�ھڨC�Ӥ�W���ɶ��p��W���O�ΡA�p���k�p�U�G
�n�D���J�C��W���p�ɼ�,��ܸӤ��`���W���O��(6��)*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a=0;//��� 
	int b=1;//�p�� 
	int sum;
	while(b<10)
	{
		printf("�п�J�W���ɼ�:");
		scanf("%d",&a);
		b=b+1;//����֥[ 
		sum=sum+a;
	}
	printf("�o�Ӥ��`�@��%d��\n�W���`�ɼ�%d�p��",b,sum);
	
	return 0;
} 
