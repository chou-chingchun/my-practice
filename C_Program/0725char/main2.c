//�q��L��J10�Ӿ�ơA�έp�䤤���ơB�t�ƩM�s���ӼơA�æb�ù��W��X�C
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int cout=0,a,cout1=0,cout2=0,cout3=0;//����.��J��.��>0.��<0.��=0 
	for(cout=1;cout<=10;cout=cout+1)
	{
		printf("�п�J�@�ӼƦr:");
		scanf("%d",&a);
		if(a>0)
		{
			cout1=cout1+1;
		}
		if(a<0)
		{
			cout2=cout2+1;
		}
		if(a==0)
		{
			cout3=cout3+1;
		}
	}
	
	printf("��%d�ӥ���\n",cout1);
	printf("��%d�ӭt��\n",cout2);
	printf("��%d��0\n",cout3);
	
	
	
	return 0;
}
