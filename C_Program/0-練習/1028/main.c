/*�N�@�Ӧ�5�Ӥ������}�C������(���)���f�ǭ��s�s��C
��: ��Ӷ��Ǭ�:8�B6�B5�B4�B1�A�n�D�אּ1�B4�B5�B6�B8*/ 
#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int i,j,t,n[5]={0};
	printf("�п�J���Ӿ��:");
	for(i=1;i<=5;i=i+1)//��J��� 
	{
		scanf("%d",&n[i-1]);
	}
	for(i=0;i<4;i=i+1)//���f�ǱƦC 
	{
		for(j=0;j<4-i;j=j+1)
		{
			t=n[j];
			n[j]=n[j+1];
			n[j+1]=t;
			//printf("i=%d j=%d n[%d]=%d n[%d]=%d \n",i,j,i,n[i],j,n[j]);
		}
				
	}
	for(i=0;i<5;i=i+1)//�L�X���G 
	{
		printf("%d ",n[i]);
	}
	return 0;
}
