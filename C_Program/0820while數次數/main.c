#include <stdio.h>
#include <stdlib.h>

int main()
{
	int guess,answer=20,cont=0;
	while(cont ==0 ||guess!=answer)
	{
		printf("�п�J�Ʀr:");
	    scanf("%d",&guess);
		if(guess>answer)
		{
			printf("�Ӥj�F\n");
		}
		else if(guess>answer)
		{
			printf("�Ӥp�F\n");
		}
	cont=cont+1;
	printf("��%d��\n",cont);
	}
	printf("���ߵ���\n");
	
	
	return 0;
}
