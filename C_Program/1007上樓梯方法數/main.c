#include <stdio.h>
#include <stdlib.h>

int f(int);
int main()
{
	int n;//�ӱ��
	printf("�п�J�ӱ��:");
	scanf("%d",&n);
	printf("��k��%d��\n",f(n)); 
	
	return 0;
}

int f(int n)
{
	if(n<=2)
	{
		return n;
	}
	return f(n-1)+f(n-2);
}
