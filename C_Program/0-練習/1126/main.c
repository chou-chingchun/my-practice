/*1�^�b�D�禡���A��{�q��L��J10�W�ǥͬY���Ҫ����Z�A�x�s�b�@���}�C���F
�I�s�ƧǨ禡�F��Ƨǫ᪺�}�C�����������q����C�C�L��X�C

2�^�s�g�ƧǨ禡�A�ϥΰ}�C�W���禡�޼ơA��{��Ӧ��Z���ƧǡC*/

#include <stdio.h>
#include <stdlib.h>
void sort(int []);
int main()
{
	int n[10]={0};
	int* p;
	int i;
	for(i=0;i<10;i=i+1);
	{
		printf("�п�J��%d��P�Ǫ����Z:",i+1);
		scanf("%d",&n[i]);
	}
	sort(n);
	for(i=0;i<10;i=i+1)
	{
		printf("%d\n",n[i]);
	}
	return 0;
}

void sort(int n[])
{
	int i,j,t;
	for(i=0;i<10;i=i+1)
	{
		for(j=0;j<9;j=j+1)
		{
			if(n[j]>n[j+1])
			{
				t=n[j];
				n[j]=n[j+1];
				n[j+1]=t;
			}
		}
	}
}
