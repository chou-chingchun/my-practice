/*�q�ƹC���C�t���H�����ͤ@�Ӿ�ơA�q�L��L��J��Ʋq�ơA�q�אּ��A�ín�D�έp�q�����ơC
�`�Grand()�禡�i�H����0��32767��������ơA�{�����ݥ]�tstdlib.h�C*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void answer(int);
int main()
{
	int a;
	srand(time(NULL));
	a=rand()%100+1;
	answer(a);
	
	
	return 0;
} 
void answer(int a)
{
	int guess,cout=0;
	do
	{
		printf("�п�J1~100�A�Ҳq���Ʀr:");
		scanf("%d",&guess);
		if(guess>a)
		{
			printf("�Ӥj�F\n");
		}
		if(guess<a)
		{
			printf("�Ӥp�F\n");
		}
		if(guess==a)
		{
			printf("�q��F\n");
		}
		cout=cout+1;
		
	}while(guess!=a);
	printf("���׬O%d\n",a);
	printf("�q�F%d��\n",cout);
}
