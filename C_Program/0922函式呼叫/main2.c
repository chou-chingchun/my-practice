/*�s�g��Ө禡���O�D��Ӿ�ƪ��̤p�����ƩM�̤j�����ơA
�ΥD�禡�I�s�o��Ө禡�ÿ�X���G�C��Ӿ�ƥ���L��J�C*/
#include <stdio.h>
#include <stdlib.h>

int factor(int,int);
int multiple(int,int);
int main()
{
	int n,m;
	printf("�п�J�⥿���:");
	scanf("%d%d",&n,&m);
	printf("�̤p������:%d\n",factor(n,m));
	printf("�̤j���]��:%d\n",multiple(n,m));
	return 0;
}

int factor(int n,int m)
{
	int i,max,answer;
	max=n;
	if(m>max)
	{
		max=m;
	}
	for(i=max;i<=m*n;i=i+1)
	{
		if(i%n==0 && i%m==0)
		{
			answer=i;
			break;
		}
	}
	return answer;
}

int multiple(int n,int m)
{
	int i,min,answer;
	for(i=1;i<=n&&i<=m;i=i+1)
	{
		if(n%i==0 && m%i==0)
		{
			answer=i;
		}
		
	}
	return answer;
}

